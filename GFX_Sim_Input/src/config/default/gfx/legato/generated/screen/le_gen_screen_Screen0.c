#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leLabelWidget* Screen0_lblScreenLock;
leLabelWidget* Screen0_lblCounter;
leLabelWidget* Screen0_lblTap;
leWidget* Screen0_pnlLock;
leLabelWidget* Screen0_lblLock;
leButtonWidget* Screen0_btnUnlock;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen0(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen0(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 480, 272);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 480, 272);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_lblScreenLock = leLabelWidget_New();
    Screen0_lblScreenLock->fn->setPosition(Screen0_lblScreenLock, 145, 30);
    Screen0_lblScreenLock->fn->setSize(Screen0_lblScreenLock, 190, 30);
    Screen0_lblScreenLock->fn->setScheme(Screen0_lblScreenLock, &WhiteScheme);
    Screen0_lblScreenLock->fn->setBackgroundType(Screen0_lblScreenLock, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblScreenLock->fn->setHAlignment(Screen0_lblScreenLock, LE_HALIGN_CENTER);
    Screen0_lblScreenLock->fn->setString(Screen0_lblScreenLock, (leString*)&string_strTimerMessage);
    root0->fn->addChild(root0, (leWidget*)Screen0_lblScreenLock);

    Screen0_lblCounter = leLabelWidget_New();
    Screen0_lblCounter->fn->setPosition(Screen0_lblCounter, 189, 80);
    Screen0_lblCounter->fn->setSize(Screen0_lblCounter, 100, 100);
    Screen0_lblCounter->fn->setBackgroundType(Screen0_lblCounter, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblCounter->fn->setBorderType(Screen0_lblCounter, LE_WIDGET_BORDER_LINE);
    Screen0_lblCounter->fn->setHAlignment(Screen0_lblCounter, LE_HALIGN_CENTER);
    root0->fn->addChild(root0, (leWidget*)Screen0_lblCounter);

    Screen0_lblTap = leLabelWidget_New();
    Screen0_lblTap->fn->setPosition(Screen0_lblTap, 165, 202);
    Screen0_lblTap->fn->setSize(Screen0_lblTap, 150, 30);
    Screen0_lblTap->fn->setScheme(Screen0_lblTap, &WhiteScheme);
    Screen0_lblTap->fn->setBackgroundType(Screen0_lblTap, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTap->fn->setHAlignment(Screen0_lblTap, LE_HALIGN_CENTER);
    Screen0_lblTap->fn->setString(Screen0_lblTap, (leString*)&string_strTouchMessage);
    root0->fn->addChild(root0, (leWidget*)Screen0_lblTap);

    Screen0_pnlLock = leWidget_New();
    Screen0_pnlLock->fn->setPosition(Screen0_pnlLock, 0, 0);
    Screen0_pnlLock->fn->setSize(Screen0_pnlLock, 480, 272);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlLock);

    Screen0_lblLock = leLabelWidget_New();
    Screen0_lblLock->fn->setPosition(Screen0_lblLock, 70, 75);
    Screen0_lblLock->fn->setSize(Screen0_lblLock, 340, 50);
    Screen0_lblLock->fn->setScheme(Screen0_lblLock, &WhiteScheme);
    Screen0_lblLock->fn->setBackgroundType(Screen0_lblLock, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblLock->fn->setHAlignment(Screen0_lblLock, LE_HALIGN_CENTER);
    Screen0_lblLock->fn->setString(Screen0_lblLock, (leString*)&string_strLockMessage);
    Screen0_pnlLock->fn->addChild(Screen0_pnlLock, (leWidget*)Screen0_lblLock);

    Screen0_btnUnlock = leButtonWidget_New();
    Screen0_btnUnlock->fn->setPosition(Screen0_btnUnlock, 169, 144);
    Screen0_btnUnlock->fn->setSize(Screen0_btnUnlock, 143, 52);
    Screen0_btnUnlock->fn->setString(Screen0_btnUnlock, (leString*)&string_strUnlock);
    Screen0_btnUnlock->fn->setReleasedEventCallback(Screen0_btnUnlock, event_Screen0_btnUnlock_OnReleased);
    Screen0_pnlLock->fn->addChild(Screen0_pnlLock, (leWidget*)Screen0_btnUnlock);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Screen0_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Screen0_OnUpdate(); // raise event
}

void screenHide_Screen0(void)
{
    Screen0_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_BackgroundPanel = NULL;
    Screen0_lblScreenLock = NULL;
    Screen0_lblCounter = NULL;
    Screen0_lblTap = NULL;
    Screen0_pnlLock = NULL;
    Screen0_lblLock = NULL;
    Screen0_btnUnlock = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen0(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

