#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leBarGraphWidget* Screen0_BarGraphWidget_0;
leCheckBoxWidget* Screen0_CheckBoxWidget_0;
leCheckBoxWidget* Screen0_CheckBoxWidget_1;

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

    Screen0_BarGraphWidget_0 = leBarGraphWidget_New();
    Screen0_BarGraphWidget_0->fn->setPosition(Screen0_BarGraphWidget_0, 384, 85);
    Screen0_BarGraphWidget_0->fn->setSize(Screen0_BarGraphWidget_0, 350, 303);
    Screen0_BarGraphWidget_0->fn->setBackgroundType(Screen0_BarGraphWidget_0, LE_WIDGET_BACKGROUND_FILL);
    Screen0_BarGraphWidget_0->fn->setBorderType(Screen0_BarGraphWidget_0, LE_WIDGET_BORDER_LINE);
    Screen0_BarGraphWidget_0->fn->setStacked(Screen0_BarGraphWidget_0, LE_TRUE);
    Screen0_BarGraphWidget_0->fn->setTicksLabelFont(Screen0_BarGraphWidget_0, (leFont*)&Font0);
    Screen0_BarGraphWidget_0->fn->setCategoryAxisTicksPosition(Screen0_BarGraphWidget_0, BAR_GRAPH_TICK_OUT);
    Screen0_BarGraphWidget_0->fn->addCategory(Screen0_BarGraphWidget_0, NULL);    Screen0_BarGraphWidget_0->fn->setCategoryString(Screen0_BarGraphWidget_0, 0, (leString*)&string_apple);
    Screen0_BarGraphWidget_0->fn->addCategory(Screen0_BarGraphWidget_0, NULL);    Screen0_BarGraphWidget_0->fn->setCategoryString(Screen0_BarGraphWidget_0, 1, (leString*)&string_banana);
    Screen0_BarGraphWidget_0->fn->addCategory(Screen0_BarGraphWidget_0, NULL);    Screen0_BarGraphWidget_0->fn->setCategoryString(Screen0_BarGraphWidget_0, 2, (leString*)&string_cherry);
    Screen0_BarGraphWidget_0->fn->addSeries(Screen0_BarGraphWidget_0, NULL);
    Screen0_BarGraphWidget_0->fn->setSeriesScheme(Screen0_BarGraphWidget_0, 0, &Scheme);
    Screen0_BarGraphWidget_0->fn->addDataToSeries(Screen0_BarGraphWidget_0, 0, 54, NULL);
    Screen0_BarGraphWidget_0->fn->addDataToSeries(Screen0_BarGraphWidget_0, 0, 34, NULL);
    Screen0_BarGraphWidget_0->fn->addDataToSeries(Screen0_BarGraphWidget_0, 0, 65, NULL);
    root0->fn->addChild(root0, (leWidget*)Screen0_BarGraphWidget_0);

    Screen0_CheckBoxWidget_0 = leCheckBoxWidget_New();
    Screen0_CheckBoxWidget_0->fn->setPosition(Screen0_CheckBoxWidget_0, 72, 187);
    Screen0_CheckBoxWidget_0->fn->setSize(Screen0_CheckBoxWidget_0, 244, 35);
    Screen0_CheckBoxWidget_0->fn->setBorderType(Screen0_CheckBoxWidget_0, LE_WIDGET_BORDER_BEVEL);
    Screen0_CheckBoxWidget_0->fn->setString(Screen0_CheckBoxWidget_0, (leString*)&string_Pounds);
    Screen0_CheckBoxWidget_0->fn->setCheckedEventCallback(Screen0_CheckBoxWidget_0, event_Screen0_CheckBoxWidget_0_OnChecked);
    Screen0_CheckBoxWidget_0->fn->setUncheckedEventCallback(Screen0_CheckBoxWidget_0, event_Screen0_CheckBoxWidget_0_OnUnchecked);
    root0->fn->addChild(root0, (leWidget*)Screen0_CheckBoxWidget_0);

    Screen0_CheckBoxWidget_1 = leCheckBoxWidget_New();
    Screen0_CheckBoxWidget_1->fn->setPosition(Screen0_CheckBoxWidget_1, 72, 266);
    Screen0_CheckBoxWidget_1->fn->setSize(Screen0_CheckBoxWidget_1, 244, 35);
    Screen0_CheckBoxWidget_1->fn->setBorderType(Screen0_CheckBoxWidget_1, LE_WIDGET_BORDER_BEVEL);
    Screen0_CheckBoxWidget_1->fn->setString(Screen0_CheckBoxWidget_1, (leString*)&string_Kilograms);
    Screen0_CheckBoxWidget_1->fn->setCheckedEventCallback(Screen0_CheckBoxWidget_1, event_Screen0_CheckBoxWidget_1_OnChecked);
    Screen0_CheckBoxWidget_1->fn->setUncheckedEventCallback(Screen0_CheckBoxWidget_1, event_Screen0_CheckBoxWidget_1_OnUnchecked);
    root0->fn->addChild(root0, (leWidget*)Screen0_CheckBoxWidget_1);

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
    Screen0_BarGraphWidget_0 = NULL;
    Screen0_CheckBoxWidget_0 = NULL;
    Screen0_CheckBoxWidget_1 = NULL;


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

