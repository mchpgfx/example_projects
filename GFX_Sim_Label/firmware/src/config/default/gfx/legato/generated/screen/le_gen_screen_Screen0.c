#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leLabelWidget* Screen0_LabelWidget_0;
leImageWidget* Screen0_ImageWidget_0;
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

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 100, 200);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 225, 80);
    Screen0_LabelWidget_0->fn->setBorderType(Screen0_LabelWidget_0, LE_WIDGET_BORDER_BEVEL);
    Screen0_LabelWidget_0->fn->setHAlignment(Screen0_LabelWidget_0, LE_HALIGN_CENTER);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_No_scheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_0);

    Screen0_ImageWidget_0 = leImageWidget_New();
    Screen0_ImageWidget_0->fn->setPosition(Screen0_ImageWidget_0, 475, 200);
    Screen0_ImageWidget_0->fn->setSize(Screen0_ImageWidget_0, 225, 85);
    Screen0_ImageWidget_0->fn->setBorderType(Screen0_ImageWidget_0, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget_0->fn->setImage(Screen0_ImageWidget_0, (leImage*)&mchp_large);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageWidget_0);

    Screen0_LabelWidget_1 = leLabelWidget_New();
    Screen0_LabelWidget_1->fn->setPosition(Screen0_LabelWidget_1, 474, 200);
    Screen0_LabelWidget_1->fn->setSize(Screen0_LabelWidget_1, 225, 85);
    Screen0_LabelWidget_1->fn->setAlphaEnabled(Screen0_LabelWidget_1, LE_TRUE);
    Screen0_LabelWidget_1->fn->setAlphaAmount(Screen0_LabelWidget_1, 250);
    Screen0_LabelWidget_1->fn->setBorderType(Screen0_LabelWidget_1, LE_WIDGET_BORDER_BEVEL);
    Screen0_LabelWidget_1->fn->setHAlignment(Screen0_LabelWidget_1, LE_HALIGN_CENTER);
    Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_AlphaBlending);
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
    Screen0_LabelWidget_0 = NULL;
    Screen0_ImageWidget_0 = NULL;
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

