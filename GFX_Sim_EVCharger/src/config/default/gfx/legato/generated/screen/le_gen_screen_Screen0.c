#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;
static leWidget* root2;

leWidget* Screen0_BackgroundPanel;
leImageWidget* Screen0_ImageWidget1;
leRectangleWidget* Screen0_RectangleWidget_0;
leLabelWidget* Screen0_LabelWidget_scene0;
leImageWidget* Screen0_ImageWidget_batteryLevel;
leLabelWidget* Screen0_LabelWidget_percent;
leWidget* Screen0_PanelWidget_battery;
leRectangleWidget* Screen0_RectangleWidget_7;
leLabelWidget* Screen0_LabelWidget_15;
leLabelWidget* Screen0_LabelWidget_rtime;
leWidget* Screen0_PanelWidget_0;
leButtonWidget* Screen0_ButtonWidget_0;
leImageWidget* Screen0_ImageWidget_logo_animate;
leImageWidget* Screen0_ImageWidget_2;
leImageWidget* Screen0_ImageWidget_3;
leLabelWidget* Screen0_LabelWidget_0;
leLabelWidget* Screen0_LabelWidget_1;
leLabelWidget* Screen0_LabelWidget_2;
leLabelWidget* Screen0_LabelWidget_3;
leLabelWidget* Screen0_LabelWidget_4;
leLabelWidget* Screen0_LabelWidget_5;
leLabelWidget* Screen0_LabelWidget_6;
leLabelWidget* Screen0_LabelWidget_7;
leLabelWidget* Screen0_LabelWidget_8;
leLabelWidget* Screen0_LabelWidget_9;
leLabelWidget* Screen0_LabelWidget_10;
leLabelWidget* Screen0_LabelWidget_11;
leLabelWidget* Screen0_LabelWidget_12;
leLabelWidget* Screen0_LabelWidget_13;
leRectangleWidget* Screen0_RectangleWidget_1;
leRectangleWidget* Screen0_RectangleWidget_2;
leRectangleWidget* Screen0_RectangleWidget_3;
leRectangleWidget* Screen0_RectangleWidget_4;
leRectangleWidget* Screen0_RectangleWidget_5;
leButtonWidget* Screen0_ButtonWidget_plus;
leButtonWidget* Screen0_ButtonWidget_minus;
leLabelWidget* Screen0_rtc_label;
leImageSequenceWidget* Screen0_ImageSequenceWidget_0;
leRectangleWidget* Screen0_RectangleWidget_6;
leLabelWidget* Screen0_LabelWidget_14;
leButtonWidget* Screen0_ButtonWidget_scene1;

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
    Screen0_BackgroundPanel->fn->setEnabled(Screen0_BackgroundPanel, LE_FALSE);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &BlackScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_ImageWidget1 = leImageWidget_New();
    Screen0_ImageWidget1->fn->setPosition(Screen0_ImageWidget1, 0, 75);
    Screen0_ImageWidget1->fn->setSize(Screen0_ImageWidget1, 800, 326);
    Screen0_ImageWidget1->fn->setEnabled(Screen0_ImageWidget1, LE_FALSE);
    Screen0_ImageWidget1->fn->setBackgroundType(Screen0_ImageWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget1->fn->setBorderType(Screen0_ImageWidget1, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget1->fn->setImage(Screen0_ImageWidget1, (leImage*)&background0);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageWidget1);

    Screen0_RectangleWidget_0 = leRectangleWidget_New();
    Screen0_RectangleWidget_0->fn->setPosition(Screen0_RectangleWidget_0, 191, 200);
    Screen0_RectangleWidget_0->fn->setSize(Screen0_RectangleWidget_0, 447, 134);
    Screen0_RectangleWidget_0->fn->setEnabled(Screen0_RectangleWidget_0, LE_FALSE);
    Screen0_RectangleWidget_0->fn->setScheme(Screen0_RectangleWidget_0, &translucentScheme);
    Screen0_RectangleWidget_0->fn->setBorderType(Screen0_RectangleWidget_0, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_0->fn->setThickness(Screen0_RectangleWidget_0, 2);
    root0->fn->addChild(root0, (leWidget*)Screen0_RectangleWidget_0);

    Screen0_LabelWidget_scene0 = leLabelWidget_New();
    Screen0_LabelWidget_scene0->fn->setPosition(Screen0_LabelWidget_scene0, 245, 200);
    Screen0_LabelWidget_scene0->fn->setSize(Screen0_LabelWidget_scene0, 366, 114);
    Screen0_LabelWidget_scene0->fn->setEnabled(Screen0_LabelWidget_scene0, LE_FALSE);
    Screen0_LabelWidget_scene0->fn->setScheme(Screen0_LabelWidget_scene0, &WhiteScheme);
    Screen0_LabelWidget_scene0->fn->setBackgroundType(Screen0_LabelWidget_scene0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_scene0->fn->setString(Screen0_LabelWidget_scene0, (leString*)&string_Notice);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_scene0);

    Screen0_ImageWidget_batteryLevel = leImageWidget_New();
    Screen0_ImageWidget_batteryLevel->fn->setPosition(Screen0_ImageWidget_batteryLevel, 366, 322);
    Screen0_ImageWidget_batteryLevel->fn->setEnabled(Screen0_ImageWidget_batteryLevel, LE_FALSE);
    Screen0_ImageWidget_batteryLevel->fn->setVisible(Screen0_ImageWidget_batteryLevel, LE_FALSE);
    Screen0_ImageWidget_batteryLevel->fn->setBackgroundType(Screen0_ImageWidget_batteryLevel, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget_batteryLevel->fn->setBorderType(Screen0_ImageWidget_batteryLevel, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget_batteryLevel->fn->setImage(Screen0_ImageWidget_batteryLevel, (leImage*)&Battery0);
    root0->fn->addChild(root0, (leWidget*)Screen0_ImageWidget_batteryLevel);

    Screen0_LabelWidget_percent = leLabelWidget_New();
    Screen0_LabelWidget_percent->fn->setPosition(Screen0_LabelWidget_percent, 494, 360);
    Screen0_LabelWidget_percent->fn->setEnabled(Screen0_LabelWidget_percent, LE_FALSE);
    Screen0_LabelWidget_percent->fn->setScheme(Screen0_LabelWidget_percent, &WhiteScheme);
    Screen0_LabelWidget_percent->fn->setBackgroundType(Screen0_LabelWidget_percent, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_percent->fn->setString(Screen0_LabelWidget_percent, (leString*)&string_charge_percent);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_percent);

    Screen0_PanelWidget_battery = leWidget_New();
    Screen0_PanelWidget_battery->fn->setPosition(Screen0_PanelWidget_battery, 379, 357);
    Screen0_PanelWidget_battery->fn->setSize(Screen0_PanelWidget_battery, 64, 30);
    Screen0_PanelWidget_battery->fn->setEnabled(Screen0_PanelWidget_battery, LE_FALSE);
    Screen0_PanelWidget_battery->fn->setVisible(Screen0_PanelWidget_battery, LE_FALSE);
    Screen0_PanelWidget_battery->fn->setScheme(Screen0_PanelWidget_battery, &BlueScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_PanelWidget_battery);

    Screen0_RectangleWidget_7 = leRectangleWidget_New();
    Screen0_RectangleWidget_7->fn->setPosition(Screen0_RectangleWidget_7, 271, 99);
    Screen0_RectangleWidget_7->fn->setSize(Screen0_RectangleWidget_7, 288, 72);
    Screen0_RectangleWidget_7->fn->setEnabled(Screen0_RectangleWidget_7, LE_FALSE);
    Screen0_RectangleWidget_7->fn->setVisible(Screen0_RectangleWidget_7, LE_FALSE);
    Screen0_RectangleWidget_7->fn->setScheme(Screen0_RectangleWidget_7, &translucentScheme);
    Screen0_RectangleWidget_7->fn->setBorderType(Screen0_RectangleWidget_7, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_7->fn->setThickness(Screen0_RectangleWidget_7, 2);
    root0->fn->addChild(root0, (leWidget*)Screen0_RectangleWidget_7);

    Screen0_LabelWidget_15 = leLabelWidget_New();
    Screen0_LabelWidget_15->fn->setPosition(Screen0_LabelWidget_15, 287, 100);
    Screen0_LabelWidget_15->fn->setSize(Screen0_LabelWidget_15, 262, 65);
    Screen0_LabelWidget_15->fn->setEnabled(Screen0_LabelWidget_15, LE_FALSE);
    Screen0_LabelWidget_15->fn->setVisible(Screen0_LabelWidget_15, LE_FALSE);
    Screen0_LabelWidget_15->fn->setScheme(Screen0_LabelWidget_15, &WhiteScheme);
    Screen0_LabelWidget_15->fn->setBackgroundType(Screen0_LabelWidget_15, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_15->fn->setString(Screen0_LabelWidget_15, (leString*)&string_charging_notice);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_15);

    Screen0_LabelWidget_rtime = leLabelWidget_New();
    Screen0_LabelWidget_rtime->fn->setPosition(Screen0_LabelWidget_rtime, 245, 278);
    Screen0_LabelWidget_rtime->fn->setSize(Screen0_LabelWidget_rtime, 192, 47);
    Screen0_LabelWidget_rtime->fn->setEnabled(Screen0_LabelWidget_rtime, LE_FALSE);
    Screen0_LabelWidget_rtime->fn->setVisible(Screen0_LabelWidget_rtime, LE_FALSE);
    Screen0_LabelWidget_rtime->fn->setScheme(Screen0_LabelWidget_rtime, &WhiteScheme);
    Screen0_LabelWidget_rtime->fn->setBackgroundType(Screen0_LabelWidget_rtime, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_rtime);

    Screen0_PanelWidget_0 = leWidget_New();
    Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, 11, 11);
    Screen0_PanelWidget_0->fn->setSize(Screen0_PanelWidget_0, 152, 40);
    Screen0_PanelWidget_0->fn->setEnabled(Screen0_PanelWidget_0, LE_FALSE);
    Screen0_PanelWidget_0->fn->setScheme(Screen0_PanelWidget_0, &BlackScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_PanelWidget_0);

    Screen0_ImageWidget_logo_animate = leImageWidget_New();
    Screen0_ImageWidget_logo_animate->fn->setPosition(Screen0_ImageWidget_logo_animate, 0, 0);
    Screen0_ImageWidget_logo_animate->fn->setSize(Screen0_ImageWidget_logo_animate, 152, 40);
    Screen0_ImageWidget_logo_animate->fn->setScheme(Screen0_ImageWidget_logo_animate, &BlackScheme);
    Screen0_ImageWidget_logo_animate->fn->setBackgroundType(Screen0_ImageWidget_logo_animate, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget_logo_animate->fn->setBorderType(Screen0_ImageWidget_logo_animate, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget_logo_animate->fn->setImage(Screen0_ImageWidget_logo_animate, (leImage*)&MicrochipLogo);
    Screen0_PanelWidget_0->fn->addChild(Screen0_PanelWidget_0, (leWidget*)Screen0_ImageWidget_logo_animate);

    Screen0_ButtonWidget_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0->fn->setPosition(Screen0_ButtonWidget_0, 717, 7);
    Screen0_ButtonWidget_0->fn->setSize(Screen0_ButtonWidget_0, 75, 75);
    Screen0_ButtonWidget_0->fn->setBackgroundType(Screen0_ButtonWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_0->fn->setBorderType(Screen0_ButtonWidget_0, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_0->fn->setPressedImage(Screen0_ButtonWidget_0, (leImage*)&round_power_on);
    Screen0_ButtonWidget_0->fn->setReleasedImage(Screen0_ButtonWidget_0, (leImage*)&round_power_off);
    Screen0_ButtonWidget_0->fn->setReleasedEventCallback(Screen0_ButtonWidget_0, event_Screen0_ButtonWidget_0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 800, 480);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_ImageWidget_2 = leImageWidget_New();
    Screen0_ImageWidget_2->fn->setPosition(Screen0_ImageWidget_2, 0, 0);
    Screen0_ImageWidget_2->fn->setSize(Screen0_ImageWidget_2, 800, 480);
    Screen0_ImageWidget_2->fn->setEnabled(Screen0_ImageWidget_2, LE_FALSE);
    Screen0_ImageWidget_2->fn->setBackgroundType(Screen0_ImageWidget_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget_2->fn->setBorderType(Screen0_ImageWidget_2, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget_2->fn->setImage(Screen0_ImageWidget_2, (leImage*)&image1);
    root1->fn->addChild(root1, (leWidget*)Screen0_ImageWidget_2);

    Screen0_ImageWidget_3 = leImageWidget_New();
    Screen0_ImageWidget_3->fn->setPosition(Screen0_ImageWidget_3, 11, 11);
    Screen0_ImageWidget_3->fn->setSize(Screen0_ImageWidget_3, 152, 40);
    Screen0_ImageWidget_3->fn->setEnabled(Screen0_ImageWidget_3, LE_FALSE);
    Screen0_ImageWidget_3->fn->setScheme(Screen0_ImageWidget_3, &BlackScheme);
    Screen0_ImageWidget_3->fn->setBackgroundType(Screen0_ImageWidget_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageWidget_3->fn->setBorderType(Screen0_ImageWidget_3, LE_WIDGET_BORDER_NONE);
    Screen0_ImageWidget_3->fn->setImage(Screen0_ImageWidget_3, (leImage*)&MicrochipLogo);
    root1->fn->addChild(root1, (leWidget*)Screen0_ImageWidget_3);

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 194, 12);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 187, 38);
    Screen0_LabelWidget_0->fn->setEnabled(Screen0_LabelWidget_0, LE_FALSE);
    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, &WhiteScheme);
    Screen0_LabelWidget_0->fn->setBackgroundType(Screen0_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_evcharger);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_0);

    Screen0_LabelWidget_1 = leLabelWidget_New();
    Screen0_LabelWidget_1->fn->setPosition(Screen0_LabelWidget_1, 68, 368);
    Screen0_LabelWidget_1->fn->setEnabled(Screen0_LabelWidget_1, LE_FALSE);
    Screen0_LabelWidget_1->fn->setScheme(Screen0_LabelWidget_1, &WhiteScheme);
    Screen0_LabelWidget_1->fn->setBackgroundType(Screen0_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_op_label);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_1);

    Screen0_LabelWidget_2 = leLabelWidget_New();
    Screen0_LabelWidget_2->fn->setPosition(Screen0_LabelWidget_2, 178, 368);
    Screen0_LabelWidget_2->fn->setEnabled(Screen0_LabelWidget_2, LE_FALSE);
    Screen0_LabelWidget_2->fn->setScheme(Screen0_LabelWidget_2, &WhiteScheme);
    Screen0_LabelWidget_2->fn->setBackgroundType(Screen0_LabelWidget_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_2->fn->setString(Screen0_LabelWidget_2, (leString*)&string_ctime_label);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_2);

    Screen0_LabelWidget_3 = leLabelWidget_New();
    Screen0_LabelWidget_3->fn->setPosition(Screen0_LabelWidget_3, 275, 368);
    Screen0_LabelWidget_3->fn->setEnabled(Screen0_LabelWidget_3, LE_FALSE);
    Screen0_LabelWidget_3->fn->setScheme(Screen0_LabelWidget_3, &WhiteScheme);
    Screen0_LabelWidget_3->fn->setBackgroundType(Screen0_LabelWidget_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_3->fn->setString(Screen0_LabelWidget_3, (leString*)&string_denergy_label);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_3);

    Screen0_LabelWidget_4 = leLabelWidget_New();
    Screen0_LabelWidget_4->fn->setPosition(Screen0_LabelWidget_4, 390, 368);
    Screen0_LabelWidget_4->fn->setEnabled(Screen0_LabelWidget_4, LE_FALSE);
    Screen0_LabelWidget_4->fn->setScheme(Screen0_LabelWidget_4, &WhiteScheme);
    Screen0_LabelWidget_4->fn->setBackgroundType(Screen0_LabelWidget_4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_4->fn->setString(Screen0_LabelWidget_4, (leString*)&string_time_label);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_4);

    Screen0_LabelWidget_5 = leLabelWidget_New();
    Screen0_LabelWidget_5->fn->setPosition(Screen0_LabelWidget_5, 75, 412);
    Screen0_LabelWidget_5->fn->setEnabled(Screen0_LabelWidget_5, LE_FALSE);
    Screen0_LabelWidget_5->fn->setScheme(Screen0_LabelWidget_5, &WhiteScheme);
    Screen0_LabelWidget_5->fn->setBackgroundType(Screen0_LabelWidget_5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_5->fn->setString(Screen0_LabelWidget_5, (leString*)&string_pwr);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_5);

    Screen0_LabelWidget_6 = leLabelWidget_New();
    Screen0_LabelWidget_6->fn->setPosition(Screen0_LabelWidget_6, 75, 447);
    Screen0_LabelWidget_6->fn->setEnabled(Screen0_LabelWidget_6, LE_FALSE);
    Screen0_LabelWidget_6->fn->setScheme(Screen0_LabelWidget_6, &WhiteScheme);
    Screen0_LabelWidget_6->fn->setBackgroundType(Screen0_LabelWidget_6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_6->fn->setString(Screen0_LabelWidget_6, (leString*)&string_pwr_unit);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_6);

    Screen0_LabelWidget_7 = leLabelWidget_New();
    Screen0_LabelWidget_7->fn->setPosition(Screen0_LabelWidget_7, 181, 412);
    Screen0_LabelWidget_7->fn->setEnabled(Screen0_LabelWidget_7, LE_FALSE);
    Screen0_LabelWidget_7->fn->setScheme(Screen0_LabelWidget_7, &WhiteScheme);
    Screen0_LabelWidget_7->fn->setBackgroundType(Screen0_LabelWidget_7, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_7->fn->setString(Screen0_LabelWidget_7, (leString*)&string_ctime);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_7);

    Screen0_LabelWidget_8 = leLabelWidget_New();
    Screen0_LabelWidget_8->fn->setPosition(Screen0_LabelWidget_8, 181, 447);
    Screen0_LabelWidget_8->fn->setEnabled(Screen0_LabelWidget_8, LE_FALSE);
    Screen0_LabelWidget_8->fn->setScheme(Screen0_LabelWidget_8, &WhiteScheme);
    Screen0_LabelWidget_8->fn->setBackgroundType(Screen0_LabelWidget_8, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_8->fn->setString(Screen0_LabelWidget_8, (leString*)&string_ctime_unit);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_8);

    Screen0_LabelWidget_9 = leLabelWidget_New();
    Screen0_LabelWidget_9->fn->setPosition(Screen0_LabelWidget_9, 275, 412);
    Screen0_LabelWidget_9->fn->setEnabled(Screen0_LabelWidget_9, LE_FALSE);
    Screen0_LabelWidget_9->fn->setScheme(Screen0_LabelWidget_9, &WhiteScheme);
    Screen0_LabelWidget_9->fn->setBackgroundType(Screen0_LabelWidget_9, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_9->fn->setString(Screen0_LabelWidget_9, (leString*)&string_energy);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_9);

    Screen0_LabelWidget_10 = leLabelWidget_New();
    Screen0_LabelWidget_10->fn->setPosition(Screen0_LabelWidget_10, 275, 447);
    Screen0_LabelWidget_10->fn->setEnabled(Screen0_LabelWidget_10, LE_FALSE);
    Screen0_LabelWidget_10->fn->setScheme(Screen0_LabelWidget_10, &WhiteScheme);
    Screen0_LabelWidget_10->fn->setBackgroundType(Screen0_LabelWidget_10, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_10->fn->setString(Screen0_LabelWidget_10, (leString*)&string_energy_unit);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_10);

    Screen0_LabelWidget_11 = leLabelWidget_New();
    Screen0_LabelWidget_11->fn->setPosition(Screen0_LabelWidget_11, 395, 412);
    Screen0_LabelWidget_11->fn->setEnabled(Screen0_LabelWidget_11, LE_FALSE);
    Screen0_LabelWidget_11->fn->setScheme(Screen0_LabelWidget_11, &WhiteScheme);
    Screen0_LabelWidget_11->fn->setBackgroundType(Screen0_LabelWidget_11, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_11->fn->setString(Screen0_LabelWidget_11, (leString*)&string_rtime);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_11);

    Screen0_LabelWidget_12 = leLabelWidget_New();
    Screen0_LabelWidget_12->fn->setPosition(Screen0_LabelWidget_12, 395, 447);
    Screen0_LabelWidget_12->fn->setEnabled(Screen0_LabelWidget_12, LE_FALSE);
    Screen0_LabelWidget_12->fn->setScheme(Screen0_LabelWidget_12, &WhiteScheme);
    Screen0_LabelWidget_12->fn->setBackgroundType(Screen0_LabelWidget_12, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_12->fn->setString(Screen0_LabelWidget_12, (leString*)&string_rtime_unit);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_12);

    Screen0_LabelWidget_13 = leLabelWidget_New();
    Screen0_LabelWidget_13->fn->setPosition(Screen0_LabelWidget_13, 580, 364);
    Screen0_LabelWidget_13->fn->setEnabled(Screen0_LabelWidget_13, LE_FALSE);
    Screen0_LabelWidget_13->fn->setScheme(Screen0_LabelWidget_13, &WhiteScheme);
    Screen0_LabelWidget_13->fn->setBackgroundType(Screen0_LabelWidget_13, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_13->fn->setString(Screen0_LabelWidget_13, (leString*)&string_remaining_charge);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_13);

    Screen0_RectangleWidget_1 = leRectangleWidget_New();
    Screen0_RectangleWidget_1->fn->setPosition(Screen0_RectangleWidget_1, 55, 368);
    Screen0_RectangleWidget_1->fn->setSize(Screen0_RectangleWidget_1, 7, 100);
    Screen0_RectangleWidget_1->fn->setEnabled(Screen0_RectangleWidget_1, LE_FALSE);
    Screen0_RectangleWidget_1->fn->setBorderType(Screen0_RectangleWidget_1, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_1->fn->setThickness(Screen0_RectangleWidget_1, 2);
    root1->fn->addChild(root1, (leWidget*)Screen0_RectangleWidget_1);

    Screen0_RectangleWidget_2 = leRectangleWidget_New();
    Screen0_RectangleWidget_2->fn->setPosition(Screen0_RectangleWidget_2, 163, 368);
    Screen0_RectangleWidget_2->fn->setSize(Screen0_RectangleWidget_2, 7, 100);
    Screen0_RectangleWidget_2->fn->setEnabled(Screen0_RectangleWidget_2, LE_FALSE);
    Screen0_RectangleWidget_2->fn->setBorderType(Screen0_RectangleWidget_2, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_2->fn->setThickness(Screen0_RectangleWidget_2, 2);
    root1->fn->addChild(root1, (leWidget*)Screen0_RectangleWidget_2);

    Screen0_RectangleWidget_3 = leRectangleWidget_New();
    Screen0_RectangleWidget_3->fn->setPosition(Screen0_RectangleWidget_3, 260, 368);
    Screen0_RectangleWidget_3->fn->setSize(Screen0_RectangleWidget_3, 7, 100);
    Screen0_RectangleWidget_3->fn->setEnabled(Screen0_RectangleWidget_3, LE_FALSE);
    Screen0_RectangleWidget_3->fn->setBorderType(Screen0_RectangleWidget_3, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_3->fn->setThickness(Screen0_RectangleWidget_3, 2);
    root1->fn->addChild(root1, (leWidget*)Screen0_RectangleWidget_3);

    Screen0_RectangleWidget_4 = leRectangleWidget_New();
    Screen0_RectangleWidget_4->fn->setPosition(Screen0_RectangleWidget_4, 378, 368);
    Screen0_RectangleWidget_4->fn->setSize(Screen0_RectangleWidget_4, 7, 100);
    Screen0_RectangleWidget_4->fn->setEnabled(Screen0_RectangleWidget_4, LE_FALSE);
    Screen0_RectangleWidget_4->fn->setBorderType(Screen0_RectangleWidget_4, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_4->fn->setThickness(Screen0_RectangleWidget_4, 2);
    root1->fn->addChild(root1, (leWidget*)Screen0_RectangleWidget_4);

    Screen0_RectangleWidget_5 = leRectangleWidget_New();
    Screen0_RectangleWidget_5->fn->setPosition(Screen0_RectangleWidget_5, 492, 368);
    Screen0_RectangleWidget_5->fn->setSize(Screen0_RectangleWidget_5, 7, 100);
    Screen0_RectangleWidget_5->fn->setEnabled(Screen0_RectangleWidget_5, LE_FALSE);
    Screen0_RectangleWidget_5->fn->setBorderType(Screen0_RectangleWidget_5, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_5->fn->setThickness(Screen0_RectangleWidget_5, 2);
    root1->fn->addChild(root1, (leWidget*)Screen0_RectangleWidget_5);

    Screen0_ButtonWidget_plus = leButtonWidget_New();
    Screen0_ButtonWidget_plus->fn->setPosition(Screen0_ButtonWidget_plus, 690, 342);
    Screen0_ButtonWidget_plus->fn->setSize(Screen0_ButtonWidget_plus, 67, 61);
    Screen0_ButtonWidget_plus->fn->setEnabled(Screen0_ButtonWidget_plus, LE_FALSE);
    Screen0_ButtonWidget_plus->fn->setBackgroundType(Screen0_ButtonWidget_plus, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_plus->fn->setBorderType(Screen0_ButtonWidget_plus, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_plus->fn->setPressedImage(Screen0_ButtonWidget_plus, (leImage*)&plusp);
    Screen0_ButtonWidget_plus->fn->setReleasedImage(Screen0_ButtonWidget_plus, (leImage*)&plus);
    Screen0_ButtonWidget_plus->fn->setReleasedEventCallback(Screen0_ButtonWidget_plus, event_Screen0_ButtonWidget_plus_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Screen0_ButtonWidget_plus);

    Screen0_ButtonWidget_minus = leButtonWidget_New();
    Screen0_ButtonWidget_minus->fn->setPosition(Screen0_ButtonWidget_minus, 690, 410);
    Screen0_ButtonWidget_minus->fn->setSize(Screen0_ButtonWidget_minus, 67, 69);
    Screen0_ButtonWidget_minus->fn->setEnabled(Screen0_ButtonWidget_minus, LE_FALSE);
    Screen0_ButtonWidget_minus->fn->setBackgroundType(Screen0_ButtonWidget_minus, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_minus->fn->setBorderType(Screen0_ButtonWidget_minus, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_minus->fn->setPressedImage(Screen0_ButtonWidget_minus, (leImage*)&minusp);
    Screen0_ButtonWidget_minus->fn->setReleasedImage(Screen0_ButtonWidget_minus, (leImage*)&minus);
    Screen0_ButtonWidget_minus->fn->setReleasedEventCallback(Screen0_ButtonWidget_minus, event_Screen0_ButtonWidget_minus_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Screen0_ButtonWidget_minus);

    Screen0_rtc_label = leLabelWidget_New();
    Screen0_rtc_label->fn->setPosition(Screen0_rtc_label, 399, 19);
    Screen0_rtc_label->fn->setSize(Screen0_rtc_label, 165, 25);
    Screen0_rtc_label->fn->setEnabled(Screen0_rtc_label, LE_FALSE);
    Screen0_rtc_label->fn->setScheme(Screen0_rtc_label, &WhiteScheme);
    Screen0_rtc_label->fn->setBackgroundType(Screen0_rtc_label, LE_WIDGET_BACKGROUND_NONE);
    Screen0_rtc_label->fn->setString(Screen0_rtc_label, (leString*)&string_rtc);
    root1->fn->addChild(root1, (leWidget*)Screen0_rtc_label);

    Screen0_ImageSequenceWidget_0 = leImageSequenceWidget_New();
    Screen0_ImageSequenceWidget_0->fn->setPosition(Screen0_ImageSequenceWidget_0, 558, 382);
    Screen0_ImageSequenceWidget_0->fn->setEnabled(Screen0_ImageSequenceWidget_0, LE_FALSE);
    Screen0_ImageSequenceWidget_0->fn->setBackgroundType(Screen0_ImageSequenceWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ImageSequenceWidget_0->fn->setImageCount(Screen0_ImageSequenceWidget_0, 11);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 0, &Battery0);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 0, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 1, &Battery1);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 1, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 2, &Battery2);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 2, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 3, &Battery3);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 3, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 4, &Battery4);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 4, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 5, &Battery5);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 5, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 6, &Battery6);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 6, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 7, &Battery7);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 7, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 8, &Battery8);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 8, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 9, &Battery9);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 9, 1000);
    Screen0_ImageSequenceWidget_0->fn->setImage(Screen0_ImageSequenceWidget_0, 10, &Battery10);
    Screen0_ImageSequenceWidget_0->fn->setImageDelay(Screen0_ImageSequenceWidget_0, 10, 1000);
    root1->fn->addChild(root1, (leWidget*)Screen0_ImageSequenceWidget_0);

    Screen0_RectangleWidget_6 = leRectangleWidget_New();
    Screen0_RectangleWidget_6->fn->setPosition(Screen0_RectangleWidget_6, 263, 153);
    Screen0_RectangleWidget_6->fn->setSize(Screen0_RectangleWidget_6, 361, 128);
    Screen0_RectangleWidget_6->fn->setEnabled(Screen0_RectangleWidget_6, LE_FALSE);
    Screen0_RectangleWidget_6->fn->setVisible(Screen0_RectangleWidget_6, LE_FALSE);
    Screen0_RectangleWidget_6->fn->setScheme(Screen0_RectangleWidget_6, &translucentScheme);
    Screen0_RectangleWidget_6->fn->setBorderType(Screen0_RectangleWidget_6, LE_WIDGET_BORDER_NONE);
    Screen0_RectangleWidget_6->fn->setThickness(Screen0_RectangleWidget_6, 2);
    root1->fn->addChild(root1, (leWidget*)Screen0_RectangleWidget_6);

    Screen0_LabelWidget_14 = leLabelWidget_New();
    Screen0_LabelWidget_14->fn->setPosition(Screen0_LabelWidget_14, 310, 159);
    Screen0_LabelWidget_14->fn->setSize(Screen0_LabelWidget_14, 284, 112);
    Screen0_LabelWidget_14->fn->setEnabled(Screen0_LabelWidget_14, LE_FALSE);
    Screen0_LabelWidget_14->fn->setVisible(Screen0_LabelWidget_14, LE_FALSE);
    Screen0_LabelWidget_14->fn->setScheme(Screen0_LabelWidget_14, &WhiteScheme);
    Screen0_LabelWidget_14->fn->setBackgroundType(Screen0_LabelWidget_14, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_14->fn->setString(Screen0_LabelWidget_14, (leString*)&string_charged_notice);
    root1->fn->addChild(root1, (leWidget*)Screen0_LabelWidget_14);

    Screen0_ButtonWidget_scene1 = leButtonWidget_New();
    Screen0_ButtonWidget_scene1->fn->setPosition(Screen0_ButtonWidget_scene1, 717, 7);
    Screen0_ButtonWidget_scene1->fn->setSize(Screen0_ButtonWidget_scene1, 75, 75);
    Screen0_ButtonWidget_scene1->fn->setEnabled(Screen0_ButtonWidget_scene1, LE_FALSE);
    Screen0_ButtonWidget_scene1->fn->setBackgroundType(Screen0_ButtonWidget_scene1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_scene1->fn->setBorderType(Screen0_ButtonWidget_scene1, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_scene1->fn->setPressedImage(Screen0_ButtonWidget_scene1, (leImage*)&round_power_off);
    Screen0_ButtonWidget_scene1->fn->setReleasedImage(Screen0_ButtonWidget_scene1, (leImage*)&round_power_on);
    Screen0_ButtonWidget_scene1->fn->setReleasedEventCallback(Screen0_ButtonWidget_scene1, event_Screen0_ButtonWidget_scene1_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Screen0_ButtonWidget_scene1);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    // layer 2
    root2 = leWidget_New();
    root2->fn->setSize(root2, 161, 261);
    root2->fn->setBackgroundType(root2, LE_WIDGET_BACKGROUND_NONE);
    root2->fn->setMargins(root2, 0, 0, 0, 0);
    root2->flags |= LE_WIDGET_IGNOREEVENTS;
    root2->flags |= LE_WIDGET_IGNOREPICK;

    leAddRootWidget(root2, 2);
    leSetLayerColorMode(2, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);
    root2->fn->setSize(root2, root2->rect.width, root2->rect.height);
}

void screenHide_Screen0(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_BackgroundPanel = NULL;
    Screen0_ImageWidget1 = NULL;
    Screen0_RectangleWidget_0 = NULL;
    Screen0_LabelWidget_scene0 = NULL;
    Screen0_ImageWidget_batteryLevel = NULL;
    Screen0_LabelWidget_percent = NULL;
    Screen0_PanelWidget_battery = NULL;
    Screen0_RectangleWidget_7 = NULL;
    Screen0_LabelWidget_15 = NULL;
    Screen0_LabelWidget_rtime = NULL;
    Screen0_PanelWidget_0 = NULL;
    Screen0_ButtonWidget_0 = NULL;
    Screen0_ImageWidget_logo_animate = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Screen0_ImageWidget_2 = NULL;
    Screen0_ImageWidget_3 = NULL;
    Screen0_LabelWidget_0 = NULL;
    Screen0_LabelWidget_1 = NULL;
    Screen0_LabelWidget_2 = NULL;
    Screen0_LabelWidget_3 = NULL;
    Screen0_LabelWidget_4 = NULL;
    Screen0_LabelWidget_5 = NULL;
    Screen0_LabelWidget_6 = NULL;
    Screen0_LabelWidget_7 = NULL;
    Screen0_LabelWidget_8 = NULL;
    Screen0_LabelWidget_9 = NULL;
    Screen0_LabelWidget_10 = NULL;
    Screen0_LabelWidget_11 = NULL;
    Screen0_LabelWidget_12 = NULL;
    Screen0_LabelWidget_13 = NULL;
    Screen0_RectangleWidget_1 = NULL;
    Screen0_RectangleWidget_2 = NULL;
    Screen0_RectangleWidget_3 = NULL;
    Screen0_RectangleWidget_4 = NULL;
    Screen0_RectangleWidget_5 = NULL;
    Screen0_ButtonWidget_plus = NULL;
    Screen0_ButtonWidget_minus = NULL;
    Screen0_rtc_label = NULL;
    Screen0_ImageSequenceWidget_0 = NULL;
    Screen0_RectangleWidget_6 = NULL;
    Screen0_LabelWidget_14 = NULL;
    Screen0_ButtonWidget_scene1 = NULL;

    leRemoveRootWidget(root2, 2);
    leWidget_Delete(root2);
    root2 = NULL;


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
        case 1:
        {
            return root1;
        }
        case 2:
        {
            return root2;
        }
        default:
        {
            return NULL;
        }
    }
}

