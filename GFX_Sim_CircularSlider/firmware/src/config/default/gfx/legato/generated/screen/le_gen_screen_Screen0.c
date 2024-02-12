#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leImageWidget* Screen0_ImageWidget_0;
leCircularSliderWidget* Screen0_CircularSliderWidget_0;
leLabelWidget* Screen0_LabelSliderVal;

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
    root0->fn->setSize(root0, 720, 720);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 720, 720);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_ImageWidget_0 = leImageWidget_New();
    Screen0_ImageWidget_0->fn->setPosition(Screen0_ImageWidget_0, 0, 0);
    Screen0_ImageWidget_0->fn->setSize(Screen0_ImageWidget_0, 720, 720);
    Screen0_ImageWidget_0->fn->setBackgroundType(Screen0_ImageWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget_0->fn->setBorderType(Screen0_ImageWidget_0, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget_0->fn->setImage(Screen0_ImageWidget_0, (leImage*)&coolBackgroundborder);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageWidget_0);

    Screen0_CircularSliderWidget_0 = leCircularSliderWidget_New();
    Screen0_CircularSliderWidget_0->fn->setPosition(Screen0_CircularSliderWidget_0, -11, 4);
    Screen0_CircularSliderWidget_0->fn->setSize(Screen0_CircularSliderWidget_0, 743, 710);
    Screen0_CircularSliderWidget_0->fn->setScheme(Screen0_CircularSliderWidget_0, &CircularSliderScheme);
    Screen0_CircularSliderWidget_0->fn->setRadius(Screen0_CircularSliderWidget_0, 324);
    Screen0_CircularSliderWidget_0->fn->setStartAngle(Screen0_CircularSliderWidget_0, 180);
    Screen0_CircularSliderWidget_0->fn->setSpanAngle(Screen0_CircularSliderWidget_0, -180);
    Screen0_CircularSliderWidget_0->fn->setArcThickness(Screen0_CircularSliderWidget_0, OUTSIDE_CIRCLE_BORDER, 10);
    Screen0_CircularSliderWidget_0->fn->setArcVisible(Screen0_CircularSliderWidget_0, OUTSIDE_CIRCLE_BORDER, LE_FALSE);
    Screen0_CircularSliderWidget_0->fn->setArcVisible(Screen0_CircularSliderWidget_0, INSIDE_CIRCLE_BORDER, LE_FALSE);
    Screen0_CircularSliderWidget_0->fn->setArcThickness(Screen0_CircularSliderWidget_0, ACTIVE_AREA, 37);
    Screen0_CircularSliderWidget_0->fn->setArcVisible(Screen0_CircularSliderWidget_0, INACTIVE_AREA, LE_FALSE);
    Screen0_CircularSliderWidget_0->fn->setArcRadius(Screen0_CircularSliderWidget_0, CIRCLE_BUTTON, 17);
    Screen0_CircularSliderWidget_0->fn->setArcScheme(Screen0_CircularSliderWidget_0, CIRCLE_BUTTON, &SliderButtonScheme);
    Screen0_CircularSliderWidget_0->fn->setValueChangedEventCallback(Screen0_CircularSliderWidget_0, event_Screen0_CircularSliderWidget_0_OnValueChanged);
    Screen0_CircularSliderWidget_0->fn->setPressedEventCallback(Screen0_CircularSliderWidget_0, event_Screen0_CircularSliderWidget_0_OnPressed);
    Screen0_CircularSliderWidget_0->fn->setReleasedEventCallback(Screen0_CircularSliderWidget_0, event_Screen0_CircularSliderWidget_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_CircularSliderWidget_0);

    Screen0_LabelSliderVal = leLabelWidget_New();
    Screen0_LabelSliderVal->fn->setPosition(Screen0_LabelSliderVal, 266, 283);
    Screen0_LabelSliderVal->fn->setSize(Screen0_LabelSliderVal, 181, 94);
    Screen0_LabelSliderVal->fn->setScheme(Screen0_LabelSliderVal, &WhiteScheme);
    Screen0_LabelSliderVal->fn->setBackgroundType(Screen0_LabelSliderVal, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelSliderVal->fn->setHAlignment(Screen0_LabelSliderVal, LE_HALIGN_CENTER);
    Screen0_LabelSliderVal->fn->setString(Screen0_LabelSliderVal, (leString*)&string_ValueStr);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelSliderVal);

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
    Screen0_ImageWidget_0 = NULL;
    Screen0_CircularSliderWidget_0 = NULL;
    Screen0_LabelSliderVal = NULL;


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

