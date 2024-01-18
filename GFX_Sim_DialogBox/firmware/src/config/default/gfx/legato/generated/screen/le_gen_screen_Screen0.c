#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leImageWidget* Screen0_mchpLogo;
leButtonWidget* Screen0_ScanButton;
leWidget* Screen0_ScanningDialogBox;
leWidget* Screen0_StoppedDialogBox;
leButtonWidget* Screen0_CancelButton;
leLabelWidget* Screen0_LabelWidget_0;
leButtonWidget* Screen0_OkButton;
leLabelWidget* Screen0_LabelWidget_0_0;

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
    root0->fn->setSize(root0, 480, 272);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 480, 272);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &WhiteScheme);
    Screen0_BackgroundPanel->fn->setBorderType(Screen0_BackgroundPanel, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_mchpLogo = leImageWidget_New();
    Screen0_mchpLogo->fn->setPosition(Screen0_mchpLogo, 5, 5);
    Screen0_mchpLogo->fn->setSize(Screen0_mchpLogo, 120, 28);
    Screen0_mchpLogo->fn->setBackgroundType(Screen0_mchpLogo, LE_WIDGET_BACKGROUND_NONE);
    Screen0_mchpLogo->fn->setBorderType(Screen0_mchpLogo, LE_WIDGET_BORDER_NONE);
    Screen0_mchpLogo->fn->setImage(Screen0_mchpLogo, (leImage*)&mchpLogo_small);
    root0->fn->addChild(root0, (leWidget*)Screen0_mchpLogo);

    Screen0_ScanButton = leButtonWidget_New();
    Screen0_ScanButton->fn->setPosition(Screen0_ScanButton, 136, 106);
    Screen0_ScanButton->fn->setSize(Screen0_ScanButton, 220, 75);
    Screen0_ScanButton->fn->setScheme(Screen0_ScanButton, &WhiteScheme);
    Screen0_ScanButton->fn->setBackgroundType(Screen0_ScanButton, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ScanButton->fn->setBorderType(Screen0_ScanButton, LE_WIDGET_BORDER_NONE);
    Screen0_ScanButton->fn->setString(Screen0_ScanButton, (leString*)&string_StartScanString);
    Screen0_ScanButton->fn->setPressedImage(Screen0_ScanButton, (leImage*)&ButtonBlue_220x75);
    Screen0_ScanButton->fn->setReleasedImage(Screen0_ScanButton, (leImage*)&ButtonBlue_220x75);
    Screen0_ScanButton->fn->setImagePosition(Screen0_ScanButton, LE_RELATIVE_POSITION_BEHIND);
    Screen0_ScanButton->fn->setReleasedEventCallback(Screen0_ScanButton, event_Screen0_ScanButton_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ScanButton);

    Screen0_ScanningDialogBox = leWidget_New();
    Screen0_ScanningDialogBox->fn->setPosition(Screen0_ScanningDialogBox, 127, 56);
    Screen0_ScanningDialogBox->fn->setSize(Screen0_ScanningDialogBox, 240, 180);
    Screen0_ScanningDialogBox->fn->setScheme(Screen0_ScanningDialogBox, &WhiteScheme);
    Screen0_ScanningDialogBox->fn->setBorderType(Screen0_ScanningDialogBox, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen0_ScanningDialogBox);

    Screen0_CancelButton = leButtonWidget_New();
    Screen0_CancelButton->fn->setPosition(Screen0_CancelButton, 52, 110);
    Screen0_CancelButton->fn->setSize(Screen0_CancelButton, 140, 45);
    Screen0_CancelButton->fn->setScheme(Screen0_CancelButton, &WhiteScheme);
    Screen0_CancelButton->fn->setBackgroundType(Screen0_CancelButton, LE_WIDGET_BACKGROUND_NONE);
    Screen0_CancelButton->fn->setBorderType(Screen0_CancelButton, LE_WIDGET_BORDER_NONE);
    Screen0_CancelButton->fn->setString(Screen0_CancelButton, (leString*)&string_StopString);
    Screen0_CancelButton->fn->setPressedImage(Screen0_CancelButton, (leImage*)&ButtonBlue_140x45);
    Screen0_CancelButton->fn->setReleasedImage(Screen0_CancelButton, (leImage*)&ButtonBlue_140x45);
    Screen0_CancelButton->fn->setImagePosition(Screen0_CancelButton, LE_RELATIVE_POSITION_BEHIND);
    Screen0_CancelButton->fn->setReleasedEventCallback(Screen0_CancelButton, event_Screen0_CancelButton_OnReleased);
    Screen0_ScanningDialogBox->fn->addChild(Screen0_ScanningDialogBox, (leWidget*)Screen0_CancelButton);

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 42, 45);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 166, 49);
    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, &RedScheme);
    Screen0_LabelWidget_0->fn->setBackgroundType(Screen0_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_0->fn->setHAlignment(Screen0_LabelWidget_0, LE_HALIGN_CENTER);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_ScanningScreen);
    Screen0_ScanningDialogBox->fn->addChild(Screen0_ScanningDialogBox, (leWidget*)Screen0_LabelWidget_0);

    Screen0_StoppedDialogBox = leWidget_New();
    Screen0_StoppedDialogBox->fn->setPosition(Screen0_StoppedDialogBox, 480, 90);
    Screen0_StoppedDialogBox->fn->setSize(Screen0_StoppedDialogBox, 240, 110);
    Screen0_StoppedDialogBox->fn->setScheme(Screen0_StoppedDialogBox, &WhiteScheme);
    Screen0_StoppedDialogBox->fn->setBorderType(Screen0_StoppedDialogBox, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen0_StoppedDialogBox);

    Screen0_OkButton = leButtonWidget_New();
    Screen0_OkButton->fn->setPosition(Screen0_OkButton, 55, 55);
    Screen0_OkButton->fn->setSize(Screen0_OkButton, 140, 45);
    Screen0_OkButton->fn->setScheme(Screen0_OkButton, &WhiteScheme);
    Screen0_OkButton->fn->setBackgroundType(Screen0_OkButton, LE_WIDGET_BACKGROUND_NONE);
    Screen0_OkButton->fn->setBorderType(Screen0_OkButton, LE_WIDGET_BORDER_NONE);
    Screen0_OkButton->fn->setString(Screen0_OkButton, (leString*)&string_OkString);
    Screen0_OkButton->fn->setPressedImage(Screen0_OkButton, (leImage*)&ButtonBlue_140x45);
    Screen0_OkButton->fn->setReleasedImage(Screen0_OkButton, (leImage*)&ButtonBlue_140x45);
    Screen0_OkButton->fn->setImagePosition(Screen0_OkButton, LE_RELATIVE_POSITION_BEHIND);
    Screen0_OkButton->fn->setReleasedEventCallback(Screen0_OkButton, event_Screen0_OkButton_OnReleased);
    Screen0_StoppedDialogBox->fn->addChild(Screen0_StoppedDialogBox, (leWidget*)Screen0_OkButton);

    Screen0_LabelWidget_0_0 = leLabelWidget_New();
    Screen0_LabelWidget_0_0->fn->setPosition(Screen0_LabelWidget_0_0, 42, 5);
    Screen0_LabelWidget_0_0->fn->setSize(Screen0_LabelWidget_0_0, 166, 49);
    Screen0_LabelWidget_0_0->fn->setScheme(Screen0_LabelWidget_0_0, &RedScheme);
    Screen0_LabelWidget_0_0->fn->setBackgroundType(Screen0_LabelWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_0_0->fn->setHAlignment(Screen0_LabelWidget_0_0, LE_HALIGN_CENTER);
    Screen0_LabelWidget_0_0->fn->setString(Screen0_LabelWidget_0_0, (leString*)&string_StoppedScanString);
    Screen0_StoppedDialogBox->fn->addChild(Screen0_StoppedDialogBox, (leWidget*)Screen0_LabelWidget_0_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Screen0_OnShow(); // raise event

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
    Screen0_mchpLogo = NULL;
    Screen0_ScanButton = NULL;
    Screen0_ScanningDialogBox = NULL;
    Screen0_StoppedDialogBox = NULL;
    Screen0_CancelButton = NULL;
    Screen0_LabelWidget_0 = NULL;
    Screen0_OkButton = NULL;
    Screen0_LabelWidget_0_0 = NULL;


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

