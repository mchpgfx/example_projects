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
#include "gfx/legato/generated/le_gen_init.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

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
SYS_TIME_HANDLE tmrHandle;  
volatile uint8_t label_state;
volatile uint32_t alpha_value = 250;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/
void Timer_Callback ( uintptr_t context )
{
    if (label_state == SET_WHITE_SCHEME)
        label_state = SET_NO_SCHEME;
    else
        label_state = SET_WHITE_SCHEME;
    
    alpha_value -= 20;
    if (alpha_value < 30)
        alpha_value = 255;
    
    appData.state = APP_STATE_SERVICE_TASKS;
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
            bool appInitialized = false;

            tmrHandle = SYS_TIME_CallbackRegisterMS(Timer_Callback, 0, LABEL_CHANGE_RATE_MS, SYS_TIME_PERIODIC);

            if (tmrHandle != SYS_TIME_HANDLE_INVALID)
            {
                appInitialized = true;
            }
            
            if (appInitialized)
            {

                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {
            switch (label_state)
            {
                case SET_WHITE_SCHEME:
                {
                    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_White_scheme);
                    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, &WhiteScheme);
                    break;
                }
                case SET_NO_SCHEME:
                {
                    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_No_scheme);
                    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, NULL);
                    break;
                }
                default:
                    break;
            }
            
            appData.state = APP_STATE_CHANGE_ALPHA;
            break;
        }
        case APP_STATE_CHANGE_ALPHA:
        {
            Screen0_LabelWidget_1->fn->setAlphaAmount(Screen0_LabelWidget_1, alpha_value);
            
            appData.state = APP_STATE_WAITING;
            break;
        }
        case APP_STATE_WAITING:
        {
            break;
        }
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
