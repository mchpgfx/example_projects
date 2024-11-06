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
#include <math.h>
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

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************


void event_Screen0_ButtonWidget_0_OnReleased(leButtonWidget* btn)
{
    // Get the current start and end points of the line
    int32_t startX = Screen0_LineWidget_0->x1;
    int32_t startY = Screen0_LineWidget_0->y1;
    int32_t endX = Screen0_LineWidget_0->x2;
    int32_t endY = Screen0_LineWidget_0->y2;

    // Calculate the center of the line
    int32_t centerX = (startX + endX) / 2;
    int32_t centerY = (startY + endY) / 2;

    // Translate points to origin (center of the line)
    int32_t translatedStartX = startX - centerX;
    int32_t translatedStartY = startY - centerY;
    int32_t translatedEndX = endX - centerX;
    int32_t translatedEndY = endY - centerY;

    // Rotate points by 90 degrees
    int32_t rotatedStartX = -translatedStartY;
    int32_t rotatedStartY = translatedStartX;
    int32_t rotatedEndX = -translatedEndY;
    int32_t rotatedEndY = translatedEndX;

    // Translate points back to original position
    int32_t newStartX = rotatedStartX + centerX;
    int32_t newStartY = rotatedStartY + centerY;
    int32_t newEndX = rotatedEndX + centerX;
    int32_t newEndY = rotatedEndY + centerY;

    // Set the new start and end points
    Screen0_LineWidget_0->fn->setStartPoint(Screen0_LineWidget_0, newStartX, newStartY);
    Screen0_LineWidget_0->fn->setEndPoint(Screen0_LineWidget_0, newEndX, newEndY);
    
    if ((Screen0_LineWidget_0->fn->getScheme(Screen0_LineWidget_0) == &LineScheme))
    {
        Screen0_LineWidget_0->fn->setScheme(Screen0_LineWidget_0, &RedScheme);
    }
    else 
    {
        Screen0_LineWidget_0->fn->setScheme(Screen0_LineWidget_0, &LineScheme);
    }
   
}




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
