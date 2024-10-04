#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_PanelWidget_0;
leLineWidget* Screen0_LineWidget_0;
leButtonWidget* Screen0_ButtonWidget_0;

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

    Screen0_PanelWidget_0 = leWidget_New();
    Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, 0, -1);
    Screen0_PanelWidget_0->fn->setSize(Screen0_PanelWidget_0, 480, 275);
    Screen0_PanelWidget_0->fn->setScheme(Screen0_PanelWidget_0, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_PanelWidget_0);

    Screen0_LineWidget_0 = leLineWidget_New();
    Screen0_LineWidget_0->fn->setPosition(Screen0_LineWidget_0, 182, 58);
    Screen0_LineWidget_0->fn->setSize(Screen0_LineWidget_0, 105, 105);
    Screen0_LineWidget_0->fn->setScheme(Screen0_LineWidget_0, &BlueScheme);
    Screen0_LineWidget_0->fn->setBackgroundType(Screen0_LineWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LineWidget_0->fn->setStartPoint(Screen0_LineWidget_0, 0, 50);
    Screen0_LineWidget_0->fn->setEndPoint(Screen0_LineWidget_0, 100, 50);
    root0->fn->addChild(root0, (leWidget*)Screen0_LineWidget_0);

    Screen0_ButtonWidget_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0->fn->setPosition(Screen0_ButtonWidget_0, 178, 206);
    Screen0_ButtonWidget_0->fn->setSize(Screen0_ButtonWidget_0, 112, 42);
    Screen0_ButtonWidget_0->fn->setScheme(Screen0_ButtonWidget_0, &ButtonScheme);
    Screen0_ButtonWidget_0->fn->setString(Screen0_ButtonWidget_0, (leString*)&string_Rotate);
    Screen0_ButtonWidget_0->fn->setReleasedEventCallback(Screen0_ButtonWidget_0, event_Screen0_ButtonWidget_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Screen0(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_PanelWidget_0 = NULL;
    Screen0_LineWidget_0 = NULL;
    Screen0_ButtonWidget_0 = NULL;


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

