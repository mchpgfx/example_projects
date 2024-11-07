#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leDrawSurfaceWidget* Screen0_DrawSurfaceWidget_0;
leButtonWidget* Screen0_ButtonWidget_Red;
leButtonWidget* Screen0_ButtonWidget_Orange;
leButtonWidget* Screen0_ButtonWidget_Yellow;
leButtonWidget* Screen0_ButtonWidget_Green;
leButtonWidget* Screen0_ButtonWidget_Blue;
leButtonWidget* Screen0_ButtonWidget_Indigo;
leButtonWidget* Screen0_ButtonWidget_Violet;
leLabelWidget* Screen0_LabelWidget_0;
leSliderWidget* Screen0_SliderWidget_0;
leButtonWidget* Screen0_ButtonWidget_Random;
leButtonWidget* Screen0_ButtonWidget_Erase;

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
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &DarkScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_DrawSurfaceWidget_0 = leDrawSurfaceWidget_New();
    Screen0_DrawSurfaceWidget_0->fn->setPosition(Screen0_DrawSurfaceWidget_0, 20, 40);
    Screen0_DrawSurfaceWidget_0->fn->setSize(Screen0_DrawSurfaceWidget_0, 760, 400);
    Screen0_DrawSurfaceWidget_0->fn->setScheme(Screen0_DrawSurfaceWidget_0, &WhiteScheme);
    Screen0_DrawSurfaceWidget_0->fn->setBorderType(Screen0_DrawSurfaceWidget_0, LE_WIDGET_BORDER_LINE);
    Screen0_DrawSurfaceWidget_0->fn->setDrawCallback(Screen0_DrawSurfaceWidget_0, event_Screen0_DrawSurfaceWidget_0_OnDraw);
    root0->fn->addChild(root0, (leWidget*)Screen0_DrawSurfaceWidget_0);

    Screen0_ButtonWidget_Red = leButtonWidget_New();
    Screen0_ButtonWidget_Red->fn->setPosition(Screen0_ButtonWidget_Red, 20, 440);
    Screen0_ButtonWidget_Red->fn->setSize(Screen0_ButtonWidget_Red, 30, 30);
    Screen0_ButtonWidget_Red->fn->setScheme(Screen0_ButtonWidget_Red, &RedScheme);
    Screen0_ButtonWidget_Red->fn->setBorderType(Screen0_ButtonWidget_Red, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Red->fn->setPressedImage(Screen0_ButtonWidget_Red, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Red->fn->setReleasedImage(Screen0_ButtonWidget_Red, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Red->fn->setReleasedEventCallback(Screen0_ButtonWidget_Red, event_Screen0_ButtonWidget_Red_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Red);

    Screen0_ButtonWidget_Orange = leButtonWidget_New();
    Screen0_ButtonWidget_Orange->fn->setPosition(Screen0_ButtonWidget_Orange, 50, 440);
    Screen0_ButtonWidget_Orange->fn->setSize(Screen0_ButtonWidget_Orange, 30, 30);
    Screen0_ButtonWidget_Orange->fn->setScheme(Screen0_ButtonWidget_Orange, &OrangeScheme);
    Screen0_ButtonWidget_Orange->fn->setBorderType(Screen0_ButtonWidget_Orange, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Orange->fn->setPressedImage(Screen0_ButtonWidget_Orange, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Orange->fn->setReleasedImage(Screen0_ButtonWidget_Orange, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Orange->fn->setReleasedEventCallback(Screen0_ButtonWidget_Orange, event_Screen0_ButtonWidget_Orange_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Orange);

    Screen0_ButtonWidget_Yellow = leButtonWidget_New();
    Screen0_ButtonWidget_Yellow->fn->setPosition(Screen0_ButtonWidget_Yellow, 80, 440);
    Screen0_ButtonWidget_Yellow->fn->setSize(Screen0_ButtonWidget_Yellow, 30, 30);
    Screen0_ButtonWidget_Yellow->fn->setScheme(Screen0_ButtonWidget_Yellow, &YellowScheme);
    Screen0_ButtonWidget_Yellow->fn->setBorderType(Screen0_ButtonWidget_Yellow, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Yellow->fn->setPressedImage(Screen0_ButtonWidget_Yellow, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Yellow->fn->setReleasedImage(Screen0_ButtonWidget_Yellow, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Yellow->fn->setReleasedEventCallback(Screen0_ButtonWidget_Yellow, event_Screen0_ButtonWidget_Yellow_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Yellow);

    Screen0_ButtonWidget_Green = leButtonWidget_New();
    Screen0_ButtonWidget_Green->fn->setPosition(Screen0_ButtonWidget_Green, 110, 440);
    Screen0_ButtonWidget_Green->fn->setSize(Screen0_ButtonWidget_Green, 30, 30);
    Screen0_ButtonWidget_Green->fn->setScheme(Screen0_ButtonWidget_Green, &GreenScheme);
    Screen0_ButtonWidget_Green->fn->setBorderType(Screen0_ButtonWidget_Green, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Green->fn->setPressedImage(Screen0_ButtonWidget_Green, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Green->fn->setReleasedImage(Screen0_ButtonWidget_Green, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Green->fn->setReleasedEventCallback(Screen0_ButtonWidget_Green, event_Screen0_ButtonWidget_Green_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Green);

    Screen0_ButtonWidget_Blue = leButtonWidget_New();
    Screen0_ButtonWidget_Blue->fn->setPosition(Screen0_ButtonWidget_Blue, 140, 440);
    Screen0_ButtonWidget_Blue->fn->setSize(Screen0_ButtonWidget_Blue, 30, 30);
    Screen0_ButtonWidget_Blue->fn->setScheme(Screen0_ButtonWidget_Blue, &BlueScheme);
    Screen0_ButtonWidget_Blue->fn->setBorderType(Screen0_ButtonWidget_Blue, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Blue->fn->setPressedImage(Screen0_ButtonWidget_Blue, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Blue->fn->setReleasedImage(Screen0_ButtonWidget_Blue, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Blue->fn->setReleasedEventCallback(Screen0_ButtonWidget_Blue, event_Screen0_ButtonWidget_Blue_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Blue);

    Screen0_ButtonWidget_Indigo = leButtonWidget_New();
    Screen0_ButtonWidget_Indigo->fn->setPosition(Screen0_ButtonWidget_Indigo, 170, 440);
    Screen0_ButtonWidget_Indigo->fn->setSize(Screen0_ButtonWidget_Indigo, 30, 30);
    Screen0_ButtonWidget_Indigo->fn->setScheme(Screen0_ButtonWidget_Indigo, &IndigoScheme);
    Screen0_ButtonWidget_Indigo->fn->setBorderType(Screen0_ButtonWidget_Indigo, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Indigo->fn->setPressedImage(Screen0_ButtonWidget_Indigo, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Indigo->fn->setReleasedImage(Screen0_ButtonWidget_Indigo, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Indigo->fn->setReleasedEventCallback(Screen0_ButtonWidget_Indigo, event_Screen0_ButtonWidget_Indigo_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Indigo);

    Screen0_ButtonWidget_Violet = leButtonWidget_New();
    Screen0_ButtonWidget_Violet->fn->setPosition(Screen0_ButtonWidget_Violet, 200, 440);
    Screen0_ButtonWidget_Violet->fn->setSize(Screen0_ButtonWidget_Violet, 30, 30);
    Screen0_ButtonWidget_Violet->fn->setScheme(Screen0_ButtonWidget_Violet, &VioletScheme);
    Screen0_ButtonWidget_Violet->fn->setBorderType(Screen0_ButtonWidget_Violet, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_Violet->fn->setPressedImage(Screen0_ButtonWidget_Violet, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Violet->fn->setReleasedImage(Screen0_ButtonWidget_Violet, (leImage*)&ColPicker);
    Screen0_ButtonWidget_Violet->fn->setReleasedEventCallback(Screen0_ButtonWidget_Violet, event_Screen0_ButtonWidget_Violet_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Violet);

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 244, 440);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 130, 30);
    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, &DarkScheme);
    Screen0_LabelWidget_0->fn->setBackgroundType(Screen0_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_LineWidthStr);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_0);

    Screen0_SliderWidget_0 = leSliderWidget_New();
    Screen0_SliderWidget_0->fn->setPosition(Screen0_SliderWidget_0, 378, 440);
    Screen0_SliderWidget_0->fn->setSize(Screen0_SliderWidget_0, 100, 30);
    Screen0_SliderWidget_0->fn->setScheme(Screen0_SliderWidget_0, &BlueScheme);
    Screen0_SliderWidget_0->fn->setBackgroundType(Screen0_SliderWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_SliderWidget_0->fn->setBorderType(Screen0_SliderWidget_0, LE_WIDGET_BORDER_LINE);
    Screen0_SliderWidget_0->fn->setOrientation(Screen0_SliderWidget_0, LE_ORIENTATION_HORIZONTAL, LE_FALSE);
    Screen0_SliderWidget_0->fn->setMinimumValue(Screen0_SliderWidget_0, 4);
    Screen0_SliderWidget_0->fn->setMaximumValue(Screen0_SliderWidget_0, 20);
    Screen0_SliderWidget_0->fn->setValue(Screen0_SliderWidget_0, 4);
    Screen0_SliderWidget_0->fn->setGripSize(Screen0_SliderWidget_0, 14);
    Screen0_SliderWidget_0->fn->setValueChangedEventCallback(Screen0_SliderWidget_0, event_Screen0_SliderWidget_0_OnValueChanged);
    root0->fn->addChild(root0, (leWidget*)Screen0_SliderWidget_0);

    Screen0_ButtonWidget_Random = leButtonWidget_New();
    Screen0_ButtonWidget_Random->fn->setPosition(Screen0_ButtonWidget_Random, 588, 440);
    Screen0_ButtonWidget_Random->fn->setSize(Screen0_ButtonWidget_Random, 108, 30);
    Screen0_ButtonWidget_Random->fn->setScheme(Screen0_ButtonWidget_Random, &DarkScheme);
    Screen0_ButtonWidget_Random->fn->setBorderType(Screen0_ButtonWidget_Random, LE_WIDGET_BORDER_LINE);
    Screen0_ButtonWidget_Random->fn->setString(Screen0_ButtonWidget_Random, (leString*)&string_RandomStr);
    Screen0_ButtonWidget_Random->fn->setReleasedEventCallback(Screen0_ButtonWidget_Random, event_Screen0_ButtonWidget_Random_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Random);

    Screen0_ButtonWidget_Erase = leButtonWidget_New();
    Screen0_ButtonWidget_Erase->fn->setPosition(Screen0_ButtonWidget_Erase, 700, 440);
    Screen0_ButtonWidget_Erase->fn->setSize(Screen0_ButtonWidget_Erase, 80, 30);
    Screen0_ButtonWidget_Erase->fn->setScheme(Screen0_ButtonWidget_Erase, &DarkScheme);
    Screen0_ButtonWidget_Erase->fn->setBorderType(Screen0_ButtonWidget_Erase, LE_WIDGET_BORDER_LINE);
    Screen0_ButtonWidget_Erase->fn->setString(Screen0_ButtonWidget_Erase, (leString*)&string_EraseStr);
    Screen0_ButtonWidget_Erase->fn->setReleasedEventCallback(Screen0_ButtonWidget_Erase, event_Screen0_ButtonWidget_Erase_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_Erase);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

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
    Screen0_DrawSurfaceWidget_0 = NULL;
    Screen0_ButtonWidget_Red = NULL;
    Screen0_ButtonWidget_Orange = NULL;
    Screen0_ButtonWidget_Yellow = NULL;
    Screen0_ButtonWidget_Green = NULL;
    Screen0_ButtonWidget_Blue = NULL;
    Screen0_ButtonWidget_Indigo = NULL;
    Screen0_ButtonWidget_Violet = NULL;
    Screen0_LabelWidget_0 = NULL;
    Screen0_SliderWidget_0 = NULL;
    Screen0_ButtonWidget_Random = NULL;
    Screen0_ButtonWidget_Erase = NULL;


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

