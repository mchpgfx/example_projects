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

#define CHAR_LIMIT 8
#define DEFAULT_CODE "00123400"

/* String objects for showing new code */
static leFixedString passcodeStr;
static leChar passcodeStrBuff[CHAR_LIMIT];

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

/* This function sets the textfield string to text*/
static void setTextFieldDefault(leTextFieldWidget * textfield, const char * text)
{
    /* Temporary char buffer */
    char tempCharBuff[CHAR_LIMIT + 1] = {0};

    /* Get the Textfield string object*/
    const leString * textfieldStr = textfield->fn->getString(textfield);
    
    /* Length-timit copy to temporary char buffer */
    strncpy(tempCharBuff, text, CHAR_LIMIT);
    
    /* copy char buffer to textfield string buffer */
    textfieldStr->fn->setFromCStr((leString *) textfieldStr, tempCharBuff);
    textfield->fn->invalidate(textfield); 
}

/* Called when screen is shown */
void Screen1_OnShow(void)
{
    /* Initialize string objects for "New Code" label */
    leFixedString_Constructor(&passcodeStr, passcodeStrBuff, CHAR_LIMIT);
    passcodeStr.fn->setFont(&passcodeStr, 
                        leStringTable_GetStringFont(leGetState()->stringTable,
                                                    stringID_StringNewCode,
                                                    0)); 
    
    /* 
     * Workaround for bug in GFX v3.14 where keypad button images cannot be set behind text.
     * Set to behind using setImagePosition API 
     */
    {
        #define NUM_ROWS 4 //These defines must match the # of cells in keypad
        #define NUM_COLS 3 //These defines must match the # of cells in keypad

        uint32_t row;
        uint32_t col;
            
        for (row = 0; row < NUM_ROWS; row++)
        {
            for (col = 0; col < NUM_COLS; col++)
            {
                leButtonWidget* cell_0_0 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, row, col);
                cell_0_0->fn->setImagePosition(cell_0_0, LE_RELATIVE_POSITION_BEHIND);
            }
        }
    }
    
}

/* Keypad widget OnKeyClick event callback
 * 
 * This limits the length of the input string to CHAR_LIMIT
 */
void event_Screen1_KeyPadWidget_0_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    //Get the length of the text field string object 
    const leString * textfieldStr = Screen1_TextFieldWidget_0->fn->getString(Screen1_TextFieldWidget_0);
    uint32_t length = textfieldStr->fn->length(textfieldStr);
    
    //limit the length of input string by removing the last character
    if (length >= CHAR_LIMIT)
    {
        textfieldStr->fn->remove((leString *) textfieldStr, length - 1, 1);
    }
}

/* OK button Pressed event callback 
 * 
 * This copies the input string in the textfield widget to the New Code label
 */
void event_Screen1_OkButton_OnPressed(leButtonWidget* btn)
{
    /* Get a pointer to the text field widget string object */
    const leString * textfieldStr = Screen1_TextFieldWidget_0->fn->getString(Screen1_TextFieldWidget_0);
    
    /* Copy content of text field widget string to passCodeStr object */
    passcodeStr.fn->setFromString(&passcodeStr, textfieldStr);
    
    /* Assign passCodeStr String object to New Code label widget  */
    Screen1_NewCode->fn->setString(Screen1_NewCode, (leString*)&passcodeStr);    
    
    /* Invalidate New Code widget to force code draw  */
    Screen1_NewCode->fn->invalidate(Screen1_NewCode);
}

/* Default button Pressed event callback 
 * 
 * This will set the textfield widget value to default code
 */
void event_Screen1_SetDefaultButton_OnReleased(leButtonWidget* btn)
{
    setTextFieldDefault(Screen1_TextFieldWidget_0, DEFAULT_CODE);
}
/*******************************************************************************
 End of File
 */
