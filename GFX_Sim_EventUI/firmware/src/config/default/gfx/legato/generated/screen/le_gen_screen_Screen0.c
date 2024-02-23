#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_PanelWidget1;
leButtonWidget* Screen0_ButtonWidget1;
leLabelWidget* Screen0_LabelWidget0;
leLabelWidget* Screen0_LabelWidget1;
leLabelWidget* Screen0_LabelWidget2;
leImageWidget* Screen0_ImageWidget0;
leImageWidget* Screen0_ImageWidget1;

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

    Screen0_PanelWidget1 = leWidget_New();
    Screen0_PanelWidget1->fn->setPosition(Screen0_PanelWidget1, 0, 0);
    Screen0_PanelWidget1->fn->setSize(Screen0_PanelWidget1, 800, 480);
    Screen0_PanelWidget1->fn->setScheme(Screen0_PanelWidget1, &WhiteScheme);
    Screen0_PanelWidget1->fn->setBorderType(Screen0_PanelWidget1, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen0_PanelWidget1);

    Screen0_ButtonWidget1 = leButtonWidget_New();
    Screen0_ButtonWidget1->fn->setPosition(Screen0_ButtonWidget1, 290, 385);
    Screen0_ButtonWidget1->fn->setSize(Screen0_ButtonWidget1, 240, 55);
    Screen0_ButtonWidget1->fn->setScheme(Screen0_ButtonWidget1, &MyLabelScheme);
    Screen0_ButtonWidget1->fn->setBorderType(Screen0_ButtonWidget1, LE_WIDGET_BORDER_LINE);
    Screen0_ButtonWidget1->fn->setString(Screen0_ButtonWidget1, (leString*)&string_ChangeScreenString);
    Screen0_ButtonWidget1->fn->setPressedEventCallback(Screen0_ButtonWidget1, event_Screen0_ButtonWidget1_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget1);

    Screen0_LabelWidget0 = leLabelWidget_New();
    Screen0_LabelWidget0->fn->setPosition(Screen0_LabelWidget0, 325, 43);
    Screen0_LabelWidget0->fn->setSize(Screen0_LabelWidget0, 181, 50);
    Screen0_LabelWidget0->fn->setScheme(Screen0_LabelWidget0, &RedScheme);
    Screen0_LabelWidget0->fn->setBackgroundType(Screen0_LabelWidget0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget0->fn->setString(Screen0_LabelWidget0, (leString*)&string_Fast);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget0);

    Screen0_LabelWidget1 = leLabelWidget_New();
    Screen0_LabelWidget1->fn->setPosition(Screen0_LabelWidget1, 443, 101);
    Screen0_LabelWidget1->fn->setSize(Screen0_LabelWidget1, 139, 50);
    Screen0_LabelWidget1->fn->setScheme(Screen0_LabelWidget1, &GreenScheme);
    Screen0_LabelWidget1->fn->setBackgroundType(Screen0_LabelWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget1->fn->setString(Screen0_LabelWidget1, (leString*)&string_Easy);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget1);

    Screen0_LabelWidget2 = leLabelWidget_New();
    Screen0_LabelWidget2->fn->setPosition(Screen0_LabelWidget2, 550, 162);
    Screen0_LabelWidget2->fn->setSize(Screen0_LabelWidget2, 250, 50);
    Screen0_LabelWidget2->fn->setScheme(Screen0_LabelWidget2, &BlueScheme);
    Screen0_LabelWidget2->fn->setBackgroundType(Screen0_LabelWidget2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget2->fn->setString(Screen0_LabelWidget2, (leString*)&string_Smart);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget2);

    Screen0_ImageWidget0 = leImageWidget_New();
    Screen0_ImageWidget0->fn->setPosition(Screen0_ImageWidget0, 5, 12);
    Screen0_ImageWidget0->fn->setSize(Screen0_ImageWidget0, 166, 40);
    Screen0_ImageWidget0->fn->setBackgroundType(Screen0_ImageWidget0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget0->fn->setBorderType(Screen0_ImageWidget0, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget0->fn->setImage(Screen0_ImageWidget0, (leImage*)&mchpLogo_light);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageWidget0);

    Screen0_ImageWidget1 = leImageWidget_New();
    Screen0_ImageWidget1->fn->setPosition(Screen0_ImageWidget1, 11, 79);
    Screen0_ImageWidget1->fn->setSize(Screen0_ImageWidget1, 320, 300);
    Screen0_ImageWidget1->fn->setScheme(Screen0_ImageWidget1, &WhiteScheme);
    Screen0_ImageWidget1->fn->setBackgroundType(Screen0_ImageWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget1->fn->setBorderType(Screen0_ImageWidget1, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget1->fn->setImage(Screen0_ImageWidget1, (leImage*)&MHGS_logo_WVGA);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageWidget1);

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

    Screen0_PanelWidget1 = NULL;
    Screen0_ButtonWidget1 = NULL;
    Screen0_LabelWidget0 = NULL;
    Screen0_LabelWidget1 = NULL;
    Screen0_LabelWidget2 = NULL;
    Screen0_ImageWidget0 = NULL;
    Screen0_ImageWidget1 = NULL;


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

