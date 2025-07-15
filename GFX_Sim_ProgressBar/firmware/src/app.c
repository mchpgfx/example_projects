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
#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"
#include <stdio.h>
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
#define VALUE_STR_SIZE_8 8

APP_DATA appData;
uint32_t sliderValue = 0;
bool sliderChanged = false;

/* String objects for showing new code */
static leFixedString sliderStr;
static leChar sliderStrBuff[VALUE_STR_SIZE_8] = {0};
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

void event_Screen0_ProgressBarWidget_0_ValueChanged(leProgressBarWidget* wgt, uint32_t val)
{
    /*Update the string value shown on the widget when the Progress Bar value changes*/
    char valueCStr[VALUE_STR_SIZE_8] = {0};
    
    snprintf(valueCStr, VALUE_STR_SIZE_8, "%u", sliderValue);
        
    sliderStr.fn->setFromCStr(&sliderStr, valueCStr);
    Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString *) &sliderStr);
}

void event_Screen0_SliderWidget_0_OnValueChanged(leSliderWidget* scr)
{
    /*Get the value of the slider*/
    sliderValue = Screen0_SliderWidget_0->fn->getValue(Screen0_SliderWidget_0);
    sliderChanged = true;
}

void Screen0_OnShow(void)
{
    /*Initialize string objects for label */
    leFixedString_Constructor(&sliderStr, sliderStrBuff, VALUE_STR_SIZE_8); //Set data store
    sliderStr.fn->setFont(&sliderStr, (leFont*) &Font0);  //Set Font
}
void Screen0_OnHide(void)
{
    
}
void Screen0_OnUpdate(void)
{
    /*Update the value of the Progress Bar Widget when the event of the Slider is entered*/
    if(sliderChanged == true)
    {
        Screen0_ProgressBarWidget_0->fn->setValue(Screen0_ProgressBarWidget_0, sliderValue);
        sliderChanged = false;
    }       
}
/*******************************************************************************
 End of File
 */
