#include "gfx/legato/generated/screen/le_gen_screen_Screen2.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen2_Panel_0;
leLabelWidget* Screen2_LabelWidget_0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen2(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen2(void)
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

    Screen2_Panel_0 = leWidget_New();
    Screen2_Panel_0->fn->setPosition(Screen2_Panel_0, 0, 0);
    Screen2_Panel_0->fn->setSize(Screen2_Panel_0, 480, 272);
    Screen2_Panel_0->fn->setScheme(Screen2_Panel_0, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)Screen2_Panel_0);

    Screen2_LabelWidget_0 = leLabelWidget_New();
    Screen2_LabelWidget_0->fn->setPosition(Screen2_LabelWidget_0, 179, 112);
    Screen2_LabelWidget_0->fn->setSize(Screen2_LabelWidget_0, 130, 45);
    Screen2_LabelWidget_0->fn->setBackgroundType(Screen2_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen2_LabelWidget_0->fn->setHAlignment(Screen2_LabelWidget_0, LE_HALIGN_CENTER);
    Screen2_LabelWidget_0->fn->setString(Screen2_LabelWidget_0, (leString*)&string_strScreen2);
    root0->fn->addChild(root0, (leWidget*)Screen2_LabelWidget_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Screen2_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen2(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Screen2(void)
{
    Screen2_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen2_Panel_0 = NULL;
    Screen2_LabelWidget_0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen2(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen2(uint32_t lyrIdx)
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

