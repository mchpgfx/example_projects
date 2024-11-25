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
#include "gfx/legato/generated/le_gen_init.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
#define MAX_CSTR_STR_SIZE       16
#define NUMBER_OF_LOGOS_CELLS   6
#define MARGINS_RADIUS_VALUE    15


leImageWidget* LogoImage[NUMBER_OF_LOGOS_CELLS];
leButtonWidget* LogoKeypadButton[NUMBER_OF_LOGOS_CELLS];
static char cStrBuff[MAX_CSTR_STR_SIZE];

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

void setImageWidgetArray()
{
    LogoImage[0] = Logo_Screen_ImageWidget_Logo_1;
    LogoImage[1] = Logo_Screen_ImageWidget_Logo_2;
    LogoImage[2] = Logo_Screen_ImageWidget_Logo_3;
    LogoImage[3] = Logo_Screen_ImageWidget_Logo_4;
    LogoImage[4] = Logo_Screen_ImageWidget_Logo_5;
    LogoImage[5] = Logo_Screen_ImageWidget_Logo_6;
}

void setKeypadButtons()
{
    LogoKeypadButton[0] = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 0, 0);
    LogoKeypadButton[1] = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 0, 1);
    LogoKeypadButton[2] = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 1, 0);
    LogoKeypadButton[3] = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 1, 1);
    LogoKeypadButton[4] = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 2, 0);
    LogoKeypadButton[5] = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 2, 1);
}

void setLogosOff()
{
    for(int i = 0; i < NUMBER_OF_LOGOS_CELLS; i++)
    {
        LogoImage[i]->fn->setVisible(LogoImage[i], LE_FALSE);
    }
}

void setLogosOn()
{
    for(int i = 0; i < NUMBER_OF_LOGOS_CELLS; i++)
    {
        LogoImage[i]->fn->setVisible(LogoImage[i], LE_TRUE);
    }
}

//algorithm for generating random positions for logos
void randLogoPosition(leButtonWidget* cell)
{
    uint8_t randPosition[NUMBER_OF_LOGOS_CELLS - 1];
    uint8_t pressedCellNr;
    
    setLogosOff();
    
    // Check which Cell was pressed
    for(int i = 0; i < NUMBER_OF_LOGOS_CELLS; i++)
    {
        if(cell == LogoKeypadButton[i])
        {
            pressedCellNr = i + 1;
            break;
        }
    }
    
    // if button 6 was pressed, then show all logos
    if(pressedCellNr == NUMBER_OF_LOGOS_CELLS)      
    {
        setLogosOn();
    }
    else 
    {
        for(int j = 0; j < pressedCellNr; j++)
        {
            bool randOk = false;
            while (randOk == false)
            {
                randPosition[j] = rand() % NUMBER_OF_LOGOS_CELLS;
                randOk = true;
                // Check if the logo was already selected
                for(int k = 0; k < j; k++)
                {
                    if(randPosition[j] == randPosition[k])
                    {
                        randOk = false;
                    }
                }
            }
        }

        for (int j = 0; j < pressedCellNr; j++)
        {
            LogoImage[randPosition[j]]->fn->setVisible(LogoImage[randPosition[j]], LE_TRUE);
        }
    }
}

void setWidgetsMargins()
{
    Logo_Screen_KeyPadWidget->fn->setCornerRadius(Logo_Screen_KeyPadWidget, MARGINS_RADIUS_VALUE);
    Logo_Screen_LabelWidget_KeyPress->fn->setCornerRadius(Logo_Screen_LabelWidget_KeyPress, MARGINS_RADIUS_VALUE);
    Logo_Screen_TextFieldWidget->fn->setCornerRadius(Logo_Screen_TextFieldWidget, MARGINS_RADIUS_VALUE);
    Logo_Screen_ButtonWidget_TicTacToe->fn->setCornerRadius(Logo_Screen_ButtonWidget_TicTacToe, MARGINS_RADIUS_VALUE);  
}
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

void Logo_Screen_OnShow(void)
{
    setWidgetsMargins();
    setImageWidgetArray();
    setKeypadButtons();
    setLogosOff();
}

void Logo_Screen_OnHide(void)
{
    
}

void event_Logo_Screen_KeyPadWidget_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    randLogoPosition(cell);
}

void event_Logo_Screen_ButtonWidget_TicTacToe_OnPressed(leButtonWidget* btn)
{
    legato_showScreen(screenID_Game_Screen);
}
/*******************************************************************************
 End of File
 */
