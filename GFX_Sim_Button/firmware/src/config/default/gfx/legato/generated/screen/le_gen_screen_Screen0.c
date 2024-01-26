#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leButtonWidget* Screen0_ButtonWidget_0;
leButtonWidget* Screen0_ButtonWidget_Toggle;
leLabelWidget* Screen0_LabelWidget_0;
leLabelWidget* Screen0_LabelWidget_1;

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
    root0->fn->setSize(root0, 800, 480);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 800, 480);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_ButtonWidget_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0->fn->setPosition(Screen0_ButtonWidget_0, 550, 50);
    Screen0_ButtonWidget_0->fn->setSize(Screen0_ButtonWidget_0, 200, 75);
    Screen0_ButtonWidget_0->fn->setBackgroundType(Screen0_ButtonWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_0->fn->setBorderType(Screen0_ButtonWidget_0, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_0->fn->setString(Screen0_ButtonWidget_0, (leString*)&string_press);
    Screen0_ButtonWidget_0->fn->setPressedImage(Screen0_ButtonWidget_0, (leImage*)&buttonDwn);
    Screen0_ButtonWidget_0->fn->setReleasedImage(Screen0_ButtonWidget_0, (leImage*)&button);
    Screen0_ButtonWidget_0->fn->setImagePosition(Screen0_ButtonWidget_0, LE_RELATIVE_POSITION_BEHIND);
    Screen0_ButtonWidget_0->fn->setReleasedEventCallback(Screen0_ButtonWidget_0, event_Screen0_ButtonWidget_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0);

    Screen0_ButtonWidget_Toggle = leButtonWidget_New();
    Screen0_ButtonWidget_Toggle->fn->setPosition(Screen0_ButtonWidget_Toggle, 550, 288);
    Screen0_ButtonWidget_Toggle->fn->setSize(Screen0_ButtonWidget_Toggle, 200, 75);
    Screen0_ButtonWidget_Toggle->fn->setBackgroundType(Screen0_ButtonWidget_Toggle, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_Toggle->fn->setBorderType(Screen0_ButtonWidget_Toggle, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Toggle->fn->setToggleable(Screen0_ButtonWidget_Toggle, LE_TRUE);
    Screen0_ButtonWidget_Toggle->fn->setString(Screen0_ButtonWidget_Toggle, (leString*)&string_toggle);
    Screen0_ButtonWidget_Toggle->fn->setPressedImage(Screen0_ButtonWidget_Toggle, (leImage*)&buttonTDwn);
    Screen0_ButtonWidget_Toggle->fn->setReleasedImage(Screen0_ButtonWidget_Toggle, (leImage*)&buttonT);
    Screen0_ButtonWidget_Toggle->fn->setImagePosition(Screen0_ButtonWidget_Toggle, LE_RELATIVE_POSITION_BEHIND);
    Screen0_ButtonWidget_Toggle->fn->setPressedEventCallback(Screen0_ButtonWidget_Toggle, event_Screen0_ButtonWidget_Toggle_OnPressed);
    Screen0_ButtonWidget_Toggle->fn->setReleasedEventCallback(Screen0_ButtonWidget_Toggle, event_Screen0_ButtonWidget_Toggle_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Toggle);

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 160, 60);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 228, 30);
    Screen0_LabelWidget_0->fn->setBackgroundType(Screen0_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_pressed);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_0);

    Screen0_LabelWidget_1 = leLabelWidget_New();
    Screen0_LabelWidget_1->fn->setPosition(Screen0_LabelWidget_1, 152, 307);
    Screen0_LabelWidget_1->fn->setSize(Screen0_LabelWidget_1, 249, 50);
    Screen0_LabelWidget_1->fn->setBackgroundType(Screen0_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_toggleOff);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_1);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

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

    Screen0_BackgroundPanel = NULL;
    Screen0_ButtonWidget_0 = NULL;
    Screen0_ButtonWidget_Toggle = NULL;
    Screen0_LabelWidget_0 = NULL;
    Screen0_LabelWidget_1 = NULL;


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

