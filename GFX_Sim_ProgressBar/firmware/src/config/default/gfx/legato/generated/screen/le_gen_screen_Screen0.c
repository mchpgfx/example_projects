#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leProgressBarWidget* Screen0_ProgressBarWidget_0;
leSliderWidget* Screen0_SliderWidget_0;
leLabelWidget* Screen0_LabelWidget_0;
leLabelWidget* Screen0_LabelWidget_1;
leLabelWidget* Screen0_LabelWidget_2;

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
    root0->fn->setSize(root0, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 800, 480);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &ProgressBarScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_ProgressBarWidget_0 = leProgressBarWidget_New();
    Screen0_ProgressBarWidget_0->fn->setPosition(Screen0_ProgressBarWidget_0, 100, 45);
    Screen0_ProgressBarWidget_0->fn->setSize(Screen0_ProgressBarWidget_0, 600, 130);
    Screen0_ProgressBarWidget_0->fn->setScheme(Screen0_ProgressBarWidget_0, &ProgressBarScheme);
    Screen0_ProgressBarWidget_0->fn->setValue(Screen0_ProgressBarWidget_0, 50);
    Screen0_ProgressBarWidget_0->fn->setValueChangedCallback(Screen0_ProgressBarWidget_0, event_Screen0_ProgressBarWidget_0_ValueChanged);
    root0->fn->addChild(root0, (leWidget*)Screen0_ProgressBarWidget_0);

    Screen0_SliderWidget_0 = leSliderWidget_New();
    Screen0_SliderWidget_0->fn->setPosition(Screen0_SliderWidget_0, 300, 220);
    Screen0_SliderWidget_0->fn->setSize(Screen0_SliderWidget_0, 200, 90);
    Screen0_SliderWidget_0->fn->setScheme(Screen0_SliderWidget_0, &SliderScheme);
    Screen0_SliderWidget_0->fn->setBackgroundType(Screen0_SliderWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_SliderWidget_0->fn->setOrientation(Screen0_SliderWidget_0, LE_ORIENTATION_HORIZONTAL, LE_FALSE);
    Screen0_SliderWidget_0->fn->setValue(Screen0_SliderWidget_0, 50);
    Screen0_SliderWidget_0->fn->setValueChangedEventCallback(Screen0_SliderWidget_0, event_Screen0_SliderWidget_0_OnValueChanged);
    root0->fn->addChild(root0, (leWidget*)Screen0_SliderWidget_0);

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 235, 355);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 330, 81);
    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, &Label_Scheme);
    Screen0_LabelWidget_0->fn->setBackgroundType(Screen0_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_String_Label);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_0);

    Screen0_LabelWidget_1 = leLabelWidget_New();
    Screen0_LabelWidget_1->fn->setPosition(Screen0_LabelWidget_1, 332, 87);
    Screen0_LabelWidget_1->fn->setSize(Screen0_LabelWidget_1, 84, 40);
    Screen0_LabelWidget_1->fn->setScheme(Screen0_LabelWidget_1, &ProgressBarScheme);
    Screen0_LabelWidget_1->fn->setBackgroundType(Screen0_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_1->fn->setHAlignment(Screen0_LabelWidget_1, LE_HALIGN_RIGHT);
    Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_String_Label1);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_1);

    Screen0_LabelWidget_2 = leLabelWidget_New();
    Screen0_LabelWidget_2->fn->setPosition(Screen0_LabelWidget_2, 410, 87);
    Screen0_LabelWidget_2->fn->setSize(Screen0_LabelWidget_2, 37, 40);
    Screen0_LabelWidget_2->fn->setScheme(Screen0_LabelWidget_2, &ProgressBarScheme);
    Screen0_LabelWidget_2->fn->setBackgroundType(Screen0_LabelWidget_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_2->fn->setHAlignment(Screen0_LabelWidget_2, LE_HALIGN_CENTER);
    Screen0_LabelWidget_2->fn->setString(Screen0_LabelWidget_2, (leString*)&string_String_Label2);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_2);

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
    Screen0_ProgressBarWidget_0 = NULL;
    Screen0_SliderWidget_0 = NULL;
    Screen0_LabelWidget_0 = NULL;
    Screen0_LabelWidget_1 = NULL;
    Screen0_LabelWidget_2 = NULL;


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

