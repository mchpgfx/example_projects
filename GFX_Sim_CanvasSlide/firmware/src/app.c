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

/**** Screen and widget callback functions ****/

/* Screen States */
typedef enum
{
    SCREEN_INIT,
    SCREEN_IDLE,
    SCREEN_SLIDING,
} SCREEN_STATES;

static SCREEN_STATES screenState; //Screen State 
static bool screenSliding = false; //Screen Sliding flag

/* Canvas effects callback function */
static void APP_Canvas_EffectsCallback(unsigned int canvasID,
                                       GFXC_FX_TYPE effect,
                                       GFXC_FX_STATUS status,
                                       void * parm)
{
    switch (effect)
    {
        case GFXC_FX_MOVE:
        {
            if (status == GFXC_FX_START)
            {
                //Set screen sliding flag when effect is about to start
                screenSliding = true; 
            }
            else if (status == GFXC_FX_DONE)
            {
                //Clear screen sliding flag when effect is done
                screenSliding = false;
            }
        }
        default:
            break;
    }
}

//Slide left button pressed callback function
void event_Screen0_SlideLeftButton_OnPressed(leButtonWidget* btn)
{
    //Make sure that screen is idle, not sliding
    if (screenState == SCREEN_IDLE)
    {
        //Start move effect to slide 480 pixels to left
        gfxcStartEffectMove(0, GFXC_FX_MOVE_DEC, 0, 0, -480, 0, 4);
    }
}

//Slide left button pressed callback function
void event_Screen0_SlideRightButton_OnPressed(leButtonWidget* btn)
{
    //Make sure that screen is idle, not sliding
    if (screenState == SCREEN_IDLE)
    {
        //Start move effect to slide 480 pixels to right, back to origin
        gfxcStartEffectMove(0, GFXC_FX_MOVE_DEC, -480, 0, 0, 0, 4);
    }
}

//Screen OnShow callback function
void Screen0_OnShow(void)
{
    //Initialize screen state when shown
    screenState = SCREEN_INIT;
}

//Screen OnUpdate callback function
void Screen0_OnUpdate(void)
{
    switch(screenState)
    {
        //On screen init
        case SCREEN_INIT:
        {
            //Check if renderer is done drawing the screen
            if (leRenderer_IsIdle() == LE_TRUE)
            {
                //assign canvas object 0 to HW layer 0
                gfxcSetLayer(0, 0);
                
                //Set window size to 2x the screen size 
                gfxcSetWindowSize(0, 960, 272);
                
                //Set window position to origin
                gfxcSetWindowPosition(0, 0, 0);

                //Set canvas 0 to be visible 
                gfxcShowCanvas(0);
                
                //Update controller with canvas 0 settings
                gfxcCanvasUpdate(0);
                
                //Register effects callback
                gfxcSetEffectsCallback(0, APP_Canvas_EffectsCallback, NULL); 
                
                screenState = SCREEN_IDLE;
            }
            
            break;
        }
        case SCREEN_IDLE:
        {
            //Check if screen is about to slide, then change state to sliding
            if (screenSliding == true)
            {
                screenState = SCREEN_SLIDING;
            }
            
            break;
        }
        case SCREEN_SLIDING:
        {
            //Check if sliding is done, then change state to idle
            if (screenSliding == false)
            {
                screenState = SCREEN_IDLE;
            }
            
            break;
        }
        default:
        {
            break;
        }
    }
}

/*******************************************************************************
 End of File
 */
