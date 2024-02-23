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

#include "app.h"
#include "definitions.h"
#include "system/time/sys_time.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

#define UPDATE_TIMER_PERIOD_TENTH_SEC 100
#define UPDATE_TIMER_PERIOD_SEC 1000

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

static leDynamicString hoursText;
static leDynamicString minutesText;
static leDynamicString secondsText;
static leDynamicString tenthsecondsText;

static int32_t tenthsecondsCount = 0;
static int32_t secondsCount      = 0;
static int32_t minutesCount      = 0;
static int32_t hoursCount        = 0;

static char charBuff[3] = {0};

static SYS_TIME_HANDLE clockTimer;

static enum
{
    SCREEN_DO_NOTHING = 0,
    SCREEN_NEXT,
    SCREEN_WAIT_FOR_NEXT,
    SCREEN_MOVE_TO_NEXT,
    SCREEN_DONE
} screenState;


// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

/* clockTimer_Callback

  Description:
    This function is called when timer expires, which is every second.
 *  This function writes the the 3 fields of a clock: seconds, minutes, hours.
 *  Handles the rollover - at 60 seconds increment minute counter
 *      at 60 minutes increment the hour counter

  Params:
 *     ptr - default callback pointer is not used

*/
static void clockTimer_Callback(uintptr_t ptr)
{
    static bool firstTimeExecutingCallback = true;

        
    // needed to initialize clock to zero
    if (firstTimeExecutingCallback)
    {
        tenthsecondsCount = 0;
        secondsCount      = 0;
        minutesCount      = 0;
        hoursCount        = 0;
        firstTimeExecutingCallback = false;
    }
    
    tenthsecondsCount++;         // clock interrupt count
    
    
    // handler rollover counters
    if (tenthsecondsCount == 10) // tenthseconds rollover at 10
    {
        tenthsecondsCount = 0;
        secondsCount++;
    }   
    if (secondsCount == 60)     // seconds rollover at 60
    {
        secondsCount = 0;
        minutesCount++;
    }
    if (minutesCount == 60)     // minutes rollover at 60
    {
        minutesCount = 0;
        hoursCount++;
    }
    
    // Renders ms, seconds, minutes, hours on the screen
    //
    sprintf(charBuff, "%d", tenthsecondsCount);
    secondsText.fn->setFromCStr(&tenthsecondsText, charBuff);
    Screen1_SecondLabel->fn->setString(Screen1_TenthsecondLabel, (leString*)&tenthsecondsText);

    sprintf(charBuff, "%d", secondsCount);
    secondsText.fn->setFromCStr(&secondsText, charBuff);
    Screen1_SecondLabel->fn->setString(Screen1_SecondLabel, (leString*)&secondsText);

    sprintf(charBuff, "%d", minutesCount);
    minutesText.fn->setFromCStr(&minutesText, charBuff);
    Screen1_MinuteLabel->fn->setString(Screen1_MinuteLabel, (leString*)&minutesText);

    sprintf(charBuff, "%d", hoursCount);
    hoursText.fn->setFromCStr(&hoursText, charBuff);
    Screen1_HourLabel->fn->setString(Screen1_HourLabel, (leString*)&hoursText);

}
 
void event_Screen1_ButtonWidget_1_OnPressed(leButtonWidget* btn)
{
    if (leGetStringLanguage() == language_English)
    {
        leSetStringLanguage(language_French);
    }
    else
    {
        leSetStringLanguage(language_English);
    }
}
void event_Screen1_ButtonWidget_0_OnPressed(leButtonWidget* btn)
{
    screenState = SCREEN_NEXT;
}

void event_Screen0_ButtonWidget1_OnPressed(leButtonWidget* btn)
{
    screenState = SCREEN_DO_NOTHING;
    legato_showScreen(screenID_Screen1);
}

void Screen1_OnShow()
{
    leFont* font = NULL;
    
    // construct Dynamic Strings
    leDynamicString_Constructor(&hoursText);
    leDynamicString_Constructor(&minutesText);
    leDynamicString_Constructor(&secondsText);
    leDynamicString_Constructor(&tenthsecondsText);
    
    // Set Fonts for Dynamic Strings
    font = leStringTable_GetStringFont(&stringTable, stringID_ClockString, 0);
    hoursText.fn->setFont(&hoursText, font);
    minutesText.fn->setFont(&minutesText, font);
    secondsText.fn->setFont(&secondsText, font);
    tenthsecondsText.fn->setFont(&tenthsecondsText, font);
    
    // creates timer via SYS_TIME_TimerObjectCreate 
    // also starts timer so no need to call SYS_TIME_TimerStart(clockTimer)
    clockTimer = SYS_TIME_CallbackRegisterMS(clockTimer_Callback, 
                                                 1,
                                                 UPDATE_TIMER_PERIOD_TENTH_SEC,
                                                 SYS_TIME_PERIODIC);
    
    screenState = SCREEN_DO_NOTHING;
}

void Screen1_OnHide()
{
    SYS_TIME_TimerDestroy(clockTimer);
    
    hoursText.fn->destructor(&hoursText);
    minutesText.fn->destructor(&minutesText);
    secondsText.fn->destructor(&secondsText);
    tenthsecondsText.fn->destructor(&tenthsecondsText);
}

void Screen1_OnUpdate()
{
    switch (screenState)
    {
        case SCREEN_DO_NOTHING:
        {        
            break;
        }
       case SCREEN_NEXT:
        {
            screenState = SCREEN_WAIT_FOR_NEXT;

            SYS_TIME_TimerStop(clockTimer);

           break;                    
        }
        case SCREEN_WAIT_FOR_NEXT:
        {
            if(leRenderer_IsIdle() &&
               leEvent_GetCount() == 0)
            {
                screenState = SCREEN_MOVE_TO_NEXT;
            }

            break;
        }
        case SCREEN_MOVE_TO_NEXT:
        {
            screenState = SCREEN_DONE;
            legato_showScreen(screenID_Screen0);

            break;
        }
        case SCREEN_DONE:
        default:
            break;
    }
}


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


/* TODO:  Add any necessary local functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;



    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            bool appInitialized = true;


            if (appInitialized)
            {

                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {

            break;
        }

        /* TODO: implement your application state machine.*/


        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
