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
#include "definitions.h"
#include "app.h"
#include "gfx/legato/widget/bargraph/legato_widget_bar_graph.h"
#include "gfx\legato\common\legato_utils.h"


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
const int initialFruit[] = {54, 34, 95}; 
const float averageWeightOz[] = {297.0, 142.8, 16.15};
bool convertionZero = false;
bool convertionOne = false;

void event_Screen0_CheckBoxWidget_0_OnChecked(leCheckBoxWidget* btn)
{
    convertionZero = true;
    if(convertionOne)
    {
        Screen0_CheckBoxWidget_1->fn->setChecked(Screen0_CheckBoxWidget_1, LE_FALSE);
    }
    Screen0_BarGraphWidget_0->fn->setMaxValue(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, 20);
    Screen0_BarGraphWidget_0->fn->setTickLength(Screen0_BarGraphWidget_0, 5);
    Screen0_BarGraphWidget_0->fn->setValueAxisTicksVisible(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, true);
    Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 0, averageWeightOz[0] / 16);
    Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 1, averageWeightOz[1] / 16);
    Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 2, averageWeightOz[2] / 16);
}


    
void event_Screen0_CheckBoxWidget_0_OnUnchecked(leCheckBoxWidget* btn)
{
    convertionZero = false;
    if( !(convertionZero) && !(convertionOne))
    {
        Screen0_BarGraphWidget_0->fn->setMaxValue(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, 100);
        Screen0_BarGraphWidget_0->fn->setValueAxisTicksVisible(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, true);
        Screen0_BarGraphWidget_0->fn->setValueAxisTicksInterval(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, 10);
        Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 0, initialFruit[0]);
        Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 1, initialFruit[1]);
        Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 2, initialFruit[2]); 
    }
}
void event_Screen0_CheckBoxWidget_1_OnChecked(leCheckBoxWidget* btn)
{
    convertionOne = true;
    if(convertionZero)
    {
        Screen0_CheckBoxWidget_0->fn->setChecked(Screen0_CheckBoxWidget_0, LE_FALSE);
    }
    Screen0_BarGraphWidget_0->fn->setMaxValue(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, 10);
    Screen0_BarGraphWidget_0->fn->setValueAxisTicksInterval(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, 2);
    Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 0, averageWeightOz[0] * 0.028);
    Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 1, averageWeightOz[1] * 0.028);
    Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 2, averageWeightOz[2] * 0.028);
}
void event_Screen0_CheckBoxWidget_1_OnUnchecked(leCheckBoxWidget* btn)
{
    convertionOne = false;
    if( !(convertionZero) && !(convertionOne))
    {
        Screen0_BarGraphWidget_0->fn->setMaxValue(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, 100);
        Screen0_BarGraphWidget_0->fn->setValueAxisTicksVisible(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, true);
        Screen0_BarGraphWidget_0->fn->setValueAxisTicksInterval(Screen0_BarGraphWidget_0, BAR_GRAPH_AXIS_0, 10);
        Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 0, initialFruit[0]);
        Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 1, initialFruit[1]);
        Screen0_BarGraphWidget_0->fn->setDataInSeries(Screen0_BarGraphWidget_0, 0, 2, initialFruit[2]);
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
