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

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
#define GRAPH_CHANGE_RATE_MS         1000
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

volatile uint32_t timestamp[5] = {1, 2, 3, 4, 5};
volatile int values[5] = {13, 8, 23, 0, 5}; // Values should not be higher than Graph maximum value
volatile int update_graph = 0, generate_random = 0;

//C character buffer
static char tm_st0_char[8], tm_st1_char[8], tm_st2_char[8], tm_st3_char[8], tm_st4_char[8];
//Legato Char buffer
static leChar lgtCharBuf0[8], lgtCharBuf1[8], lgtCharBuf2[8], lgtCharBuf3[8], lgtCharBuf4[8];
//Legato string object
static leFixedString tm_st0, tm_st1, tm_st2, tm_st3, tm_st4;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/
void Timer_Callback ( uintptr_t context )
{
    if (generate_random == 1)
    {
        int pos = 0;
        for (pos = 0; pos < 4; pos++)
        {
            timestamp[pos] = timestamp[pos+1];
            values[pos] = values[pos+1];
        }
        timestamp[4]++;
        values[4] = (rand() % 60) - 30;
        update_graph = 1;
    }
}

void event_Screen0_ButtonWidget_0_OnReleased(leButtonWidget* btn)
{
    Screen0_ButtonWidget_0->fn->setString(Screen0_ButtonWidget_0, (leString*)&string_GraphGenerating);
    //create the c character array string counter value
    sprintf(tm_st0_char, "%lu", timestamp[0]);
    sprintf(tm_st1_char, "%lu", timestamp[1]);
    sprintf(tm_st2_char, "%lu", timestamp[2]);
    sprintf(tm_st3_char, "%lu", timestamp[3]);
    sprintf(tm_st4_char, "%lu", timestamp[4]);
    //convert the character string to leFixedString object
    tm_st0.fn->setFromCStr(&tm_st0, tm_st0_char);
    tm_st1.fn->setFromCStr(&tm_st1, tm_st1_char);
    tm_st2.fn->setFromCStr(&tm_st2, tm_st2_char);
    tm_st3.fn->setFromCStr(&tm_st3, tm_st3_char);
    tm_st4.fn->setFromCStr(&tm_st4, tm_st4_char);

    Screen0_LineGraphWidget_0->fn->clear(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setMinValue(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, -30);
    Screen0_LineGraphWidget_0->fn->setMaxValue(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, 30);
    
    Screen0_LineGraphWidget_0->fn->setFillSeriesArea(Screen0_LineGraphWidget_0, LE_FALSE);
    
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 0, (leString*)&tm_st0);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 1, (leString*)&tm_st1);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 2, (leString*)&tm_st2);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 3, (leString*)&tm_st3);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 4, (leString*)&tm_st4);

    Screen0_LineGraphWidget_0->fn->addSeries(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setSeriesScheme(Screen0_LineGraphWidget_0, 0, &RedScheme);
    for (int i = 0; i < 5; i++)
        Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, values[i]); 
                
    Screen0_LineGraphWidget_0->fn->invalidate(Screen0_LineGraphWidget_0);
    
    if (!tmrHandle)
        tmrHandle = SYS_TIME_CallbackRegisterMS(Timer_Callback, 0, GRAPH_CHANGE_RATE_MS, SYS_TIME_PERIODIC);
    
    generate_random = 1;
}

void event_Screen0_ButtonWidget_1_OnReleased(leButtonWidget* btn)
{
    generate_random = 0; // Disable the generation of dynamic data
    
    Screen0_ButtonWidget_0->fn->setString(Screen0_ButtonWidget_0, (leString*)&string_GraphGenerate);
    //create the c character array string counter value
    sprintf(tm_st0_char, "Mon");
    sprintf(tm_st1_char, "Tue");
    sprintf(tm_st2_char, "Wed");
    sprintf(tm_st3_char, "Thu");
    sprintf(tm_st4_char, "Fri");
    //convert the character string to leFixedString object
    tm_st0.fn->setFromCStr(&tm_st0, tm_st0_char);
    tm_st1.fn->setFromCStr(&tm_st1, tm_st1_char);
    tm_st2.fn->setFromCStr(&tm_st2, tm_st2_char);
    tm_st3.fn->setFromCStr(&tm_st3, tm_st3_char);
    tm_st4.fn->setFromCStr(&tm_st4, tm_st4_char);

    Screen0_LineGraphWidget_0->fn->clear(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setMinValue(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, 0);
    Screen0_LineGraphWidget_0->fn->setMaxValue(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, 100);
    
    Screen0_LineGraphWidget_0->fn->setFillSeriesArea(Screen0_LineGraphWidget_0, LE_TRUE);
    
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 0, (leString*)&tm_st0);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 1, (leString*)&tm_st1);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 2, (leString*)&tm_st2);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 3, (leString*)&tm_st3);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 4, (leString*)&tm_st4);

    Screen0_LineGraphWidget_0->fn->addSeries(Screen0_LineGraphWidget_0);  
    Screen0_LineGraphWidget_0->fn->setSeriesScheme(Screen0_LineGraphWidget_0, 0, &RedScheme);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 90);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 70);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 50);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 30);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 100);
                
    Screen0_LineGraphWidget_0->fn->invalidate(Screen0_LineGraphWidget_0);
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

            //Create and initialize a legato string object, this string object will be used
            //to construct the string that will be used by the category label object for showing on the 
            //screen
            leFixedString_Constructor(&tm_st0, lgtCharBuf0, 8);
            leFixedString_Constructor(&tm_st1, lgtCharBuf1, 8);
            leFixedString_Constructor(&tm_st2, lgtCharBuf2, 8);
            leFixedString_Constructor(&tm_st3, lgtCharBuf3, 8);
            leFixedString_Constructor(&tm_st4, lgtCharBuf4, 8);

            //Assign a font to the string object. The font must contain all the glyphs/characters
            //that will be used in the dynamic string.
            tm_st0.fn->setFont(&tm_st0, (leFont*)&Category_font);
            tm_st1.fn->setFont(&tm_st1, (leFont*)&Category_font);
            tm_st2.fn->setFont(&tm_st2, (leFont*)&Category_font);
            tm_st3.fn->setFont(&tm_st3, (leFont*)&Category_font);
            tm_st4.fn->setFont(&tm_st4, (leFont*)&Category_font);

            if (appInitialized)
            {
                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {
            if (update_graph == 1 && generate_random == 1)
            {
                update_graph = 0;
                //create the c character array string counter value
                sprintf(tm_st0_char, "%lu", timestamp[0]);
                sprintf(tm_st1_char, "%lu", timestamp[1]);
                sprintf(tm_st2_char, "%lu", timestamp[2]);
                sprintf(tm_st3_char, "%lu", timestamp[3]);
                sprintf(tm_st4_char, "%lu", timestamp[4]);
                //convert the character string to leFixedString object
                tm_st0.fn->setFromCStr(&tm_st0, tm_st0_char);
                tm_st1.fn->setFromCStr(&tm_st1, tm_st1_char);
                tm_st2.fn->setFromCStr(&tm_st2, tm_st2_char);
                tm_st3.fn->setFromCStr(&tm_st3, tm_st3_char);
                tm_st4.fn->setFromCStr(&tm_st4, tm_st4_char);
                
                for (int i = 0; i < 5; i++)
                    Screen0_LineGraphWidget_0->fn->setDataInSeries(Screen0_LineGraphWidget_0, 0, i, values[i]);
                
                Screen0_LineGraphWidget_0->fn->invalidate(Screen0_LineGraphWidget_0);
            }
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
