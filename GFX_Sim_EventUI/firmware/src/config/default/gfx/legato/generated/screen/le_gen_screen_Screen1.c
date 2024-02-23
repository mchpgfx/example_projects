#include "gfx/legato/generated/screen/le_gen_screen_Screen1.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen1_Panel_0;
leImageWidget* Screen1_ImageWidget_0;
leButtonWidget* Screen1_ButtonWidget_0;
leLabelWidget* Screen1_LabelWidget_0;
leButtonWidget* Screen1_ButtonWidget_1;
leLabelWidget* Screen1_HourLabel;
leLabelWidget* Screen1_MinuteLabel;
leLabelWidget* Screen1_SecondLabel;
leLabelWidget* Screen1_ColonLabel_1;
leLabelWidget* Screen1_ColonLabel_2;
leLabelWidget* Screen1_ColonLabel_3;
leLabelWidget* Screen1_TenthsecondLabel;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen1(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen1(void)
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

    Screen1_Panel_0 = leWidget_New();
    Screen1_Panel_0->fn->setPosition(Screen1_Panel_0, 0, 0);
    Screen1_Panel_0->fn->setSize(Screen1_Panel_0, 800, 480);
    Screen1_Panel_0->fn->setScheme(Screen1_Panel_0, &WhiteScheme);
    Screen1_Panel_0->fn->setBorderType(Screen1_Panel_0, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen1_Panel_0);

    Screen1_ImageWidget_0 = leImageWidget_New();
    Screen1_ImageWidget_0->fn->setPosition(Screen1_ImageWidget_0, 164, 220);
    Screen1_ImageWidget_0->fn->setSize(Screen1_ImageWidget_0, 167, 97);
    Screen1_ImageWidget_0->fn->setBackgroundType(Screen1_ImageWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen1_ImageWidget_0->fn->setBorderType(Screen1_ImageWidget_0, LE_WIDGET_BORDER_NONE);
    Screen1_ImageWidget_0->fn->setImage(Screen1_ImageWidget_0, (leImage*)&mchp_large);
    root0->fn->addChild(root0, (leWidget*)Screen1_ImageWidget_0);

    Screen1_ButtonWidget_0 = leButtonWidget_New();
    Screen1_ButtonWidget_0->fn->setPosition(Screen1_ButtonWidget_0, 290, 385);
    Screen1_ButtonWidget_0->fn->setSize(Screen1_ButtonWidget_0, 240, 55);
    Screen1_ButtonWidget_0->fn->setScheme(Screen1_ButtonWidget_0, &MyLabelScheme);
    Screen1_ButtonWidget_0->fn->setBorderType(Screen1_ButtonWidget_0, LE_WIDGET_BORDER_LINE);
    Screen1_ButtonWidget_0->fn->setString(Screen1_ButtonWidget_0, (leString*)&string_ChangeScreenString);
    Screen1_ButtonWidget_0->fn->setPressedEventCallback(Screen1_ButtonWidget_0, event_Screen1_ButtonWidget_0_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen1_ButtonWidget_0);

    Screen1_LabelWidget_0 = leLabelWidget_New();
    Screen1_LabelWidget_0->fn->setPosition(Screen1_LabelWidget_0, 0, 25);
    Screen1_LabelWidget_0->fn->setSize(Screen1_LabelWidget_0, 800, 57);
    Screen1_LabelWidget_0->fn->setScheme(Screen1_LabelWidget_0, &MyLabelScheme);
    Screen1_LabelWidget_0->fn->setHAlignment(Screen1_LabelWidget_0, LE_HALIGN_CENTER);
    Screen1_LabelWidget_0->fn->setString(Screen1_LabelWidget_0, (leString*)&string_MyNewGraphicsApp);
    root0->fn->addChild(root0, (leWidget*)Screen1_LabelWidget_0);

    Screen1_ButtonWidget_1 = leButtonWidget_New();
    Screen1_ButtonWidget_1->fn->setPosition(Screen1_ButtonWidget_1, 484, 240);
    Screen1_ButtonWidget_1->fn->setSize(Screen1_ButtonWidget_1, 240, 55);
    Screen1_ButtonWidget_1->fn->setScheme(Screen1_ButtonWidget_1, &MyLabelScheme);
    Screen1_ButtonWidget_1->fn->setBorderType(Screen1_ButtonWidget_1, LE_WIDGET_BORDER_LINE);
    Screen1_ButtonWidget_1->fn->setString(Screen1_ButtonWidget_1, (leString*)&string_ChangeLanguageString);
    Screen1_ButtonWidget_1->fn->setPressedEventCallback(Screen1_ButtonWidget_1, event_Screen1_ButtonWidget_1_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen1_ButtonWidget_1);

    Screen1_HourLabel = leLabelWidget_New();
    Screen1_HourLabel->fn->setPosition(Screen1_HourLabel, 12, 107);
    Screen1_HourLabel->fn->setSize(Screen1_HourLabel, 283, 77);
    Screen1_HourLabel->fn->setBackgroundType(Screen1_HourLabel, LE_WIDGET_BACKGROUND_NONE);
    Screen1_HourLabel->fn->setHAlignment(Screen1_HourLabel, LE_HALIGN_RIGHT);
    Screen1_HourLabel->fn->setString(Screen1_HourLabel, (leString*)&string_ClockString);
    root0->fn->addChild(root0, (leWidget*)Screen1_HourLabel);

    Screen1_MinuteLabel = leLabelWidget_New();
    Screen1_MinuteLabel->fn->setPosition(Screen1_MinuteLabel, 313, 107);
    Screen1_MinuteLabel->fn->setSize(Screen1_MinuteLabel, 88, 75);
    Screen1_MinuteLabel->fn->setBackgroundType(Screen1_MinuteLabel, LE_WIDGET_BACKGROUND_NONE);
    Screen1_MinuteLabel->fn->setHAlignment(Screen1_MinuteLabel, LE_HALIGN_RIGHT);
    Screen1_MinuteLabel->fn->setString(Screen1_MinuteLabel, (leString*)&string_ClockString);
    root0->fn->addChild(root0, (leWidget*)Screen1_MinuteLabel);

    Screen1_SecondLabel = leLabelWidget_New();
    Screen1_SecondLabel->fn->setPosition(Screen1_SecondLabel, 425, 108);
    Screen1_SecondLabel->fn->setSize(Screen1_SecondLabel, 83, 75);
    Screen1_SecondLabel->fn->setBackgroundType(Screen1_SecondLabel, LE_WIDGET_BACKGROUND_NONE);
    Screen1_SecondLabel->fn->setHAlignment(Screen1_SecondLabel, LE_HALIGN_RIGHT);
    Screen1_SecondLabel->fn->setString(Screen1_SecondLabel, (leString*)&string_ClockString);
    root0->fn->addChild(root0, (leWidget*)Screen1_SecondLabel);

    Screen1_ColonLabel_1 = leLabelWidget_New();
    Screen1_ColonLabel_1->fn->setPosition(Screen1_ColonLabel_1, 292, 100);
    Screen1_ColonLabel_1->fn->setSize(Screen1_ColonLabel_1, 22, 77);
    Screen1_ColonLabel_1->fn->setBackgroundType(Screen1_ColonLabel_1, LE_WIDGET_BACKGROUND_NONE);
    Screen1_ColonLabel_1->fn->setString(Screen1_ColonLabel_1, (leString*)&string_ColonString);
    root0->fn->addChild(root0, (leWidget*)Screen1_ColonLabel_1);

    Screen1_ColonLabel_2 = leLabelWidget_New();
    Screen1_ColonLabel_2->fn->setPosition(Screen1_ColonLabel_2, 400, 98);
    Screen1_ColonLabel_2->fn->setSize(Screen1_ColonLabel_2, 22, 77);
    Screen1_ColonLabel_2->fn->setBackgroundType(Screen1_ColonLabel_2, LE_WIDGET_BACKGROUND_NONE);
    Screen1_ColonLabel_2->fn->setString(Screen1_ColonLabel_2, (leString*)&string_ColonString);
    root0->fn->addChild(root0, (leWidget*)Screen1_ColonLabel_2);

    Screen1_ColonLabel_3 = leLabelWidget_New();
    Screen1_ColonLabel_3->fn->setPosition(Screen1_ColonLabel_3, 505, 101);
    Screen1_ColonLabel_3->fn->setSize(Screen1_ColonLabel_3, 22, 77);
    Screen1_ColonLabel_3->fn->setBackgroundType(Screen1_ColonLabel_3, LE_WIDGET_BACKGROUND_NONE);
    Screen1_ColonLabel_3->fn->setString(Screen1_ColonLabel_3, (leString*)&string_ColonString);
    root0->fn->addChild(root0, (leWidget*)Screen1_ColonLabel_3);

    Screen1_TenthsecondLabel = leLabelWidget_New();
    Screen1_TenthsecondLabel->fn->setPosition(Screen1_TenthsecondLabel, 529, 108);
    Screen1_TenthsecondLabel->fn->setSize(Screen1_TenthsecondLabel, 83, 75);
    Screen1_TenthsecondLabel->fn->setBackgroundType(Screen1_TenthsecondLabel, LE_WIDGET_BACKGROUND_NONE);
    Screen1_TenthsecondLabel->fn->setString(Screen1_TenthsecondLabel, (leString*)&string_ClockString);
    root0->fn->addChild(root0, (leWidget*)Screen1_TenthsecondLabel);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Screen1_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen1(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Screen1_OnUpdate(); // raise event
}

void screenHide_Screen1(void)
{
    Screen1_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen1_Panel_0 = NULL;
    Screen1_ImageWidget_0 = NULL;
    Screen1_ButtonWidget_0 = NULL;
    Screen1_LabelWidget_0 = NULL;
    Screen1_ButtonWidget_1 = NULL;
    Screen1_HourLabel = NULL;
    Screen1_MinuteLabel = NULL;
    Screen1_SecondLabel = NULL;
    Screen1_ColonLabel_1 = NULL;
    Screen1_ColonLabel_2 = NULL;
    Screen1_ColonLabel_3 = NULL;
    Screen1_TenthsecondLabel = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen1(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen1(uint32_t lyrIdx)
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

