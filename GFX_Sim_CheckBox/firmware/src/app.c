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
#include "gfx/legato/widget/checkbox/legato_widget_checkbox.h"
#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

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
bool checkStateOrange = false;
bool checkStateBanana = false;
bool checkStateApple = false;

void event_Screen0_CheckBoxWidget_0_OnChecked(leCheckBoxWidget* btn)
{
    //uncheck other checkbox
    checkStateOrange = true;
    Screen0_ImageWidget_0->fn->setVisible(Screen0_ImageWidget_0, true);
    Screen0_CheckBoxWidget_1->fn->setChecked(Screen0_CheckBoxWidget_1, false);
    Screen0_CheckBoxWidget_2->fn->setChecked(Screen0_CheckBoxWidget_2, false);
    
    //set image 
    Screen0_ImageWidget_0->fn->setImage(Screen0_ImageWidget_0, &orange);
}
void event_Screen0_CheckBoxWidget_0_OnUnchecked(leCheckBoxWidget* btn)
{
    checkStateOrange = false;
    if(!(checkStateOrange) && !(checkStateBanana) && !(checkStateApple))
    {
       Screen0_ImageWidget_0->fn->setVisible(Screen0_ImageWidget_0, false);
    }
}
void event_Screen0_CheckBoxWidget_1_OnChecked(leCheckBoxWidget* btn)
{
    //uncheck other checkbox
    checkStateBanana = true;
    Screen0_ImageWidget_0->fn->setVisible(Screen0_ImageWidget_0, true);
    Screen0_CheckBoxWidget_0->fn->setChecked(Screen0_CheckBoxWidget_0, false);
    Screen0_CheckBoxWidget_2->fn->setChecked(Screen0_CheckBoxWidget_2, false);
    
    //set image 
    Screen0_ImageWidget_0->fn->setImage(Screen0_ImageWidget_0, &banana);
}
void event_Screen0_CheckBoxWidget_1_OnUnchecked(leCheckBoxWidget* btn)
{
    checkStateBanana = false;
    if(!(checkStateOrange) && !(checkStateBanana) && !(checkStateApple))
    {
       Screen0_ImageWidget_0->fn->setVisible(Screen0_ImageWidget_0, false);
    }
}

void event_Screen0_CheckBoxWidget_2_OnChecked(leCheckBoxWidget* btn)
{
    //uncheck other checkbox
    checkStateApple = true;
    Screen0_ImageWidget_0->fn->setVisible(Screen0_ImageWidget_0, true);
    Screen0_CheckBoxWidget_0->fn->setChecked(Screen0_CheckBoxWidget_0, false);
    Screen0_CheckBoxWidget_1->fn->setChecked(Screen0_CheckBoxWidget_1, false);
    
    //set image 

    Screen0_ImageWidget_0->fn->setImage(Screen0_ImageWidget_0, &apple);
}
void event_Screen0_CheckBoxWidget_2_OnUnchecked(leCheckBoxWidget* btn)
{
    checkStateApple = false;
    if(!(checkStateOrange) && !(checkStateBanana) && !(checkStateApple))
    {
       Screen0_ImageWidget_0->fn->setVisible(Screen0_ImageWidget_0, false);
    }
}

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
