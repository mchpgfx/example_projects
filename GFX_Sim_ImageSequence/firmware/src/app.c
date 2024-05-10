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
#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"
#include "system/input/sys_input.h"
#include "system/time/sys_time.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // For uint32_t
#include <time.h>   // For clock_gettime, timespec
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

void event_Screen0_ButtonWidget_0_OnReleased(leButtonWidget* btn)
{   
    Screen0_ImageSequenceWidget_0_0->fn->showNextImage(Screen0_ImageSequenceWidget_0_0);  
    Screen0_ImageSequenceWidget_0_1->fn->showNextImage(Screen0_ImageSequenceWidget_0_1);  
    Screen0_ImageSequenceWidget_0_2->fn->showNextImage(Screen0_ImageSequenceWidget_0_2);  
}

void event_Screen0_ButtonWidget_0_0_OnReleased(leButtonWidget* btn)
{
    Screen0_ImageSequenceWidget_0_0->fn->showPreviousImage(Screen0_ImageSequenceWidget_0_0);  
    Screen0_ImageSequenceWidget_0_1->fn->showPreviousImage(Screen0_ImageSequenceWidget_0_1);  
    Screen0_ImageSequenceWidget_0_2->fn->showPreviousImage(Screen0_ImageSequenceWidget_0_2);  
}

void event_Screen0_ButtonWidget_0_1_OnReleased(leButtonWidget* btn)
{
    Screen0_ImageSequenceWidget_1_0->fn->play(Screen0_ImageSequenceWidget_1_0);  
    Screen0_ImageSequenceWidget_1_1->fn->play(Screen0_ImageSequenceWidget_1_1);  
    Screen0_ImageSequenceWidget_1_2->fn->play(Screen0_ImageSequenceWidget_1_2); 
}

void event_Screen0_ButtonWidget_0_1_0_OnReleased(leButtonWidget* btn)
{
    Screen0_ImageSequenceWidget_1_0->fn->stop(Screen0_ImageSequenceWidget_1_0);  
    Screen0_ImageSequenceWidget_1_1->fn->stop(Screen0_ImageSequenceWidget_1_1);  
    Screen0_ImageSequenceWidget_1_2->fn->stop(Screen0_ImageSequenceWidget_1_2); 
}

// Global variable to store the time of the last update
static struct timespec lastUpdateTime;

// Call this function once before starting the update loop to initialize the last update time
void app_Legato_InitializeUpdateTime(void) {
    clock_gettime(CLOCK_MONOTONIC, &lastUpdateTime);
}

// Implementation of the QueryDeltaTime function
uint32_t app_Legato_QueryDeltaTime(void) {
    struct timespec currentTime;
    clock_gettime(CLOCK_MONOTONIC, &currentTime);

    // Calculate the delta time in milliseconds
    uint32_t deltaTime = (currentTime.tv_sec - lastUpdateTime.tv_sec) * 1000 +
                         (currentTime.tv_nsec - lastUpdateTime.tv_nsec) / 1000000;

    // Update the last update time to the current time
    lastUpdateTime = currentTime;

    return deltaTime;
}


void event_Screen0_ImageSequenceWidget_0_0_OnImageChanged(leImageSequenceWidget* wgt)
{
    int32_t currentImage;
    
    currentImage = Screen0_ImageSequenceWidget_0_0->activeIdx;
          
    switch(currentImage)
    {
        case 0:
            Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_Battery0);
            break;
        
        case 1: 
            Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_Battery1);
            break;
            
        case 2: 
            Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_Battery2);
            break;
            
        case 3: 
            Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_Battery3);
            break;
            
        case 4: 
            Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_Battery4);
            break;
    }
    
    
}
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


/*******************************************************************************
 End of File
 */
