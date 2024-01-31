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
#include <stdio.h>
// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

#define MAX_NEW_ITEMS 25
#define MAX_STRING_LENGTH 16
#define LIST_SCROLLBAR_HANDLE_MULT 10
int newItemIndex = 0;
static leDynamicString * newItemStr[MAX_NEW_ITEMS];
char cStrBuff[MAX_STRING_LENGTH] = {0};   
bool stringChanged = false;
bool DynStringChanged = false;
bool listWDown = false;
bool userSelShowDynList = false;
uint32_t selitem, dynSelItem;
leString* sel_String = NULL;
leString* Dyn_sel_String = NULL;
static leChar testCharBuffer1[12] = {0};
static leFixedString testString1;
static leChar testCharBuffer2[12] = {0};
static leFixedString testString2;
static leChar testCharBuffer3[12] = {0};
static leFixedString testString3;
static leChar testCharBuffer4[12] = {0};
static leFixedString testString4;
static leChar testCharBuffer5[12] = {0};
static leFixedString testString5;
static leChar testCharBuffer6[12] = {0};
static leFixedString testString6;
static char cCharBuffer[6][12] = {"TOMATO", "STRAWBERRY", "APPLE", "CHERRY", "BEETS", "POMOGRANATE" };
void populateList(void);
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

/* Release event callback function  for ButtonWidget_AddL2 button.
 * The function adds dynamic string to ListWidget_Dynamic list widget.
 */
void event_Screen0_ButtonWidget_AddL2_OnReleased(leButtonWidget* btn)
{
    int32_t lcount;
    if(Screen0_ListWidget_Dynamic->fn->getVisible(Screen0_ListWidget_Dynamic) == LE_FALSE)
    {
        lcount = Screen0_ListWidget_Dynamic->fn->getItemCount(Screen0_ListWidget_Dynamic);
        if (newItemIndex < MAX_NEW_ITEMS)
        {
            //Initialize the new string object
            newItemStr[newItemIndex] = leDynamicString_New();
            newItemStr[newItemIndex]->fn->setFont(newItemStr[newItemIndex], (leFont*)&NotoSans16);
            memset(cStrBuff, 0, sizeof(cStrBuff));
            sprintf(cStrBuff, "New Item %d", (int) newItemIndex); 
            newItemStr[newItemIndex]->fn->setFromCStr(newItemStr[newItemIndex], cStrBuff);

            Screen0_ListWidget_Dynamic->fn->appendItem(Screen0_ListWidget_Dynamic);
            Screen0_ListWidget_Dynamic->fn->setItemString(Screen0_ListWidget_Dynamic, lcount, (leString*)newItemStr[newItemIndex]);

            newItemIndex++;
        }
        lcount = Screen0_ListWidget_Dynamic->fn->getItemCount(Screen0_ListWidget_Dynamic);
        Screen0_ListWidget_Dynamic->scrollbar->fn->setExtentValue(Screen0_ListWidget_Dynamic->scrollbar, lcount* LIST_SCROLLBAR_HANDLE_MULT);
        Screen0_ListWidget_Dynamic->fn->invalidate(Screen0_ListWidget_Dynamic);
        Screen0_ListWidget_Dynamic->scrollbar->fn->invalidate(Screen0_ListWidget_Dynamic->scrollbar);
    }
    else
    {
        Screen0_ListWidget_Dynamic->fn->setVisible(Screen0_ListWidget_Dynamic, LE_FALSE);
    }
}

/* Release event callback function  for ButtonWidget_ClearL2 button. 
 * The function deletes all items in the ListWidget_Dynamic widget and
 * deletes all dynamic strings from newItemStr array. It also resets the 
 * scrollbar.
 */
