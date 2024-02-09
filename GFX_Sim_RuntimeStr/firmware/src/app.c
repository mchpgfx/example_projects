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
#include "gfx/legato/generated/le_gen_assets.h"
#include "definitions.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
#define APP_TICK_FREQ_MS 10

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


typedef enum
{
    APP_TIMER_RUN,  
    APP_TIMER_RUNNING,
    APP_TIMER_STOP,  
    APP_TIMER_STOPPED,          
} APP_TIMER_STATUS;

APP_DATA appData;

static volatile uint32_t appTickCounter;
static SYS_TIME_HANDLE appTimerHandle;
APP_TIMER_STATUS appTimerStatus;


// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

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

void APP_TimerCallback( uintptr_t context )
{
    appTickCounter++;
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


            appTickCounter = 0;
            appTimerHandle = SYS_TIME_CallbackRegisterMS(APP_TimerCallback,
                                                     1, APP_TICK_FREQ_MS,
                                                     SYS_TIME_PERIODIC); 
            
            SYS_TIME_TimerStop(appTimerHandle);
            
            appTimerStatus = APP_TIMER_STOPPED;
            
            if (appInitialized)
            {

                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {
            switch (appTimerStatus)
            {
                case APP_TIMER_STOP:
                {
                    SYS_TIME_TimerStop(appTimerHandle);
                    appTimerStatus = APP_TIMER_STOPPED;
                                
                    break;
                }
                case APP_TIMER_RUN:
                {
                    SYS_TIME_TimerStart(appTimerHandle);
                    appTimerStatus = APP_TIMER_RUNNING;
                }
                default:
                {
                    
                }
            }

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

/* Screen and Widget Event callback functions */
#define APP_FIXED_STR_SIZE 3
#define MAX_COUNTER_STR_SIZE 15

/* Fixed String Variable Declarations */
static leFixedString appFixedStrStatic;                       // Fixed String with static data store 
static leChar appFixedStrStatBuff[APP_FIXED_STR_SIZE] = {0};    // Fixed sized data store

/* Dynamic String Variable Declarations */
static leDynamicString * appDynamicString;

/* C-type string buffer s*/
static char cStrBuff[MAX_COUNTER_STR_SIZE];

void Screen0_OnShow(void)
{
    /* Initialize Fixed String with statically allocated data store */
    leFixedString_Constructor(&appFixedStrStatic, appFixedStrStatBuff, APP_FIXED_STR_SIZE); //Set data store
    appFixedStrStatic.fn->setFont(&appFixedStrStatic, (leFont*) &FontBigStatic);  //Set Font
    
    /* Allocate and initialize Dynamic String */
    appDynamicString = leDynamicString_New(); //Allocate dynamic string object, must be freed with leString_Delete
    appDynamicString->fn->setFont(appDynamicString, (leFont*) &FontBigDynamic); //Set Font
}

void Screen0_OnHide(void)
{
    /* Free dynamic string allocations */
    leString_Delete((leString *) appDynamicString);
}

void Screen0_OnUpdate(void)
{
    static uint32_t lastTickCount = 0;
    static uint32_t counterValue = 0;
    
    if (lastTickCount != appTickCounter)
    {
        printf("value %lu \r\n", counterValue);
        
        //Create C string from counterValue
        snprintf(cStrBuff, MAX_COUNTER_STR_SIZE, "%lu", counterValue++);
        
        /* Update labels with counter value */
        /*** Update Fixed String label ***/
        appFixedStrStatic.fn->setFromCStr(&appFixedStrStatic, cStrBuff); //Set string data from C-string
        Screen0_LabelWidget_Fixed_Stat->fn->setString(                   //Update label widget string   
                                          Screen0_LabelWidget_Fixed_Stat, 
                                          (leString *) &appFixedStrStatic);

        /*** Update Dynamic String label ***/
        appDynamicString->fn->setFromCStr(appDynamicString, cStrBuff);  //Set string data from C-string
        Screen0_LabelWidget_Dyn->fn->setString(Screen0_LabelWidget_Dyn, //Update label widget string  
                                              (leString *) appDynamicString);
  
        lastTickCount = appTickCounter;
    }
}

/* Start button is pressed */
void event_Screen0_ButtonWidget_StartStop_OnPressed(leButtonWidget* btn)
{
    /* If timer is stopped */
    if (appTimerStatus == APP_TIMER_STOPPED)
    {
        /* Signal main application code to start timer */
        appTimerStatus = APP_TIMER_RUN;
        
        /* Update button label to show 'STOP' */
        Screen0_ButtonWidget_StartStop->fn->setString(Screen0_ButtonWidget_StartStop, (leString *) &string_StringStop);
    }
}

void event_Screen0_ButtonWidget_StartStop_OnReleased(leButtonWidget* btn)
{
    /* If timer is running */
    if (appTimerStatus == APP_TIMER_RUNNING)
    {
        /* Signal main application code to stop timer */
        appTimerStatus = APP_TIMER_STOP;
        
        /* Update button label to show 'RUN' */
        Screen0_ButtonWidget_StartStop->fn->setString(Screen0_ButtonWidget_StartStop, (leString *) &string_StringRun);
    }
}

void event_Screen0_ButtonWidget_English_OnPressed(leButtonWidget* btn)
{
    leSetStringLanguage(language_English);
}

void event_Screen0_ButtonWidget_Spanish_OnPressed(leButtonWidget* btn)
{
    leSetStringLanguage(language_Spanish);
}

void event_Screen0_ButtonWidget_Chinese_OnPressed(leButtonWidget* btn)
{
    leSetStringLanguage(language_Chinese);
}


/*******************************************************************************
 End of File
 */
