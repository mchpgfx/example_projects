#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leWidget* Screen0_PanelWidget_0;
leButtonWidget* Screen0_ButtonWidget_0;
leButtonWidget* Screen0_ButtonWidget_0_0;
leImageSequenceWidget* Screen0_ImageSequenceWidget_0_0;
leImageSequenceWidget* Screen0_ImageSequenceWidget_0_1;
leImageSequenceWidget* Screen0_ImageSequenceWidget_0_2;
leWidget* Screen0_PanelWidget_0_0;
leImageSequenceWidget* Screen0_ImageSequenceWidget_1_0;
leImageSequenceWidget* Screen0_ImageSequenceWidget_1_1;
leImageSequenceWidget* Screen0_ImageSequenceWidget_1_2;
leLabelWidget* Screen0_LabelWidget_0;
leLabelWidget* Screen0_LabelWidget_0_1;
leButtonWidget* Screen0_ButtonWidget_0_1;
leButtonWidget* Screen0_ButtonWidget_0_1_0;
leImageSequenceWidget* Screen0_ImageSequenceWidget_0;

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

    Screen0_PanelWidget_0 = leWidget_New();
    Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, 51, 30);
    Screen0_PanelWidget_0->fn->setSize(Screen0_PanelWidget_0, 505, 97);
    Screen0_PanelWidget_0->fn->setScheme(Screen0_PanelWidget_0, &darkScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_PanelWidget_0);

    Screen0_ButtonWidget_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0->fn->setPosition(Screen0_ButtonWidget_0, 330, 138);
    Screen0_ButtonWidget_0->fn->setSize(Screen0_ButtonWidget_0, 65, 65);
    Screen0_ButtonWidget_0->fn->setPressedImage(Screen0_ButtonWidget_0, (leImage*)&plus1);
    Screen0_ButtonWidget_0->fn->setReleasedImage(Screen0_ButtonWidget_0, (leImage*)&Plus);
    Screen0_ButtonWidget_0->fn->setReleasedEventCallback(Screen0_ButtonWidget_0, event_Screen0_ButtonWidget_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0);

    Screen0_ButtonWidget_0_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0_0->fn->setPosition(Screen0_ButtonWidget_0_0, 206, 138);
    Screen0_ButtonWidget_0_0->fn->setSize(Screen0_ButtonWidget_0_0, 65, 65);
    Screen0_ButtonWidget_0_0->fn->setPressedImage(Screen0_ButtonWidget_0_0, (leImage*)&minus1);
    Screen0_ButtonWidget_0_0->fn->setReleasedImage(Screen0_ButtonWidget_0_0, (leImage*)&Minus);
    Screen0_ButtonWidget_0_0->fn->setReleasedEventCallback(Screen0_ButtonWidget_0_0, event_Screen0_ButtonWidget_0_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0_0);

    Screen0_ImageSequenceWidget_0_0 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_0_0->fn->setPosition(Screen0_ImageSequenceWidget_0_0, 421, 55);
    Screen0_ImageSequenceWidget_0_0->fn->setSize(Screen0_ImageSequenceWidget_0_0, 79, 47);
    Screen0_ImageSequenceWidget_0_0->fn->setBackgroundType(Screen0_ImageSequenceWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageSequenceWidget_0_0->fn->setImageCount(Screen0_ImageSequenceWidget_0_0, 5);
    Screen0_ImageSequenceWidget_0_0->fn->setImage(Screen0_ImageSequenceWidget_0_0, 0, &ImageBatt0);
    Screen0_ImageSequenceWidget_0_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0_0, 0, 1000);
    Screen0_ImageSequenceWidget_0_0->fn->setImage(Screen0_ImageSequenceWidget_0_0, 1, &ImageBatt1);
    Screen0_ImageSequenceWidget_0_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0_0, 1, 1000);
    Screen0_ImageSequenceWidget_0_0->fn->setImage(Screen0_ImageSequenceWidget_0_0, 2, &ImageBatt2);
    Screen0_ImageSequenceWidget_0_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0_0, 2, 1000);
    Screen0_ImageSequenceWidget_0_0->fn->setImage(Screen0_ImageSequenceWidget_0_0, 3, &ImageBatt3);
    Screen0_ImageSequenceWidget_0_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0_0, 3, 1000);
    Screen0_ImageSequenceWidget_0_0->fn->setImage(Screen0_ImageSequenceWidget_0_0, 4, &ImageBatt4);
    Screen0_ImageSequenceWidget_0_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0_0, 4, 1000);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageSequenceWidget_0_0);

    Screen0_ImageSequenceWidget_0_1 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_0_1->fn->setPosition(Screen0_ImageSequenceWidget_0_1, 131, 49);
    Screen0_ImageSequenceWidget_0_1->fn->setSize(Screen0_ImageSequenceWidget_0_1, 82, 56);
    Screen0_ImageSequenceWidget_0_1->fn->setBackgroundType(Screen0_ImageSequenceWidget_0_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageSequenceWidget_0_1->fn->setImageCount(Screen0_ImageSequenceWidget_0_1, 5);
    Screen0_ImageSequenceWidget_0_1->fn->setImage(Screen0_ImageSequenceWidget_0_1, 0, &ImageSig0);
    Screen0_ImageSequenceWidget_0_1->fn->setImageDelay(Screen0_ImageSequenceWidget_0_1, 0, 1000);
    Screen0_ImageSequenceWidget_0_1->fn->setImage(Screen0_ImageSequenceWidget_0_1, 1, &ImageSig1);
    Screen0_ImageSequenceWidget_0_1->fn->setImageDelay(Screen0_ImageSequenceWidget_0_1, 1, 1000);
    Screen0_ImageSequenceWidget_0_1->fn->setImage(Screen0_ImageSequenceWidget_0_1, 2, &ImageSig2);
    Screen0_ImageSequenceWidget_0_1->fn->setImageDelay(Screen0_ImageSequenceWidget_0_1, 2, 1000);
    Screen0_ImageSequenceWidget_0_1->fn->setImage(Screen0_ImageSequenceWidget_0_1, 3, &ImageSig3);
    Screen0_ImageSequenceWidget_0_1->fn->setImageDelay(Screen0_ImageSequenceWidget_0_1, 3, 1000);
    Screen0_ImageSequenceWidget_0_1->fn->setImage(Screen0_ImageSequenceWidget_0_1, 4, &ImageSig4);
    Screen0_ImageSequenceWidget_0_1->fn->setImageDelay(Screen0_ImageSequenceWidget_0_1, 4, 1000);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageSequenceWidget_0_1);

    Screen0_ImageSequenceWidget_0_2 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_0_2->fn->setPosition(Screen0_ImageSequenceWidget_0_2, 270, 51);
    Screen0_ImageSequenceWidget_0_2->fn->setSize(Screen0_ImageSequenceWidget_0_2, 82, 56);
    Screen0_ImageSequenceWidget_0_2->fn->setBackgroundType(Screen0_ImageSequenceWidget_0_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageSequenceWidget_0_2->fn->setImageCount(Screen0_ImageSequenceWidget_0_2, 5);
    Screen0_ImageSequenceWidget_0_2->fn->setImage(Screen0_ImageSequenceWidget_0_2, 0, &ImageWi0);
    Screen0_ImageSequenceWidget_0_2->fn->setImageDelay(Screen0_ImageSequenceWidget_0_2, 0, 1000);
    Screen0_ImageSequenceWidget_0_2->fn->setImage(Screen0_ImageSequenceWidget_0_2, 1, &ImageWi1);
    Screen0_ImageSequenceWidget_0_2->fn->setImageDelay(Screen0_ImageSequenceWidget_0_2, 1, 1000);
    Screen0_ImageSequenceWidget_0_2->fn->setImage(Screen0_ImageSequenceWidget_0_2, 2, &ImageWi2);
    Screen0_ImageSequenceWidget_0_2->fn->setImageDelay(Screen0_ImageSequenceWidget_0_2, 2, 1000);
    Screen0_ImageSequenceWidget_0_2->fn->setImage(Screen0_ImageSequenceWidget_0_2, 3, &ImageWi3);
    Screen0_ImageSequenceWidget_0_2->fn->setImageDelay(Screen0_ImageSequenceWidget_0_2, 3, 1000);
    Screen0_ImageSequenceWidget_0_2->fn->setImage(Screen0_ImageSequenceWidget_0_2, 4, &ImageWi4);
    Screen0_ImageSequenceWidget_0_2->fn->setImageDelay(Screen0_ImageSequenceWidget_0_2, 4, 1000);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageSequenceWidget_0_2);

    Screen0_PanelWidget_0_0 = leWidget_New();
    Screen0_PanelWidget_0_0->fn->setPosition(Screen0_PanelWidget_0_0, 56, 276);
    Screen0_PanelWidget_0_0->fn->setSize(Screen0_PanelWidget_0_0, 505, 97);
    Screen0_PanelWidget_0_0->fn->setScheme(Screen0_PanelWidget_0_0, &darkScheme);
    Screen0_PanelWidget_0_0->fn->setHAlignment(Screen0_PanelWidget_0_0, LE_HALIGN_LEFT);
    root0->fn->addChild(root0, (leWidget*)Screen0_PanelWidget_0_0);

    Screen0_ImageSequenceWidget_1_0 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_1_0->fn->setPosition(Screen0_ImageSequenceWidget_1_0, 138, 292);
    Screen0_ImageSequenceWidget_1_0->fn->setSize(Screen0_ImageSequenceWidget_1_0, 82, 56);
    Screen0_ImageSequenceWidget_1_0->fn->setEnabled(Screen0_ImageSequenceWidget_1_0, LE_FALSE);
    Screen0_ImageSequenceWidget_1_0->fn->setBackgroundType(Screen0_ImageSequenceWidget_1_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageSequenceWidget_1_0->fn->setHAlignment(Screen0_ImageSequenceWidget_1_0, LE_HALIGN_LEFT);
    Screen0_ImageSequenceWidget_1_0->fn->setRepeat(Screen0_ImageSequenceWidget_1_0, LE_TRUE);
    Screen0_ImageSequenceWidget_1_0->fn->setImageCount(Screen0_ImageSequenceWidget_1_0, 5);
    Screen0_ImageSequenceWidget_1_0->fn->setImage(Screen0_ImageSequenceWidget_1_0, 0, &ImageSig0);
    Screen0_ImageSequenceWidget_1_0->fn->setImageDelay(Screen0_ImageSequenceWidget_1_0, 0, 1000);
    Screen0_ImageSequenceWidget_1_0->fn->setImage(Screen0_ImageSequenceWidget_1_0, 1, &ImageSig1);
    Screen0_ImageSequenceWidget_1_0->fn->setImageDelay(Screen0_ImageSequenceWidget_1_0, 1, 1000);
    Screen0_ImageSequenceWidget_1_0->fn->setImage(Screen0_ImageSequenceWidget_1_0, 2, &ImageSig2);
    Screen0_ImageSequenceWidget_1_0->fn->setImageDelay(Screen0_ImageSequenceWidget_1_0, 2, 1000);
    Screen0_ImageSequenceWidget_1_0->fn->setImage(Screen0_ImageSequenceWidget_1_0, 3, &ImageSig3);
    Screen0_ImageSequenceWidget_1_0->fn->setImageDelay(Screen0_ImageSequenceWidget_1_0, 3, 1000);
    Screen0_ImageSequenceWidget_1_0->fn->setImage(Screen0_ImageSequenceWidget_1_0, 4, &ImageSig4);
    Screen0_ImageSequenceWidget_1_0->fn->setImageDelay(Screen0_ImageSequenceWidget_1_0, 4, 1000);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageSequenceWidget_1_0);

    Screen0_ImageSequenceWidget_1_1 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_1_1->fn->setPosition(Screen0_ImageSequenceWidget_1_1, 277, 294);
    Screen0_ImageSequenceWidget_1_1->fn->setSize(Screen0_ImageSequenceWidget_1_1, 82, 56);
    Screen0_ImageSequenceWidget_1_1->fn->setEnabled(Screen0_ImageSequenceWidget_1_1, LE_FALSE);
    Screen0_ImageSequenceWidget_1_1->fn->setBackgroundType(Screen0_ImageSequenceWidget_1_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageSequenceWidget_1_1->fn->setHAlignment(Screen0_ImageSequenceWidget_1_1, LE_HALIGN_LEFT);
    Screen0_ImageSequenceWidget_1_1->fn->setRepeat(Screen0_ImageSequenceWidget_1_1, LE_TRUE);
    Screen0_ImageSequenceWidget_1_1->fn->setImageCount(Screen0_ImageSequenceWidget_1_1, 5);
    Screen0_ImageSequenceWidget_1_1->fn->setImage(Screen0_ImageSequenceWidget_1_1, 0, &ImageWi0);
    Screen0_ImageSequenceWidget_1_1->fn->setImageDelay(Screen0_ImageSequenceWidget_1_1, 0, 1000);
    Screen0_ImageSequenceWidget_1_1->fn->setImage(Screen0_ImageSequenceWidget_1_1, 1, &ImageWi1);
    Screen0_ImageSequenceWidget_1_1->fn->setImageDelay(Screen0_ImageSequenceWidget_1_1, 1, 1000);
    Screen0_ImageSequenceWidget_1_1->fn->setImage(Screen0_ImageSequenceWidget_1_1, 2, &ImageWi2);
    Screen0_ImageSequenceWidget_1_1->fn->setImageDelay(Screen0_ImageSequenceWidget_1_1, 2, 1000);
    Screen0_ImageSequenceWidget_1_1->fn->setImage(Screen0_ImageSequenceWidget_1_1, 3, &ImageWi3);
    Screen0_ImageSequenceWidget_1_1->fn->setImageDelay(Screen0_ImageSequenceWidget_1_1, 3, 1000);
    Screen0_ImageSequenceWidget_1_1->fn->setImage(Screen0_ImageSequenceWidget_1_1, 4, &ImageWi4);
    Screen0_ImageSequenceWidget_1_1->fn->setImageDelay(Screen0_ImageSequenceWidget_1_1, 4, 1000);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageSequenceWidget_1_1);

    Screen0_ImageSequenceWidget_1_2 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_1_2->fn->setPosition(Screen0_ImageSequenceWidget_1_2, 428, 301);
    Screen0_ImageSequenceWidget_1_2->fn->setSize(Screen0_ImageSequenceWidget_1_2, 79, 47);
    Screen0_ImageSequenceWidget_1_2->fn->setEnabled(Screen0_ImageSequenceWidget_1_2, LE_FALSE);
    Screen0_ImageSequenceWidget_1_2->fn->setBackgroundType(Screen0_ImageSequenceWidget_1_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageSequenceWidget_1_2->fn->setHAlignment(Screen0_ImageSequenceWidget_1_2, LE_HALIGN_LEFT);
    Screen0_ImageSequenceWidget_1_2->fn->setRepeat(Screen0_ImageSequenceWidget_1_2, LE_TRUE);
    Screen0_ImageSequenceWidget_1_2->fn->setImageCount(Screen0_ImageSequenceWidget_1_2, 5);
    Screen0_ImageSequenceWidget_1_2->fn->setImage(Screen0_ImageSequenceWidget_1_2, 0, &ImageBatt0);
    Screen0_ImageSequenceWidget_1_2->fn->setImageDelay(Screen0_ImageSequenceWidget_1_2, 0, 500);
    Screen0_ImageSequenceWidget_1_2->fn->setImage(Screen0_ImageSequenceWidget_1_2, 1, &ImageBatt1);
    Screen0_ImageSequenceWidget_1_2->fn->setImageDelay(Screen0_ImageSequenceWidget_1_2, 1, 500);
    Screen0_ImageSequenceWidget_1_2->fn->setImage(Screen0_ImageSequenceWidget_1_2, 2, &ImageBatt2);
    Screen0_ImageSequenceWidget_1_2->fn->setImageDelay(Screen0_ImageSequenceWidget_1_2, 2, 500);
    Screen0_ImageSequenceWidget_1_2->fn->setImage(Screen0_ImageSequenceWidget_1_2, 3, &ImageBatt3);
    Screen0_ImageSequenceWidget_1_2->fn->setImageDelay(Screen0_ImageSequenceWidget_1_2, 3, 500);
    Screen0_ImageSequenceWidget_1_2->fn->setImage(Screen0_ImageSequenceWidget_1_2, 4, &ImageBatt4);
    Screen0_ImageSequenceWidget_1_2->fn->setImageDelay(Screen0_ImageSequenceWidget_1_2, 4, 500);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageSequenceWidget_1_2);

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 55, 247);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 191, 26);
    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, &WhiteScheme);
    Screen0_LabelWidget_0->fn->setBorderType(Screen0_LabelWidget_0, LE_WIDGET_BORDER_LINE);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_Repeat);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_0);

    Screen0_LabelWidget_0_1 = leLabelWidget_New();
    Screen0_LabelWidget_0_1->fn->setPosition(Screen0_LabelWidget_0_1, 583, 249);
    Screen0_LabelWidget_0_1->fn->setSize(Screen0_LabelWidget_0_1, 191, 25);
    Screen0_LabelWidget_0_1->fn->setScheme(Screen0_LabelWidget_0_1, &WhiteScheme);
    Screen0_LabelWidget_0_1->fn->setBorderType(Screen0_LabelWidget_0_1, LE_WIDGET_BORDER_LINE);
    Screen0_LabelWidget_0_1->fn->setString(Screen0_LabelWidget_0_1, (leString*)&string_Play);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_0_1);

    Screen0_ButtonWidget_0_1 = leButtonWidget_New();
    Screen0_ButtonWidget_0_1->fn->setPosition(Screen0_ButtonWidget_0_1, 330, 395);
    Screen0_ButtonWidget_0_1->fn->setSize(Screen0_ButtonWidget_0_1, 65, 65);
    Screen0_ButtonWidget_0_1->fn->setPressedImage(Screen0_ButtonWidget_0_1, (leImage*)&play1);
    Screen0_ButtonWidget_0_1->fn->setReleasedImage(Screen0_ButtonWidget_0_1, (leImage*)&play);
    Screen0_ButtonWidget_0_1->fn->setReleasedEventCallback(Screen0_ButtonWidget_0_1, event_Screen0_ButtonWidget_0_1_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0_1);

    Screen0_ButtonWidget_0_1_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0_1_0->fn->setPosition(Screen0_ButtonWidget_0_1_0, 206, 395);
    Screen0_ButtonWidget_0_1_0->fn->setSize(Screen0_ButtonWidget_0_1_0, 65, 65);
    Screen0_ButtonWidget_0_1_0->fn->setPressedImage(Screen0_ButtonWidget_0_1_0, (leImage*)&stop1);
    Screen0_ButtonWidget_0_1_0->fn->setReleasedImage(Screen0_ButtonWidget_0_1_0, (leImage*)&stop);
    Screen0_ButtonWidget_0_1_0->fn->setReleasedEventCallback(Screen0_ButtonWidget_0_1_0, event_Screen0_ButtonWidget_0_1_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0_1_0);

    Screen0_ImageSequenceWidget_0 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_0->fn->setPosition(Screen0_ImageSequenceWidget_0, 638, 289);
    Screen0_ImageSequenceWidget_0->fn->setSize(Screen0_ImageSequenceWidget_0, 80, 80);
    Screen0_ImageSequenceWidget_0->fn->play(Screen0_ImageSequenceWidget_0);
    Screen0_ImageSequenceWidget_0->fn->setRepeat(Screen0_ImageSequenceWidget_0, LE_TRUE);
    Screen0_ImageSequenceWidget_0->fn->setImageCount(Screen0_ImageSequenceWidget_0, 4);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 0, &raining1);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 0, 500);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 1, &raining2);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 1, 500);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 2, &raining3);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 2, 500);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 3, &raining4);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 3, 500);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageSequenceWidget_0);

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
    Screen0_PanelWidget_0 = NULL;
    Screen0_ButtonWidget_0 = NULL;
    Screen0_ButtonWidget_0_0 = NULL;
    Screen0_ImageSequenceWidget_0_0 = NULL;
    Screen0_ImageSequenceWidget_0_1 = NULL;
    Screen0_ImageSequenceWidget_0_2 = NULL;
    Screen0_PanelWidget_0_0 = NULL;
    Screen0_ImageSequenceWidget_1_0 = NULL;
    Screen0_ImageSequenceWidget_1_1 = NULL;
    Screen0_ImageSequenceWidget_1_2 = NULL;
    Screen0_LabelWidget_0 = NULL;
    Screen0_LabelWidget_0_1 = NULL;
    Screen0_ButtonWidget_0_1 = NULL;
    Screen0_ButtonWidget_0_1_0 = NULL;
    Screen0_ImageSequenceWidget_0 = NULL;


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

