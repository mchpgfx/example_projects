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
#include "gfx/legato/string/legato_fixedstring.h"
#include "gfx/legato/generated/le_gen_init.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
#define MAX_VAL_LEN     4
//Legato string object
leFixedString p_SliderValstring;
//C character buffer
static char cSliderCharBuffer[MAX_VAL_LEN];
//Legato Char buffer
static leChar p_SliderValBuff[MAX_VAL_LEN] = {0};
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

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

void event_Screen0_CircularSliderWidget_0_OnValueChanged(leCircularSliderWidget* sld, int32_t val)
{
    memset(cSliderCharBuffer, 0, sizeof(cSliderCharBuffer));
    sprintf(cSliderCharBuffer, "%ld", val);
    p_SliderValstring.fn->setFromCStr(&p_SliderValstring, cSliderCharBuffer);
    Screen0_LabelSliderVal->fn->setString(Screen0_LabelSliderVal, (leString*)&p_SliderValstring);
    printf("%ld\r\n", val);
}
void event_Screen0_CircularSliderWidget_0_OnPressed(leCircularSliderWidget* sld, int32_t val)
{
    //printf("!\r\n");
}
void event_Screen0_CircularSliderWidget_0_OnReleased(leCircularSliderWidget* sld, int32_t val)
{
    // printf("^\r\n");
}


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************




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

    leFixedString_Constructor(&p_SliderValstring,  p_SliderValBuff, MAX_VAL_LEN *2);
    p_SliderValstring.fn->setFont(&p_SliderValstring, (leFont*)& NotoSanB);
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
