#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leLabelWidget* Screen0_LabelWidget_Fixed_Stat;
leLabelWidget* Screen0_LabelWidget_Dyn;
leLabelWidget* Screen0_LabelWidget_1;
leLabelWidget* Screen0_LabelWidget_1_0;
leButtonWidget* Screen0_ButtonWidget_StartStop;
leButtonWidget* Screen0_ButtonWidget_English;
leButtonWidget* Screen0_ButtonWidget_Spanish;
leButtonWidget* Screen0_ButtonWidget_Chinese;

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
    root0->fn->setSize(root0, 320, 240);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 320, 240);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &WhiteScheme);
    Screen0_BackgroundPanel->fn->setBorderType(Screen0_BackgroundPanel, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_LabelWidget_Fixed_Stat = leLabelWidget_New();
    Screen0_LabelWidget_Fixed_Stat->fn->setPosition(Screen0_LabelWidget_Fixed_Stat, 20, 108);
    Screen0_LabelWidget_Fixed_Stat->fn->setSize(Screen0_LabelWidget_Fixed_Stat, 77, 40);
    Screen0_LabelWidget_Fixed_Stat->fn->setBackgroundType(Screen0_LabelWidget_Fixed_Stat, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_Fixed_Stat->fn->setBorderType(Screen0_LabelWidget_Fixed_Stat, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_Fixed_Stat);

    Screen0_LabelWidget_Dyn = leLabelWidget_New();
    Screen0_LabelWidget_Dyn->fn->setPosition(Screen0_LabelWidget_Dyn, 20, 188);
    Screen0_LabelWidget_Dyn->fn->setSize(Screen0_LabelWidget_Dyn, 140, 40);
    Screen0_LabelWidget_Dyn->fn->setBackgroundType(Screen0_LabelWidget_Dyn, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_Dyn->fn->setBorderType(Screen0_LabelWidget_Dyn, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_Dyn);

    Screen0_LabelWidget_1 = leLabelWidget_New();
    Screen0_LabelWidget_1->fn->setPosition(Screen0_LabelWidget_1, 20, 85);
    Screen0_LabelWidget_1->fn->setSize(Screen0_LabelWidget_1, 140, 20);
    Screen0_LabelWidget_1->fn->setBackgroundType(Screen0_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_StringFixed);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_1);

    Screen0_LabelWidget_1_0 = leLabelWidget_New();
    Screen0_LabelWidget_1_0->fn->setPosition(Screen0_LabelWidget_1_0, 20, 165);
    Screen0_LabelWidget_1_0->fn->setSize(Screen0_LabelWidget_1_0, 140, 20);
    Screen0_LabelWidget_1_0->fn->setBackgroundType(Screen0_LabelWidget_1_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_1_0->fn->setString(Screen0_LabelWidget_1_0, (leString*)&string_StringDynamic);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_1_0);

    Screen0_ButtonWidget_StartStop = leButtonWidget_New();
    Screen0_ButtonWidget_StartStop->fn->setPosition(Screen0_ButtonWidget_StartStop, 190, 105);
    Screen0_ButtonWidget_StartStop->fn->setSize(Screen0_ButtonWidget_StartStop, 120, 120);
    Screen0_ButtonWidget_StartStop->fn->setBackgroundType(Screen0_ButtonWidget_StartStop, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_StartStop->fn->setBorderType(Screen0_ButtonWidget_StartStop, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_StartStop->fn->setToggleable(Screen0_ButtonWidget_StartStop, LE_TRUE);
    Screen0_ButtonWidget_StartStop->fn->setString(Screen0_ButtonWidget_StartStop, (leString*)&string_StringRun);
    Screen0_ButtonWidget_StartStop->fn->setPressedImage(Screen0_ButtonWidget_StartStop, (leImage*)&button_stop);
    Screen0_ButtonWidget_StartStop->fn->setReleasedImage(Screen0_ButtonWidget_StartStop, (leImage*)&button_start);
    Screen0_ButtonWidget_StartStop->fn->setImagePosition(Screen0_ButtonWidget_StartStop, LE_RELATIVE_POSITION_BEHIND);
    Screen0_ButtonWidget_StartStop->fn->setPressedEventCallback(Screen0_ButtonWidget_StartStop, event_Screen0_ButtonWidget_StartStop_OnPressed);
    Screen0_ButtonWidget_StartStop->fn->setReleasedEventCallback(Screen0_ButtonWidget_StartStop, event_Screen0_ButtonWidget_StartStop_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_StartStop);

    Screen0_ButtonWidget_English = leButtonWidget_New();
    Screen0_ButtonWidget_English->fn->setPosition(Screen0_ButtonWidget_English, 34, 5);
    Screen0_ButtonWidget_English->fn->setSize(Screen0_ButtonWidget_English, 60, 60);
    Screen0_ButtonWidget_English->fn->setBackgroundType(Screen0_ButtonWidget_English, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_English->fn->setBorderType(Screen0_ButtonWidget_English, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_English->fn->setPressedImage(Screen0_ButtonWidget_English, (leImage*)&flag_uk);
    Screen0_ButtonWidget_English->fn->setReleasedImage(Screen0_ButtonWidget_English, (leImage*)&flag_uk);
    Screen0_ButtonWidget_English->fn->setPressedEventCallback(Screen0_ButtonWidget_English, event_Screen0_ButtonWidget_English_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_English);

    Screen0_ButtonWidget_Spanish = leButtonWidget_New();
    Screen0_ButtonWidget_Spanish->fn->setPosition(Screen0_ButtonWidget_Spanish, 134, 5);
    Screen0_ButtonWidget_Spanish->fn->setSize(Screen0_ButtonWidget_Spanish, 60, 60);
    Screen0_ButtonWidget_Spanish->fn->setBackgroundType(Screen0_ButtonWidget_Spanish, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_Spanish->fn->setBorderType(Screen0_ButtonWidget_Spanish, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Spanish->fn->setPressedImage(Screen0_ButtonWidget_Spanish, (leImage*)&flag_spain);
    Screen0_ButtonWidget_Spanish->fn->setReleasedImage(Screen0_ButtonWidget_Spanish, (leImage*)&flag_spain);
    Screen0_ButtonWidget_Spanish->fn->setPressedEventCallback(Screen0_ButtonWidget_Spanish, event_Screen0_ButtonWidget_Spanish_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Spanish);

    Screen0_ButtonWidget_Chinese = leButtonWidget_New();
    Screen0_ButtonWidget_Chinese->fn->setPosition(Screen0_ButtonWidget_Chinese, 234, 6);
    Screen0_ButtonWidget_Chinese->fn->setSize(Screen0_ButtonWidget_Chinese, 60, 60);
    Screen0_ButtonWidget_Chinese->fn->setBackgroundType(Screen0_ButtonWidget_Chinese, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_Chinese->fn->setBorderType(Screen0_ButtonWidget_Chinese, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Chinese->fn->setPressedImage(Screen0_ButtonWidget_Chinese, (leImage*)&flag_china);
    Screen0_ButtonWidget_Chinese->fn->setReleasedImage(Screen0_ButtonWidget_Chinese, (leImage*)&flag_china);
    Screen0_ButtonWidget_Chinese->fn->setPressedEventCallback(Screen0_ButtonWidget_Chinese, event_Screen0_ButtonWidget_Chinese_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Chinese);

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
    Screen0_LabelWidget_Fixed_Stat = NULL;
    Screen0_LabelWidget_Dyn = NULL;
    Screen0_LabelWidget_1 = NULL;
    Screen0_LabelWidget_1_0 = NULL;
    Screen0_ButtonWidget_StartStop = NULL;
    Screen0_ButtonWidget_English = NULL;
    Screen0_ButtonWidget_Spanish = NULL;
    Screen0_ButtonWidget_Chinese = NULL;


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

