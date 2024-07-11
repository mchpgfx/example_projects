#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leCheckBoxWidget* Screen0_CheckBoxWidget_0;
leCheckBoxWidget* Screen0_CheckBoxWidget_1;
leCheckBoxWidget* Screen0_CheckBoxWidget_2;
leImageWidget* Screen0_ImageWidget_0;

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

    Screen0_CheckBoxWidget_0 = leCheckBoxWidget_New();
    Screen0_CheckBoxWidget_0->fn->setPosition(Screen0_CheckBoxWidget_0, 200, 85);
    Screen0_CheckBoxWidget_0->fn->setSize(Screen0_CheckBoxWidget_0, 120, 20);
    Screen0_CheckBoxWidget_0->fn->setBorderType(Screen0_CheckBoxWidget_0, LE_WIDGET_BORDER_BEVEL);
    Screen0_CheckBoxWidget_0->fn->setString(Screen0_CheckBoxWidget_0, (leString*)&string_String_1);
    Screen0_CheckBoxWidget_0->fn->setCheckedEventCallback(Screen0_CheckBoxWidget_0, event_Screen0_CheckBoxWidget_0_OnChecked);
    Screen0_CheckBoxWidget_0->fn->setUncheckedEventCallback(Screen0_CheckBoxWidget_0, event_Screen0_CheckBoxWidget_0_OnUnchecked);
    root0->fn->addChild(root0, (leWidget*)Screen0_CheckBoxWidget_0);

    Screen0_CheckBoxWidget_1 = leCheckBoxWidget_New();
    Screen0_CheckBoxWidget_1->fn->setPosition(Screen0_CheckBoxWidget_1, 200, 115);
    Screen0_CheckBoxWidget_1->fn->setSize(Screen0_CheckBoxWidget_1, 120, 20);
    Screen0_CheckBoxWidget_1->fn->setBorderType(Screen0_CheckBoxWidget_1, LE_WIDGET_BORDER_BEVEL);
    Screen0_CheckBoxWidget_1->fn->setString(Screen0_CheckBoxWidget_1, (leString*)&string_String_2);
    Screen0_CheckBoxWidget_1->fn->setCheckedEventCallback(Screen0_CheckBoxWidget_1, event_Screen0_CheckBoxWidget_1_OnChecked);
    Screen0_CheckBoxWidget_1->fn->setUncheckedEventCallback(Screen0_CheckBoxWidget_1, event_Screen0_CheckBoxWidget_1_OnUnchecked);
    root0->fn->addChild(root0, (leWidget*)Screen0_CheckBoxWidget_1);

    Screen0_CheckBoxWidget_2 = leCheckBoxWidget_New();
    Screen0_CheckBoxWidget_2->fn->setPosition(Screen0_CheckBoxWidget_2, 200, 150);
    Screen0_CheckBoxWidget_2->fn->setSize(Screen0_CheckBoxWidget_2, 120, 20);
    Screen0_CheckBoxWidget_2->fn->setBorderType(Screen0_CheckBoxWidget_2, LE_WIDGET_BORDER_BEVEL);
    Screen0_CheckBoxWidget_2->fn->setString(Screen0_CheckBoxWidget_2, (leString*)&string_String_3);
    Screen0_CheckBoxWidget_2->fn->setCheckedEventCallback(Screen0_CheckBoxWidget_2, event_Screen0_CheckBoxWidget_2_OnChecked);
    Screen0_CheckBoxWidget_2->fn->setUncheckedEventCallback(Screen0_CheckBoxWidget_2, event_Screen0_CheckBoxWidget_2_OnUnchecked);
    root0->fn->addChild(root0, (leWidget*)Screen0_CheckBoxWidget_2);

    Screen0_ImageWidget_0 = leImageWidget_New();
    Screen0_ImageWidget_0->fn->setPosition(Screen0_ImageWidget_0, 391, 84);
    Screen0_ImageWidget_0->fn->setSize(Screen0_ImageWidget_0, 200, 180);
    Screen0_ImageWidget_0->fn->setBackgroundType(Screen0_ImageWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget_0->fn->setBorderType(Screen0_ImageWidget_0, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageWidget_0);

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

    Screen0_BackgroundPanel = NULL;
    Screen0_CheckBoxWidget_0 = NULL;
    Screen0_CheckBoxWidget_1 = NULL;
    Screen0_CheckBoxWidget_2 = NULL;
    Screen0_ImageWidget_0 = NULL;


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

