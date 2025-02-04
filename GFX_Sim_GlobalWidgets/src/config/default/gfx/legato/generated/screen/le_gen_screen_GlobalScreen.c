#include "gfx/legato/generated/screen/le_gen_screen_GlobalScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* GlobalScreen_BackgroundPanel;
leWidget* GlobalScreen_pnlMenu;
leLabelWidget* GlobalScreen_lblCount;
leButtonWidget* GlobalScreen_btnScreen0;
leButtonWidget* GlobalScreen_btnScreen1;
leButtonWidget* GlobalScreen_btnScreen2;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_GlobalScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    GlobalScreen_BackgroundPanel = leWidget_New();
    GlobalScreen_BackgroundPanel->fn->setPosition(GlobalScreen_BackgroundPanel, 0, 0);
    GlobalScreen_BackgroundPanel->fn->setSize(GlobalScreen_BackgroundPanel, 480, 272);
    GlobalScreen_BackgroundPanel->fn->setScheme(GlobalScreen_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)GlobalScreen_BackgroundPanel);

    GlobalScreen_pnlMenu = leWidget_New();
    GlobalScreen_pnlMenu->fn->setPosition(GlobalScreen_pnlMenu, 10, 10);
    GlobalScreen_pnlMenu->fn->setSize(GlobalScreen_pnlMenu, 460, 60);
    GlobalScreen_pnlMenu->fn->setScheme(GlobalScreen_pnlMenu, &WhiteScheme);
    GlobalScreen_pnlMenu->fn->setBackgroundType(GlobalScreen_pnlMenu, LE_WIDGET_BACKGROUND_NONE);
    GlobalScreen_pnlMenu->fn->setBorderType(GlobalScreen_pnlMenu, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)GlobalScreen_pnlMenu);

    GlobalScreen_lblCount = leLabelWidget_New();
    GlobalScreen_lblCount->fn->setPosition(GlobalScreen_lblCount, 350, 18);
    GlobalScreen_lblCount->fn->setBackgroundType(GlobalScreen_lblCount, LE_WIDGET_BACKGROUND_NONE);
    GlobalScreen_lblCount->fn->setBorderType(GlobalScreen_lblCount, LE_WIDGET_BORDER_LINE);
    GlobalScreen_lblCount->fn->setHAlignment(GlobalScreen_lblCount, LE_HALIGN_CENTER);
    GlobalScreen_lblCount->fn->setString(GlobalScreen_lblCount, (leString*)&string_strDefaultCount);
    GlobalScreen_pnlMenu->fn->addChild(GlobalScreen_pnlMenu, (leWidget*)GlobalScreen_lblCount);

    GlobalScreen_btnScreen0 = leButtonWidget_New();
    GlobalScreen_btnScreen0->fn->setPosition(GlobalScreen_btnScreen0, 12, 9);
    GlobalScreen_btnScreen0->fn->setSize(GlobalScreen_btnScreen0, 100, 40);
    GlobalScreen_btnScreen0->fn->setScheme(GlobalScreen_btnScreen0, &MenuScheme);
    GlobalScreen_btnScreen0->fn->setBorderType(GlobalScreen_btnScreen0, LE_WIDGET_BORDER_NONE);
    GlobalScreen_btnScreen0->fn->setString(GlobalScreen_btnScreen0, (leString*)&string_strScreen0);
    GlobalScreen_btnScreen0->fn->setReleasedEventCallback(GlobalScreen_btnScreen0, event_GlobalScreen_btnScreen0_OnReleased);
    GlobalScreen_pnlMenu->fn->addChild(GlobalScreen_pnlMenu, (leWidget*)GlobalScreen_btnScreen0);

    GlobalScreen_btnScreen1 = leButtonWidget_New();
    GlobalScreen_btnScreen1->fn->setPosition(GlobalScreen_btnScreen1, 122, 9);
    GlobalScreen_btnScreen1->fn->setSize(GlobalScreen_btnScreen1, 100, 40);
    GlobalScreen_btnScreen1->fn->setScheme(GlobalScreen_btnScreen1, &MenuScheme);
    GlobalScreen_btnScreen1->fn->setBorderType(GlobalScreen_btnScreen1, LE_WIDGET_BORDER_NONE);
    GlobalScreen_btnScreen1->fn->setString(GlobalScreen_btnScreen1, (leString*)&string_strScreen1);
    GlobalScreen_btnScreen1->fn->setReleasedEventCallback(GlobalScreen_btnScreen1, event_GlobalScreen_btnScreen1_OnReleased);
    GlobalScreen_pnlMenu->fn->addChild(GlobalScreen_pnlMenu, (leWidget*)GlobalScreen_btnScreen1);

    GlobalScreen_btnScreen2 = leButtonWidget_New();
    GlobalScreen_btnScreen2->fn->setPosition(GlobalScreen_btnScreen2, 232, 9);
    GlobalScreen_btnScreen2->fn->setSize(GlobalScreen_btnScreen2, 100, 40);
    GlobalScreen_btnScreen2->fn->setScheme(GlobalScreen_btnScreen2, &MenuScheme);
    GlobalScreen_btnScreen2->fn->setBorderType(GlobalScreen_btnScreen2, LE_WIDGET_BORDER_NONE);
    GlobalScreen_btnScreen2->fn->setString(GlobalScreen_btnScreen2, (leString*)&string_strScreen2);
    GlobalScreen_btnScreen2->fn->setReleasedEventCallback(GlobalScreen_btnScreen2, event_GlobalScreen_btnScreen2_OnReleased);
    GlobalScreen_pnlMenu->fn->addChild(GlobalScreen_pnlMenu, (leWidget*)GlobalScreen_btnScreen2);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_GlobalScreen(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_GlobalScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_GlobalScreen(void)
{
    showing = LE_FALSE;
}

void screenDestroy_GlobalScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    GlobalScreen_BackgroundPanel = NULL;
    GlobalScreen_pnlMenu = NULL;
    GlobalScreen_lblCount = NULL;
    GlobalScreen_btnScreen0 = NULL;
    GlobalScreen_btnScreen1 = NULL;
    GlobalScreen_btnScreen2 = NULL;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_GlobalScreen(uint32_t lyrIdx)
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

