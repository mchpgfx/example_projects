/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdbool.h>

#include "gfx/legato/generated/le_gen_init.h"

/* Hide/Show positions for calendar picker dialog box */
#define CALENDAR_SHOW_Y     40
#define CALENDAR_HIDE_Y     480

/* String buffer sizes */
#define DATE_STR_SIZE       12
#define YEAR_STR_SIZE       4
#define DAY_STR_SIZE        2

/* Default date */
#define MONTH_DEFAULT MONTH_JAN
#define YEAR_DEFAULT 2025
#define DAY_DEFAULT 1

/* Max and min values */
#define MAX_NUM_DAYS 31
#define YEAR_MIN    1930
#define YEAR_MAX    2100

#define MAX_CELL_ROWS 6
#define MAX_CELL_COLS 7

/* Months of the year */
typedef enum
{
    MONTH_JAN = 1,
    MONTH_FEB,
    MONTH_MAR,
    MONTH_APR,
    MONTH_MAY,
    MONTH_JUN,
    MONTH_JUL,
    MONTH_AUG,
    MONTH_SEP,
    MONTH_OCT,
    MONTH_NOV,
    MONTH_DEC,  
    NUM_MONTHS
} APP_MONTH_t;

/* Struct for month information */
typedef struct
{
    uint32_t numDays; /* Num of days in month */
    leString * str;   /* String asset for month name */
} APP_MONTH_INFO_t;

/* Record of month # of days and string names */
static APP_MONTH_INFO_t monthInf[NUM_MONTHS] =
{
    [MONTH_JAN] = {31, (leString *) &string_strJan},
    [MONTH_FEB] = {28, (leString *) &string_strFeb},
    [MONTH_MAR] = {31, (leString *) &string_strMar},
    [MONTH_APR] = {30, (leString *) &string_strApr},
    [MONTH_MAY] = {31, (leString *) &string_strMay},
    [MONTH_JUN] = {30, (leString *) &string_strJun},
    [MONTH_JUL] = {31, (leString *) &string_strJul},
    [MONTH_AUG] = {31, (leString *) &string_strAug},
    [MONTH_SEP] = {30, (leString *) &string_strSept},
    [MONTH_OCT] = {31, (leString *) &string_strOct},
    [MONTH_NOV] = {30, (leString *) &string_strNov},
    [MONTH_DEC] = {31, (leString *) &string_strDec},
};

/* Fixed strings for run-time strings */
static leFixedString setDateFixedStr;
static leChar setDateStrBuff[DATE_STR_SIZE] = {0};

static leFixedString yearFixedStr;
static leChar yearStrBuff[YEAR_STR_SIZE] = {0};

static leFixedString daysFixedStr[MAX_NUM_DAYS];
static leChar daysStrBuff[MAX_NUM_DAYS][DAY_STR_SIZE] = {0};

/* current month, year and day */
static APP_MONTH_t month = MONTH_DEFAULT;
static uint32_t year = YEAR_DEFAULT;
static uint32_t day = DAY_DEFAULT;

/* 
 * Sakamoto's method for calculating day of week for given day 
 * Source: Wikipedia
 */
static uint32_t dayofweek(uint32_t y, uint32_t m, uint32_t d)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    
    if ( m < 3 )
    {
        y -= 1;
    }
    
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;    
}

/* 
 * Helper function that gets the day from specified row and col 
 * startDay is the day of week for the first day of the month
 * 
 * Returns <= 0 if cell doesn't map to a day
 */
static int32_t getDayByCell(uint32_t startDay, uint32_t cellRow, uint32_t cellCol)
{
    int32_t day = (cellRow * MAX_CELL_COLS) + cellCol + 1;
   
    /* offset the day based on the start day */
    day -= startDay;
    
    return day;
}

/* Configures the keypad widget based on the specified year and month */
static void APP_CreateCalendar(uint32_t year, uint32_t month)
{
    uint32_t cellRow = 0;
    uint32_t cellCol = 0;
    uint32_t day = 1;
    uint32_t maxDays;
    uint32_t startDay;
    
    /* Calculate the day of week for first day of month */
    startDay = dayofweek(year, month, day);

    /* Get num of days in month */
    if (month == MONTH_FEB && 
        ((year % 4 == 0 && year % 100 != 0) || (year %400 == 0)))
    {
        /* If Feb and a leap year, # of days is 29 */
        maxDays = 29;
    }
    else
    {
        /* look up num of days in month table */
        maxDays = monthInf[month].numDays;
    }
    
    /* Iterate thru each cell in the keypad widget */
    for (cellRow = 0; cellRow < MAX_CELL_ROWS; cellRow++)
    {
        for (cellCol = 0; cellCol < MAX_CELL_COLS; cellCol++)
        {
            leButtonWidget * cell;
            char dayStr[DAY_STR_SIZE + 1] = {0};

            cell  = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, cellRow, cellCol);
            if (cell != NULL)
            {
                /* Get the day for each cell */
                int32_t day = getDayByCell(startDay, cellRow, cellCol);
                if (day >= 1 && day <= maxDays)
                {
                    /* If a valid day, set the cell string and images */
                    snprintf(dayStr, DAY_STR_SIZE + 1, "%u", day);
                    daysFixedStr[day - 1].fn->setFromCStr(&daysFixedStr[day - 1], dayStr);
                    cell->fn->setString(cell, (leString *) &daysFixedStr[day - 1]);
                    cell->fn->setPressedImage(cell, &ButtonDown);
                    cell->fn->setReleasedImage(cell, &ButtonUp);
                    
                    /* Enable the cell so it can be selected */
                    cell->fn->setEnabled(cell, LE_TRUE);
                }
                else
                {
                    /* If a no valid day, clear the cell */
                    cell->fn->setString(cell, (leString *) NULL);
                    cell->fn->setPressedImage(cell, NULL);
                    cell->fn->setReleasedImage(cell, NULL);
                    
                    /* Disable the cell so it cannot be selected */
                    cell->fn->setEnabled(cell, LE_FALSE);
                }
            }
        }
    }
}

