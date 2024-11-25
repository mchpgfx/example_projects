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
#define X_STRING            1
#define O_STRING            2
#define NO_WINNER           3
#define NUMBER_OF_CELLS     9  
#define DUMMY_VALUE         9
#define CLEAR               0
#define SIZE                3
#define RADIUS_VAL          15

int pressedKeys[NUMBER_OF_CELLS];
uint8_t arrayIndex = CLEAR;
uint8_t PlayerState = X_STRING;
uint8_t gameBoard[SIZE][SIZE];
leButtonWidget* GameKeypadButton[NUMBER_OF_CELLS];

void setGameKeypadButtons()
{
    GameKeypadButton[0] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 0);
    GameKeypadButton[1] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 1);
    GameKeypadButton[2] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 2);
    GameKeypadButton[3] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 0);
    GameKeypadButton[4] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 1);
    GameKeypadButton[5] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 2);
    GameKeypadButton[6] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 0);
    GameKeypadButton[7] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 1);
    GameKeypadButton[8] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 2);
}

void displayEndMessage(uint8_t player)
{
    Game_Screen_LabelWidget_Winner->fn->setEnabled(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_LabelWidget_Winner->fn->setVisible(Game_Screen_LabelWidget_Winner, LE_TRUE);
    Game_Screen_KeyPadWidget->fn->setEnabled(Game_Screen_KeyPadWidget, LE_FALSE);
    
    if(player == X_STRING)
    {
        Game_Screen_LabelWidget_Winner->fn->setString(Game_Screen_LabelWidget_Winner, (leString*)&string_WinX);
    }
    else if(player == O_STRING)
    {
        Game_Screen_LabelWidget_Winner->fn->setString(Game_Screen_LabelWidget_Winner, (leString*)&string_WinO);
    }
    else if (player == NO_WINNER)
    {
        Game_Screen_LabelWidget_Winner->fn->setString(Game_Screen_LabelWidget_Winner, (leString*)&string_Lose);
    }
}

void setPositionsMatrix(uint8_t player, uint32_t row, uint32_t col)
{
    //save the player state in the matrix
    gameBoard[row][col] = player;
}

void checkWinningPositions()
{
    //check the winning positions:
    //check rows
    for(int i = 0; i < SIZE; i++)
    {
        if(gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][0] == gameBoard[i][2] && gameBoard[i][0] != 0)
        {
           displayEndMessage(gameBoard[i][0]);
        }
    }
    //check columns:
    for(int i = 0; i < SIZE; i++)
    {
        if(gameBoard[0][i] == gameBoard[1][i] && gameBoard[0][i] == gameBoard[2][i] && gameBoard[0][i] != 0)
        {
            displayEndMessage(gameBoard[0][i]);
        }
    }    
    //check diagonals
    if(gameBoard[0][0] == gameBoard[1][1] && gameBoard[0][0] == gameBoard[2][2] && gameBoard[0][0] != 0)
    {
       displayEndMessage(gameBoard[0][0]);
    }
    else if(gameBoard[0][2] == gameBoard[1][1] && gameBoard[0][2] == gameBoard[2][0] && gameBoard[0][2] != 0)
    {
       displayEndMessage(gameBoard[0][2]);
    }
    //else lose:
    else if(arrayIndex == NUMBER_OF_CELLS)
    {
       displayEndMessage(NO_WINNER);
    }
}

void TicTacToeGame(leButtonWidget* cell, uint32_t row, uint32_t col)
{
    //variable to check if a cell has already been pressed before
    bool cellAlreadyPressedFlag = false;        
    uint8_t oldPlayerState = CLEAR;
    
   //check which cell got pressed
    for(int i = 0; i < NUMBER_OF_CELLS; i++)
    {
       if(cell == GameKeypadButton[i])
       {   
           // check if the respective cell has been pressed before
           for(int j = 0; j < NUMBER_OF_CELLS; j++)
           {
               if(pressedKeys[j] == i)
               {
                   cellAlreadyPressedFlag = true;
               }
           }
           
           //if the button has not been pressed, process the value
           if(cellAlreadyPressedFlag == false)
           {
               //save the pressed cell number in an array to not be able to press it again
               pressedKeys[arrayIndex] = i;
               //increment the array
               arrayIndex++; 
               if(PlayerState == O_STRING)
               {
                   //show the next player in the label
                   Game_Screen_LabelWidget_Player->fn->setString(Game_Screen_LabelWidget_Player, (leString*)&string_XGame);
                   //set the string in the cell
                   cell->fn->setString(cell, (leString*)&string_OVariable); 
                   oldPlayerState = O_STRING;
                   PlayerState = X_STRING;
               }
               else
               {
                   //show the next player in the label
                   Game_Screen_LabelWidget_Player->fn->setString(Game_Screen_LabelWidget_Player, (leString*)&string_OGame);
                   //set the string in the cell
                   cell->fn->setString(cell, (leString*)&string_XVariable);
                   oldPlayerState = X_STRING;
                   PlayerState = O_STRING;
               }
               setPositionsMatrix(oldPlayerState, row, col);
               checkWinningPositions();
           }
       }
    } 
}

