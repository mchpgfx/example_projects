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

#define YEAR_STR_SIZE 4
#define DAY_STR_SIZE 2

#define MAX_NUM_DAYS 31

#define MONTH_DEFAULT MONTH_JAN
#define YEAR_DEFAULT 2025
#define DAY_DEFAULT 1

#define YEAR_MIN    1930
#define YEAR_MAX    2100

#define MAX_CELL_ROWS 6
#define MAX_CELL_COLS 7

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

typedef struct
{
    uint32_t numDays;
    leString * str;
} APP_MONTH_OBJ_t;

static APP_MONTH_OBJ_t monthConf[NUM_MONTHS] =
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

static leFixedString yearFixedStr;
static leChar yearStrBuff[YEAR_STR_SIZE] = {0};

static leFixedString daysFixedStr[MAX_NUM_DAYS];
static leChar daysStrBuff[MAX_NUM_DAYS][DAY_STR_SIZE] = {0};

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

static void getCellByDay(uint32_t startDay, uint32_t day, uint32_t * cellRow, uint32_t * cellCol)
{
    day += startDay;
    
    *cellCol = startDay % MAX_CELL_COLS;
    *cellRow = startDay / MAX_CELL_COLS;
}

static int32_t getDayByCell(uint32_t startDay, uint32_t cellRow, uint32_t cellCol)
{
    int32_t day = (cellRow * MAX_CELL_COLS) + cellCol + 1;
    
    day -= startDay;
    
    return day;
}

static void APP_CreateCalendar(uint32_t year, uint32_t month)
{
    uint32_t cellRow = 0;
    uint32_t cellCol = 0;
    uint32_t day = 1;
    uint32_t maxDays;
    uint32_t startDay;
    
    startDay = dayofweek(year, month, day);

    /* Check if leap year */
    if (month == MONTH_FEB && 
        ((year % 4 == 0 && year % 100 != 0) || (year %400 == 0)))
    {
        maxDays = 29;
    }
    else
    {
        maxDays = monthConf[month].numDays;
    }
    
    for (cellRow = 0; cellRow < MAX_CELL_ROWS; cellRow++)
    {
        for (cellCol = 0; cellCol < MAX_CELL_COLS; cellCol++)
        {
            int32_t day = getDayByCell(startDay, cellRow, cellCol);
            leButtonWidget * cell;
            char dayStr[DAY_STR_SIZE + 1] = {0};

            cell  = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, cellRow, cellCol);
            if (cell != NULL)
            {
                if (day >= 1 && day <= maxDays)
                {
        
                    snprintf(dayStr, DAY_STR_SIZE + 1, "%u", day);
                    daysFixedStr[day - 1].fn->setFromCStr(&daysFixedStr[day - 1], dayStr);
                    cell->fn->setString(cell, (leString *) &daysFixedStr[day - 1]);
                }
                else
                {
                    cell->fn->setString(cell, (leString *) NULL);
                    
                }
            }
        }
    }
}

void event_Screen0_keyCalendar_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    
}

void event_Screen0_btPrevYear_OnReleased(leButtonWidget* btn)
{
    char yearStr[YEAR_STR_SIZE + 1] = {0};
    
    if (year > YEAR_MIN)
        year--;
    
    snprintf(yearStr, YEAR_STR_SIZE + 1, "%u", year);
    yearFixedStr.fn->setFromCStr(&yearFixedStr, yearStr);
    
    Screen0_lblYear->fn->setString(Screen0_lblYear, (leString *) &yearFixedStr);
    
    APP_CreateCalendar(year, month);
}

void event_Screen0_btPrevMonth_OnReleased(leButtonWidget* btn)
{
    if (month > MONTH_JAN)
        month--;
    
    Screen0_lblMonth->fn->setString(Screen0_lblMonth, monthConf[month].str);
    
    APP_CreateCalendar(year, month);
}

void event_Screen0_btNextYear_OnReleased(leButtonWidget* btn)
{
    char yearStr[YEAR_STR_SIZE + 1] = {0};
    
    if (year < YEAR_MAX)
        year++;
    
    snprintf(yearStr, YEAR_STR_SIZE + 1, "%u", year);
    yearFixedStr.fn->setFromCStr(&yearFixedStr, yearStr);
    
    Screen0_lblYear->fn->setString(Screen0_lblYear, (leString *) &yearFixedStr);
    
    APP_CreateCalendar(year, month);
}

void event_Screen0_btNextMonth_OnReleased(leButtonWidget* btn)
{
    if (month < MONTH_DEC)
        month++;
    
    Screen0_lblMonth->fn->setString(Screen0_lblMonth, monthConf[month].str);
    
    APP_CreateCalendar(year, month);
}

void Screen0_OnShow(void)
{
    uint32_t day;
    
    for (day = 0; day < MAX_NUM_DAYS; day++)
    {
        leFixedString_Constructor(&daysFixedStr[day], daysStrBuff[day], DAY_STR_SIZE);
        daysFixedStr[day].fn->setFont(&daysFixedStr[day], (leFont*) &NotoSansSmall); 
    }
    
    leFixedString_Constructor(&yearFixedStr, yearStrBuff, YEAR_STR_SIZE);
    yearFixedStr.fn->setFont(&yearFixedStr, (leFont*) &NotoSansSmall); 

    APP_CreateCalendar(year, month);
}

void Screen0_OnHide(void)
{
    
}

void Screen0_OnUpdate(void)
{
    
}


/*******************************************************************************
 End of File
 */