/* Key event handler for the cells. This is called when a user presses an enabled cell */
void event_Screen0_keyCalendar_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    int32_t day;
    uint32_t startDay;
    char setDateStr[DATE_STR_SIZE + 1] = {0};
    uint32_t maxDays;
    
    /* Calculate the day of week for first day of month */
    startDay = dayofweek(year, month, day);

    /* Get num of days in month */
    if (month == MONTH_FEB && 
        ((year % 4 == 0 && year % 100 != 0) || (year %400 == 0)))
    {
        /* If Feb and a leap year, # of days is 29 */
        maxDays = 29;
    }
    else
    {
        /* look up num of days in month table */
        maxDays = monthInf[month].numDays;
    }    
    
    /* Get start day of the month */
    startDay = dayofweek(year, month, 1);
    
    /* Get the day for the specified cell */
    day = getDayByCell(startDay, row, col);
    if (day >= 1 && day <= maxDays)
    {
        /* if valid day, show the set date on the screen */
        snprintf(setDateStr, DATE_STR_SIZE + 1, "%d/%d/%d", month, day, year);
        setDateFixedStr.fn->setFromCStr(&setDateFixedStr, setDateStr);

        Screen0_btnSetDate->fn->setString(Screen0_btnSetDate, (leString *) &setDateFixedStr);  

        /* Hide the calendar dialog box */
        Screen0_pnlCalendarDialog->fn->setY(Screen0_pnlCalendarDialog, 480);
    }
}

/* Button event handler to show previous year */
void event_Screen0_btnPrevYear_OnReleased(leButtonWidget* btn)
{
    char yearStr[YEAR_STR_SIZE + 1] = {0};
    
    if (year > YEAR_MIN)
        year--;
    
    /* update the year label */
    snprintf(yearStr, YEAR_STR_SIZE + 1, "%u", year);
    yearFixedStr.fn->setFromCStr(&yearFixedStr, yearStr);
    Screen0_lblYear->fn->setString(Screen0_lblYear, (leString *) &yearFixedStr);

    /* Update the calendar */
    APP_CreateCalendar(year, month);
}

/* Button event handler to show previous month  */
void event_Screen0_btnPrevMonth_OnReleased(leButtonWidget* btn)
{
    if (month > MONTH_JAN)
        month--;
    
    /* update the month year label */
    Screen0_lblMonth->fn->setString(Screen0_lblMonth, monthInf[month].str);
    
    /* Update the calendar */
    APP_CreateCalendar(year, month);
}

/* Button event handler to show next year */
void event_Screen0_btnNextYear_OnReleased(leButtonWidget* btn)
{
    char yearStr[YEAR_STR_SIZE + 1] = {0};
    
    if (year < YEAR_MAX)
        year++;
    
    /* update the year label */
    snprintf(yearStr, YEAR_STR_SIZE + 1, "%u", year);
    yearFixedStr.fn->setFromCStr(&yearFixedStr, yearStr);
    
    Screen0_lblYear->fn->setString(Screen0_lblYear, (leString *) &yearFixedStr);
    
    /* Update the calendar */
    APP_CreateCalendar(year, month);
}

/* Button event handler to show next month  */
void event_Screen0_btnNextMonth_OnReleased(leButtonWidget* btn)
{
    if (month < MONTH_DEC)
        month++;
    
    /* update the month year label */
    Screen0_lblMonth->fn->setString(Screen0_lblMonth, monthInf[month].str);
    
    /* Update the calendar */
    APP_CreateCalendar(year, month);
}

/* Button Event handler to set date */
void event_Screen0_btnSetDate_OnReleased(leButtonWidget* btn)
{
    /* Show the calendar picker dialog box */
    Screen0_pnlCalendarDialog->fn->setY(Screen0_pnlCalendarDialog, CALENDAR_SHOW_Y);
}

/* Button Event handler to close the calendar dialog box */
void event_Screen0_btnClose_OnReleased(leButtonWidget* btn)
{
    /* Show the calendar picker dialog box */
    Screen0_pnlCalendarDialog->fn->setY(Screen0_pnlCalendarDialog, CALENDAR_HIDE_Y);
}

/* Screen OnShow handler  */
void Screen0_OnShow(void)
{
    uint32_t day;
    
    /* Initialize the fixed strings used for the run-time strings */
    for (day = 0; day < MAX_NUM_DAYS; day++)
    {
        leFixedString_Constructor(&daysFixedStr[day], daysStrBuff[day], DAY_STR_SIZE);
        daysFixedStr[day].fn->setFont(&daysFixedStr[day], (leFont*) &NotoSansSmall); 
    }
    
    leFixedString_Constructor(&yearFixedStr, yearStrBuff, YEAR_STR_SIZE);
    yearFixedStr.fn->setFont(&yearFixedStr, (leFont*) &NotoSansSmall); 
    
    leFixedString_Constructor(&setDateFixedStr, setDateStrBuff, DATE_STR_SIZE);
    setDateFixedStr.fn->setFont(&setDateFixedStr, (leFont*) &NotoSansSmall); 
    
    /* Fill up and show the calendar for the specified year/month */
    APP_CreateCalendar(year, month);
}

void Screen0_OnHide(void)
{
    /* Nothing to do when screen is destroyed */
}

void Screen0_OnUpdate(void)
{
    /* Nothing to do when screen is updated  */
}


/*******************************************************************************
 End of File
 */
