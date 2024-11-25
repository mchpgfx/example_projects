#include "gfx/legato/generated/le_gen_init.h"

static int32_t currentScreen;
static int32_t changingToScreen;

void legato_initializeScreenState(void)
{
    leSetStringTable(&stringTable);

    initializeStrings();

    screenInit_Logo_Screen();
    screenInit_Game_Screen();

    currentScreen = -1;
    changingToScreen = -1;

    legato_showScreen(screenID_Logo_Screen);
}

uint32_t legato_getCurrentScreen(void)
{
    return currentScreen;
}

static void legato_hideCurrentScreen(void)
{
    switch(currentScreen)
    {
        case screenID_Logo_Screen:
        {
            screenHide_Logo_Screen();
            currentScreen = 0;
            break;
        }
        case screenID_Game_Screen:
        {
            screenHide_Game_Screen();
            currentScreen = 0;
            break;
        }
    }
}

void legato_showScreen(uint32_t id)
{
    if(changingToScreen >= 0)
        return;

    changingToScreen = id;
}

void legato_updateScreenState(void)
{
    if(leIsDrawing() == LE_TRUE)
        return;

    if(changingToScreen >= 0)
    {
        legato_hideCurrentScreen();

        switch(changingToScreen)
        {
            case screenID_Logo_Screen:
            {
                screenShow_Logo_Screen();
                break;
            }
            case screenID_Game_Screen:
            {
                screenShow_Game_Screen();
                break;
            }
        }

        currentScreen = changingToScreen;
        changingToScreen = -1;
    }

    switch(currentScreen)
    {
        case screenID_Logo_Screen:
        {
            screenUpdate_Logo_Screen();
            break;
        }
        case screenID_Game_Screen:
        {
            screenUpdate_Game_Screen();
            break;
        }
    }
}

leBool legato_isChangingScreens(void)
{
    return changingToScreen != -1;
}