void event_Screen0_ButtonWidget_ClearL2_OnReleased(leButtonWidget* btn)
{
    uint32_t i;
    Screen0_ListWidget_Dynamic->fn->removeAllItems(Screen0_ListWidget_Dynamic);
    if (newItemIndex > 0)
    {
        for (i = 0; i < newItemIndex; i++)
        {
            leString_Delete((leString *) newItemStr[i]);
        }
    }
    Screen0_ListWidget_Dynamic->fn->setVisible(Screen0_ListWidget_Dynamic, LE_FALSE);
    Screen0_LabelWidget_DynamicSel->fn->setVisible(Screen0_LabelWidget_DynamicSel, LE_FALSE);
    //reset and hide the scroll bar
    Screen0_ListWidget_Dynamic->scrollbar->fn->setScrollValue(Screen0_ListWidget_Dynamic->scrollbar, 0);
    Screen0_ListWidget_Dynamic->scrollbar->fn->setVisible(Screen0_ListWidget_Dynamic->scrollbar, LE_FALSE);
    Screen0_ListWidget_Dynamic->scrollbar->fn->invalidate(Screen0_ListWidget_Dynamic->scrollbar);
    newItemIndex = 0;
}

/* Release event callback function  for ButtonWidget_List2 button.
 * The function displays the ListWidget_Dynamic widget.
 */
void event_Screen0_ButtonWidget_List2_OnReleased(leButtonWidget* btn)
{
    Screen0_ListWidget_Dynamic->fn->deselectAll(Screen0_ListWidget_Dynamic);
    Screen0_ListWidget_Dynamic->fn->setVisible(Screen0_ListWidget_Dynamic, LE_TRUE);
    userSelShowDynList = true;
    
}

/* Release event callback function  for ButtonWidget_List1 button.
 * The function deletes all items the Screen0_ListWidget_Static list widget.
 * It populates the static strings and adds them string items to the list widget.
 * It also forces the scrollbar to the top position and displays the list widget.
 */
void event_Screen0_ButtonWidget_List1_OnReleased(leButtonWidget* btn)
{
    populateList();
    Screen0_ListWidget_Static->scrollbar->fn->setScrollValue(Screen0_ListWidget_Static->scrollbar, 0);
    Screen0_ListWidget_Static->fn->removeAllItems(Screen0_ListWidget_Static);
    
    Screen0_ListWidget_Static->fn->insertItem(Screen0_ListWidget_Static, 0);
    Screen0_ListWidget_Static->fn->setItemString(Screen0_ListWidget_Static, 0, (leString*)&testString1);
    
    Screen0_ListWidget_Static->fn->insertItem(Screen0_ListWidget_Static, 1);
    Screen0_ListWidget_Static->fn->setItemString(Screen0_ListWidget_Static, 1, (leString*)&testString2);

    Screen0_ListWidget_Static->fn->insertItem(Screen0_ListWidget_Static, 2);
    Screen0_ListWidget_Static->fn->setItemString(Screen0_ListWidget_Static, 2, (leString*)&testString3);

    Screen0_ListWidget_Static->fn->insertItem(Screen0_ListWidget_Static, 3);
    Screen0_ListWidget_Static->fn->setItemString(Screen0_ListWidget_Static,3, (leString*)&testString4);

    Screen0_ListWidget_Static->fn->insertItem(Screen0_ListWidget_Static, 4);
    Screen0_ListWidget_Static->fn->setItemString(Screen0_ListWidget_Static, 4, (leString*)&testString5);

    Screen0_ListWidget_Static->fn->insertItem(Screen0_ListWidget_Static, 5);
    Screen0_ListWidget_Static->fn->setItemString(Screen0_ListWidget_Static, 5, (leString*)&testString6);
    Screen0_ListWidget_Static->fn->deselectAll(Screen0_ListWidget_Static);
    Screen0_ListWidget_Static->fn->setVisible(Screen0_ListWidget_Static, LE_TRUE);
}

/* On Selection Change callback function for ListWidget_Dynamic list widget.
 * Only when the widget is visible, and if there is atleast 1 item in the list
 * the selected item index is noted and a flag is set to update the LabelWidget_DynamicSel
 * label to the selected string.
 */
