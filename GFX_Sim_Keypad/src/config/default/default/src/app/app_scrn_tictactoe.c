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
#include "gfx/legato/generated/le_gen_init.h"
#include <stdbool.h>
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
#define X_String        1
#define O_String        2
#define NUMBER_OF_CELLS 9     

uint8_t pressedButtonsNumber = 0;
int pressed_keys[8];
uint8_t temp = 0;
uint8_t PlayerState = X_String;
uint8_t matrix[3][3];
leButtonWidget* GameKeypadButton[NUMBER_OF_CELLS];

void setGameKeypadButtons()
{
    GameKeypadButton[1] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 0);
    GameKeypadButton[2] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 1);
    GameKeypadButton[3] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 2);
    GameKeypadButton[4] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 0);
    GameKeypadButton[5] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 1);
    GameKeypadButton[6] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 2);
    GameKeypadButton[7] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 0);
    GameKeypadButton[8] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 1);
    GameKeypadButton[9] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 2);
}

void displayOWinMessage()
{
    Game_Screen_LabelWidget_Winner->fn->setEnabled(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_LabelWidget_Winner->fn->setVisible(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_LabelWidget_Winner->fn->setString(Game_Screen_LabelWidget_Winner, (leString*)&string_WinO);
    Game_Screen_KeyPadWidget->fn->setEnabled(Game_Screen_KeyPadWidget, LE_FALSE);
}
void displayXWinMessage()
{
    Game_Screen_LabelWidget_Winner->fn->setEnabled(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_LabelWidget_Winner->fn->setVisible(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_LabelWidget_Winner->fn->setString(Game_Screen_LabelWidget_Winner, (leString*)&string_WinX);
    Game_Screen_KeyPadWidget->fn->setEnabled(Game_Screen_KeyPadWidget, LE_FALSE);
}
void displayLoseMessage()
{
    Game_Screen_LabelWidget_Winner->fn->setEnabled(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_LabelWidget_Winner->fn->setVisible(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_LabelWidget_Winner->fn->setString(Game_Screen_LabelWidget_Winner, (leString*)&string_Lose);
    Game_Screen_KeyPadWidget->fn->setEnabled(Game_Screen_KeyPadWidget, LE_FALSE);
}
void SetPositionsMatrix(uint8_t pressedCellNumber, uint8_t state)
{
    //save the player state in the matrix
    if(pressedCellNumber < 3)
    {
       matrix[pressedCellNumber][0] = state;
    }
    else if(pressedCellNumber > 2 && pressedCellNumber < 6)
    {
       matrix[pressedCellNumber-3][1] = state;
    }
    else if(pressedCellNumber > 5 && pressedCellNumber < 9)
    {
       matrix[pressedCellNumber-6][2] = state;
    }
}
void TicTacToeGame(leButtonWidget* cell)
{
    //variable to check if a cell has already been pressed before
    bool cellAlreadyPressedFlag = false;        
    uint8_t oldPlayerState = 0, pressedCellNumber = 0;
    setGameKeypadButtons();
    
   //check which cell got pressed
    for(int i = 1; i <= NUMBER_OF_CELLS; i++)
    {
       if(cell == GameKeypadButton[i])
       {
           //save a copy of the pressed key
           pressedCellNumber = i;  
           printf("%d", i);         
           // check if the respective cell has been pressed before
           for(int j = 0; j < NUMBER_OF_CELLS; j++)
           {
                printf("%d", pressed_keys[j]); 
               if(pressed_keys[j] == i)
               {
                   cellAlreadyPressedFlag = true;
               }
           }
           //save the pressed cell number in an array to not be able to press it again
           pressed_keys[temp] = i;
           //increment the array
           temp++; 
           //if the button has not been pressed, process the value
           if(cellAlreadyPressedFlag == false)
           {
               pressedButtonsNumber++;
               if(PlayerState == O_String)
               {
                   //show the next player in the label
                   Game_Screen_LabelWidget_Player->fn->setString(Game_Screen_LabelWidget_Player, (leString*)&string_XGame);
                   //set the string in the cell
                   cell->fn->setString(cell, (leString*)&string_OVariable); 
                   oldPlayerState = O_String;
                   PlayerState = X_String;
               }
               else
               {
                   //show the next player in the label
                   Game_Screen_LabelWidget_Player->fn->setString(Game_Screen_LabelWidget_Player, (leString*)&string_OGame);
                   //set the string in the cell
                   cell->fn->setString(cell, (leString*)&string_XVariable);
                   oldPlayerState = X_String;
                   PlayerState = O_String;
               }
           }
       }
    }
    SetPositionsMatrix(pressedCellNumber, oldPlayerState);

    //check the winning positions:
    if(matrix[0][0] == matrix[0][1] && matrix[0][0] == matrix[0][2] && matrix[0][0] != 0)
    {
        if(matrix[0][0] == X_String)
        {
            displayXWinMessage();
        }
        else
        {
            displayOWinMessage();
        }
    }
    else if(matrix[1][0] == matrix[1][1] && matrix[1][0] == matrix[1][2] && matrix[1][0] != 0)
    {
        if(matrix[1][0] == X_String)
        {
            displayXWinMessage();
        }
        else
        {
            displayOWinMessage();
        }
    }
    else if(matrix[2][0] == matrix[2][1] && matrix[2][0] == matrix[2][2] && matrix[2][0] != 0)
    {
       if(matrix[2][0] == X_String)
       {
           displayXWinMessage();
       }
        else
        {
          displayOWinMessage();
        }

    }
    else if(matrix[0][0] == matrix[1][0] && matrix[0][0] == matrix[2][0] && matrix[0][0] != 0)
    {
       if(matrix[0][0] == X_String)
       {
           displayXWinMessage();
       }
        else
        {
           displayOWinMessage();
        }

    }
    else if(matrix[0][1] == matrix[1][1] && matrix[0][1] == matrix[2][1] && matrix[0][1] != 0)
    {
       if(matrix[0][1] == X_String)
       {
           displayXWinMessage();
       }
        else
        {
           displayOWinMessage();
        }
    }
    else if(matrix[0][2] == matrix[1][2] && matrix[0][2] == matrix[2][2] && matrix[0][2] != 0)
    {
       if(matrix[0][2] == X_String)
       {
           displayXWinMessage();
       }
        else
        {
           displayOWinMessage();
        }
    }
    else if(matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2] && matrix[0][0] != 0)
    {
       if(matrix[0][0] == X_String)
       {
           displayXWinMessage();
       }
        else
        {
          displayOWinMessage();
        }
    }
    else if(matrix[0][2] == matrix[1][1] && matrix[0][2] == matrix[2][0] && matrix[0][2] != 0)
    {
       if(matrix[0][2] == X_String)
       {
           displayXWinMessage();
       }
        else
        {
           displayOWinMessage();
        }
    }
    else if(pressedButtonsNumber == 9)
    {
       displayLoseMessage();
    }
}
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

void event_Game_Screen_KeyPadWidget_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    TicTacToeGame(cell);
}

void event_Game_Screen_ButtonWidget_Logo_OnPressed(leButtonWidget* btn)
{
    legato_showScreen(screenID_Logo_Screen);
    legato_updateScreenState();
}
void event_Game_Screen_ButtonWidget_Game_Rst_OnPressed(leButtonWidget* btn)
{
    Game_Screen_LabelWidget_Winner->fn->setVisible(Game_Screen_LabelWidget_Winner, LE_FALSE);
    legato_showScreen(screenID_Game_Screen);
    legato_updateScreenState();
    
    //reinitialize values to restart tic-tac-toe game:
    pressedButtonsNumber = 0;
    temp = 0;
    PlayerState = 1;
    for(int i = 0; i < 9; i++)
    {
        pressed_keys[i] = 0;
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void Game_Screen_OnShow(void)
{
    Game_Screen_ButtonWidget_Game_Rst->fn->setCornerRadius(Game_Screen_ButtonWidget_Game_Rst, 15);
    Game_Screen_ButtonWidget_Logo->fn->setCornerRadius(Game_Screen_ButtonWidget_Logo, 15);
    Game_Screen_LabelWidget_Player->fn->setCornerRadius(Game_Screen_LabelWidget_Player, 15);
    Game_Screen_LabelWidget_Winner->fn->setCornerRadius(Game_Screen_LabelWidget_Winner, 15);
    //reinitialize values to restart tic-tac-toe game:
    pressedButtonsNumber = 0;
    temp = 0;
    PlayerState = 1;
    for(int i = 0; i < 9; i++)
    {
        pressed_keys[i] = 0;
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrix[i][j] = 0;
        }
    }
}
void Game_Screen_OnHide(void)
{
    
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
 End of File
 */