void Game_SetWidgetMargins()
{
    Game_Screen_ButtonWidget_Game_Rst->fn->setCornerRadius(Game_Screen_ButtonWidget_Game_Rst, RADIUS_VAL);
    Game_Screen_ButtonWidget_Logo->fn->setCornerRadius(Game_Screen_ButtonWidget_Logo, RADIUS_VAL);
    Game_Screen_LabelWidget_Player->fn->setCornerRadius(Game_Screen_LabelWidget_Player, RADIUS_VAL);
    Game_Screen_LabelWidget_Winner->fn->setCornerRadius(Game_Screen_LabelWidget_Winner, RADIUS_VAL);
}

void Game_VariablesInitialize()
{
    //reinitialize values to restart tic-tac-toe game:
    arrayIndex = CLEAR;
    PlayerState = X_STRING;
    for(int i = 0; i < NUMBER_OF_CELLS; i++)
    {
        pressedKeys[i] = DUMMY_VALUE;
    }
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            gameBoard[i][j] = CLEAR;
        }
    }
    Game_Screen_KeyPadWidget->fn->setEnabled(Game_Screen_KeyPadWidget, LE_TRUE);
    
    //reinitialize the values of the cells for the keypad:
    setGameKeypadButtons();
    //GameKeypadButton[0] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 0);
    GameKeypadButton[0]->fn->setString(GameKeypadButton[0], (leString*)&string_Clear);
   // GameKeypadButton[1] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 1);
    GameKeypadButton[1]->fn->setString(GameKeypadButton[1], (leString*)&string_Clear);
   // GameKeypadButton[2] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 2);
    GameKeypadButton[2]->fn->setString(GameKeypadButton[2], (leString*)&string_Clear);
   // GameKeypadButton[3] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 0);
    GameKeypadButton[3]->fn->setString(GameKeypadButton[3], (leString*)&string_Clear);
  //  GameKeypadButton[4] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 1);
    GameKeypadButton[4]->fn->setString(GameKeypadButton[4], (leString*)&string_Clear);
  //  GameKeypadButton[5] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 2);
    GameKeypadButton[5]->fn->setString(GameKeypadButton[5], (leString*)&string_Clear);
  //  GameKeypadButton[6] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 0);
    GameKeypadButton[6]->fn->setString(GameKeypadButton[6], (leString*)&string_Clear);
   // GameKeypadButton[7] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 1);
    GameKeypadButton[7]->fn->setString(GameKeypadButton[7], (leString*)&string_Clear);
   // GameKeypadButton[8] = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 2);
    GameKeypadButton[8]->fn->setString(GameKeypadButton[8], (leString*)&string_Clear);
    
    //reinitialize the label value:
    Game_Screen_LabelWidget_Player->fn->setString(Game_Screen_LabelWidget_Player, (leString*)&string_XGame);
    
}
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

void event_Game_Screen_KeyPadWidget_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    TicTacToeGame(cell, row, col);
}

void event_Game_Screen_ButtonWidget_Logo_OnPressed(leButtonWidget* btn)
{
    legato_showScreen(screenID_Logo_Screen);
}

void event_Game_Screen_ButtonWidget_Game_Rst_OnPressed(leButtonWidget* btn)
{
    Game_Screen_LabelWidget_Winner->fn->setVisible(Game_Screen_LabelWidget_Winner, LE_FALSE);
    Game_VariablesInitialize();
}

void Game_Screen_OnShow(void)
{
    Game_SetWidgetMargins();
    Game_VariablesInitialize();
    setGameKeypadButtons();
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