void event_Screen0_ListWidget_Dynamic_OnSelectionChanged(leListWidget* wgt, uint32_t idx, leBool selected)
{
    if(Screen0_ListWidget_Dynamic->fn->getVisible(Screen0_ListWidget_Dynamic))
    {
        if(Screen0_ListWidget_Dynamic->fn->getItemCount(Screen0_ListWidget_Dynamic)>0)
        {
            dynSelItem = Screen0_ListWidget_Dynamic->fn->getFirstSelectedItem(Screen0_ListWidget_Dynamic);
            Screen0_ListWidget_Dynamic->fn->setVisible(Screen0_ListWidget_Dynamic, LE_FALSE);
            Screen0_LabelWidget_DynamicSel->fn->setVisible(Screen0_LabelWidget_DynamicSel, LE_TRUE);
            DynStringChanged = true;
        }
    }
    
}

/* On Selection Change callback function for ListWidget_Static list widget.
 * The selected item index is noted and a flag is set to update the LabelWidget_StaticSel
 * label to the selected string.
 */
void event_Screen0_ListWidget_Static_OnSelectionChanged(leListWidget* wgt, uint32_t idx, leBool selected)
{        
    selitem = Screen0_ListWidget_Static->fn->getFirstSelectedItem(Screen0_ListWidget_Static);   
    Screen0_ListWidget_Static->fn->setVisible(Screen0_ListWidget_Static, LE_FALSE);
    stringChanged = true;
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************
void populateList(void)
{
    testString1.fn->setFromCStr(&testString1, cCharBuffer[0]);
    testString2.fn->setFromCStr(&testString2, cCharBuffer[1]);
    testString3.fn->setFromCStr(&testString3, cCharBuffer[2]);
    testString4.fn->setFromCStr(&testString4, cCharBuffer[3]);
    testString5.fn->setFromCStr(&testString5, cCharBuffer[4]);
    testString6.fn->setFromCStr(&testString6, cCharBuffer[5]);

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
    leFixedString_Constructor(&testString1, testCharBuffer1, 12);
    testString1.fn->setFont(&testString1, (leFont*)&NotoSans16);

    leFixedString_Constructor(&testString2, testCharBuffer2, 12);
    testString2.fn->setFont(&testString2, (leFont*)&NotoSans16);
    
    leFixedString_Constructor(&testString3, testCharBuffer3, 12);
    testString3.fn->setFont(&testString3, (leFont*)&NotoSans16);
    
    leFixedString_Constructor(&testString4, testCharBuffer4, 12);
    testString4.fn->setFont(&testString4, (leFont*)&NotoSans16);
    
    leFixedString_Constructor(&testString5, testCharBuffer5, 12);
    testString5.fn->setFont(&testString5, (leFont*)&NotoSans16);
    
    leFixedString_Constructor(&testString6, testCharBuffer6, 12);
    testString6.fn->setFont(&testString6, (leFont*)&NotoSans16);   
    
    //Initialize index to 0 for dynamic list
    newItemIndex = 0;

    
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
            if(stringChanged)
            {
                sel_String = Screen0_ListWidget_Static->fn->getItemString(Screen0_ListWidget_Static, selitem);
                Screen0_LabelWidget_StaticSel->fn->setString(Screen0_LabelWidget_StaticSel, sel_String);
                stringChanged = false;
            }
            if(DynStringChanged)
            {
                Dyn_sel_String = Screen0_ListWidget_Dynamic->fn->getItemString(Screen0_ListWidget_Dynamic, dynSelItem);
                Screen0_LabelWidget_DynamicSel->fn->setString(Screen0_LabelWidget_DynamicSel, Dyn_sel_String);
                DynStringChanged = false;
            }
            break;
        }

        /* The default state should never be executed. */
        default:
        {
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
