#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leLineGraphWidget* Screen0_LineGraphWidget_0;
leButtonWidget* Screen0_ButtonWidget_0;
leButtonWidget* Screen0_ButtonWidget_1;

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

    Screen0_LineGraphWidget_0 = leLineGraphWidget_New();
    Screen0_LineGraphWidget_0->fn->setPosition(Screen0_LineGraphWidget_0, 100, 100);
    Screen0_LineGraphWidget_0->fn->setSize(Screen0_LineGraphWidget_0, 600, 350);
    Screen0_LineGraphWidget_0->fn->setScheme(Screen0_LineGraphWidget_0, &GraphScheme);
    Screen0_LineGraphWidget_0->fn->setBackgroundType(Screen0_LineGraphWidget_0, LE_WIDGET_BACKGROUND_FILL);
    Screen0_LineGraphWidget_0->fn->setTickLength(Screen0_LineGraphWidget_0, 20);
    Screen0_LineGraphWidget_0->fn->setFillSeriesArea(Screen0_LineGraphWidget_0, LE_TRUE);
    Screen0_LineGraphWidget_0->fn->setMinValue(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, -30);
    Screen0_LineGraphWidget_0->fn->setMaxValue(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, 30);
    Screen0_LineGraphWidget_0->fn->setValueAxisTickInterval(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, 5);
    Screen0_LineGraphWidget_0->fn->setValueAxisTicksVisible(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, LE_FALSE);
    Screen0_LineGraphWidget_0->fn->setValueAxisSubticksVisible(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, LE_FALSE);
    Screen0_LineGraphWidget_0->fn->setValueAxisSubticksPosition(Screen0_LineGraphWidget_0, LINE_GRAPH_AXIS_0, LINE_GRAPH_TICK_OUT);
    Screen0_LineGraphWidget_0->fn->setTicksLabelFont(Screen0_LineGraphWidget_0, (leFont*)&Font0);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 0, (leString*)&string_Timeline1);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 1, (leString*)&string_Timeline2);
    Screen0_LineGraphWidget_0->fn->addCategory(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setCategoryString(Screen0_LineGraphWidget_0, 2, (leString*)&string_Timeline3);
    Screen0_LineGraphWidget_0->fn->addSeries(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 10);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 15);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 0, 5);
    Screen0_LineGraphWidget_0->fn->addSeries(Screen0_LineGraphWidget_0);
    Screen0_LineGraphWidget_0->fn->setSeriesScheme(Screen0_LineGraphWidget_0, 1, &RedScheme);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 1, 5);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 1, 5);
    Screen0_LineGraphWidget_0->fn->addDataToSeries(Screen0_LineGraphWidget_0, 1, 20);
    root0->fn->addChild(root0, (leWidget*)Screen0_LineGraphWidget_0);

    Screen0_ButtonWidget_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0->fn->setPosition(Screen0_ButtonWidget_0, 100, 40);
    Screen0_ButtonWidget_0->fn->setSize(Screen0_ButtonWidget_0, 250, 30);
    Screen0_ButtonWidget_0->fn->setString(Screen0_ButtonWidget_0, (leString*)&string_GraphGenerate);
    Screen0_ButtonWidget_0->fn->setReleasedEventCallback(Screen0_ButtonWidget_0, event_Screen0_ButtonWidget_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0);

    Screen0_ButtonWidget_1 = leButtonWidget_New();
    Screen0_ButtonWidget_1->fn->setPosition(Screen0_ButtonWidget_1, 450, 40);
    Screen0_ButtonWidget_1->fn->setSize(Screen0_ButtonWidget_1, 250, 30);
    Screen0_ButtonWidget_1->fn->setString(Screen0_ButtonWidget_1, (leString*)&string_GraphStatic);
    Screen0_ButtonWidget_1->fn->setReleasedEventCallback(Screen0_ButtonWidget_1, event_Screen0_ButtonWidget_1_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_1);

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
    Screen0_LineGraphWidget_0 = NULL;
    Screen0_ButtonWidget_0 = NULL;
    Screen0_ButtonWidget_1 = NULL;


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

