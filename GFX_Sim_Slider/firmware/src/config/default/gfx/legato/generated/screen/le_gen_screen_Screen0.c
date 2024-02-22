#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leWidget* Screen0_PanelWidget_0;
leSliderWidget* Screen0_SliderWidget1;
leSliderWidget* Screen0_SliderWidget2;
leLabelWidget* Screen0_StringLabel;
leLabelWidget* Screen0_ValueLabel;

leFixedString sliderStr;                           //Legato string object
leChar tempBuffer[32] = {0};

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
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, -1);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 800, 480);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_PanelWidget_0 = leWidget_New();
    Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, 147, 79);
    Screen0_PanelWidget_0->fn->setSize(Screen0_PanelWidget_0, 506, 287);
    Screen0_PanelWidget_0->fn->setScheme(Screen0_PanelWidget_0, &PanelScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_PanelWidget_0);

    Screen0_SliderWidget1 = leSliderWidget_New();
    Screen0_SliderWidget1->fn->setPosition(Screen0_SliderWidget1, 96, 105);
    Screen0_SliderWidget1->fn->setSize(Screen0_SliderWidget1, 125, 50);
    Screen0_SliderWidget1->fn->setScheme(Screen0_SliderWidget1, &SLiderScheme);
    Screen0_SliderWidget1->fn->setBackgroundType(Screen0_SliderWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_SliderWidget1->fn->setBorderType(Screen0_SliderWidget1, LE_WIDGET_BORDER_NONE);
    Screen0_SliderWidget1->fn->setOrientation(Screen0_SliderWidget1, LE_ORIENTATION_HORIZONTAL, LE_FALSE);
    Screen0_SliderWidget1->fn->setGripSize(Screen0_SliderWidget1, 20);
    Screen0_SliderWidget1->fn->setValueChangedEventCallback(Screen0_SliderWidget1, event_Screen0_SliderWidget1_OnValueChanged);
    Screen0_PanelWidget_0->fn->addChild(Screen0_PanelWidget_0, (leWidget*)Screen0_SliderWidget1);

    Screen0_SliderWidget2 = leSliderWidget_New();
    Screen0_SliderWidget2->fn->setPosition(Screen0_SliderWidget2, 327, 50);
    Screen0_SliderWidget2->fn->setSize(Screen0_SliderWidget2, 50, 125);
    Screen0_SliderWidget2->fn->setScheme(Screen0_SliderWidget2, &PanelScheme);
    Screen0_SliderWidget2->fn->setBackgroundType(Screen0_SliderWidget2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_SliderWidget2->fn->setGripSize(Screen0_SliderWidget2, 20);
    Screen0_SliderWidget2->fn->setValueChangedEventCallback(Screen0_SliderWidget2, event_Screen0_SliderWidget2_OnValueChanged);
    Screen0_PanelWidget_0->fn->addChild(Screen0_PanelWidget_0, (leWidget*)Screen0_SliderWidget2);

    Screen0_StringLabel = leLabelWidget_New();
    Screen0_StringLabel->fn->setPosition(Screen0_StringLabel, 102, 229);
    Screen0_StringLabel->fn->setSize(Screen0_StringLabel, 89, 25);
    Screen0_StringLabel->fn->setScheme(Screen0_StringLabel, &PanelScheme);
    Screen0_StringLabel->fn->setString(Screen0_StringLabel, (leString*)&string_Slider);
    Screen0_PanelWidget_0->fn->addChild(Screen0_PanelWidget_0, (leWidget*)Screen0_StringLabel);

    Screen0_ValueLabel = leLabelWidget_New();
    Screen0_ValueLabel->fn->setPosition(Screen0_ValueLabel, 206, 229);
    Screen0_ValueLabel->fn->setSize(Screen0_ValueLabel, 47, 25);
    Screen0_ValueLabel->fn->setScheme(Screen0_ValueLabel, &PanelScheme);
    Screen0_PanelWidget_0->fn->addChild(Screen0_PanelWidget_0, (leWidget*)Screen0_ValueLabel);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);
    
    leFixedString_Constructor(&sliderStr, tempBuffer, 12);
    sliderStr.fn->setFont(&sliderStr, leStringTable_GetStringFont(leGetState()->stringTable,
                                                              stringID_Slider,
                                                              0)); 
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
    Screen0_PanelWidget_0 = NULL;
    Screen0_SliderWidget1 = NULL;
    Screen0_SliderWidget2 = NULL;
    Screen0_StringLabel = NULL;
    Screen0_ValueLabel = NULL;


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

