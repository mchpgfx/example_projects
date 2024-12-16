#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leButtonWidget* Screen0_btnSetDate;
leImageWidget* Screen0_imgMGS;
leWidget* Screen0_pnlCalendarDialog;
leWidget* Screen0_pnlCalendar;
leButtonWidget* Screen0_btnClose;
leKeyPadWidget* Screen0_keyCalendar;
leButtonWidget* Screen0_btnPrevYear;
leButtonWidget* Screen0_btnPrevMonth;
leButtonWidget* Screen0_btnNextYear;
leButtonWidget* Screen0_btnNextMonth;
leLabelWidget* Screen0_lblMonth;
leLabelWidget* Screen0_lblYear;
leLabelWidget* Screen0_lblMon;
leLabelWidget* Screen0_lblSun;
leLabelWidget* Screen0_lblTue;
leLabelWidget* Screen0_lblWed;
leLabelWidget* Screen0_lblThu;
leLabelWidget* Screen0_lblFri;
leLabelWidget* Screen0_lblSat;

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

    Screen0_btnSetDate = leButtonWidget_New();
    Screen0_btnSetDate->fn->setPosition(Screen0_btnSetDate, 270, 210);
    Screen0_btnSetDate->fn->setSize(Screen0_btnSetDate, 265, 60);
    Screen0_btnSetDate->fn->setScheme(Screen0_btnSetDate, &CalendarScheme);
    Screen0_btnSetDate->fn->setBorderType(Screen0_btnSetDate, LE_WIDGET_BORDER_LINE);
    Screen0_btnSetDate->fn->setString(Screen0_btnSetDate, (leString*)&string_strSetDate);
    Screen0_btnSetDate->fn->setReleasedEventCallback(Screen0_btnSetDate, event_Screen0_btnSetDate_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_btnSetDate);

    Screen0_imgMGS = leImageWidget_New();
    Screen0_imgMGS->fn->setPosition(Screen0_imgMGS, 7, 8);
    Screen0_imgMGS->fn->setSize(Screen0_imgMGS, 170, 45);
    Screen0_imgMGS->fn->setBackgroundType(Screen0_imgMGS, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgMGS->fn->setBorderType(Screen0_imgMGS, LE_WIDGET_BORDER_NONE);
    Screen0_imgMGS->fn->setImage(Screen0_imgMGS, (leImage*)&MGS_40h);
    root0->fn->addChild(root0, (leWidget*)Screen0_imgMGS);

    Screen0_pnlCalendarDialog = leWidget_New();
    Screen0_pnlCalendarDialog->fn->setPosition(Screen0_pnlCalendarDialog, 240, 480);
    Screen0_pnlCalendarDialog->fn->setSize(Screen0_pnlCalendarDialog, 340, 420);
    Screen0_pnlCalendarDialog->fn->setBackgroundType(Screen0_pnlCalendarDialog, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlCalendarDialog);

    Screen0_pnlCalendar = leWidget_New();
    Screen0_pnlCalendar->fn->setPosition(Screen0_pnlCalendar, 5, 32);
    Screen0_pnlCalendar->fn->setSize(Screen0_pnlCalendar, 330, 385);
    Screen0_pnlCalendar->fn->setScheme(Screen0_pnlCalendar, &CalendarScheme);
    Screen0_pnlCalendarDialog->fn->addChild(Screen0_pnlCalendarDialog, (leWidget*)Screen0_pnlCalendar);

    Screen0_keyCalendar = leKeyPadWidget_New(6, 7);
    Screen0_keyCalendar->fn->setPosition(Screen0_keyCalendar, 5, 95);
    Screen0_keyCalendar->fn->setSize(Screen0_keyCalendar, 322, 284);
    Screen0_keyCalendar->fn->setScheme(Screen0_keyCalendar, &CalendarScheme);
    Screen0_keyCalendar->fn->setBackgroundType(Screen0_keyCalendar, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar->fn->setBorderType(Screen0_keyCalendar, LE_WIDGET_BORDER_NONE);
    leButtonWidget* Screen0_keyCalendar_cell_0_0 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 0, 0);
    Screen0_keyCalendar_cell_0_0->fn->setPressedImage(Screen0_keyCalendar_cell_0_0, &ButtonDown);
    Screen0_keyCalendar_cell_0_0->fn->setReleasedImage(Screen0_keyCalendar_cell_0_0, &ButtonUp);
    Screen0_keyCalendar_cell_0_0->fn->setBackgroundType(Screen0_keyCalendar_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_0_0->fn->setImagePosition(Screen0_keyCalendar_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_0_1 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 0, 1);
    Screen0_keyCalendar_cell_0_1->fn->setPressedImage(Screen0_keyCalendar_cell_0_1, &ButtonDown);
    Screen0_keyCalendar_cell_0_1->fn->setReleasedImage(Screen0_keyCalendar_cell_0_1, &ButtonUp);
    Screen0_keyCalendar_cell_0_1->fn->setBackgroundType(Screen0_keyCalendar_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_0_1->fn->setImagePosition(Screen0_keyCalendar_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_0_2 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 0, 2);
    Screen0_keyCalendar_cell_0_2->fn->setPressedImage(Screen0_keyCalendar_cell_0_2, &ButtonDown);
    Screen0_keyCalendar_cell_0_2->fn->setReleasedImage(Screen0_keyCalendar_cell_0_2, &ButtonUp);
    Screen0_keyCalendar_cell_0_2->fn->setBackgroundType(Screen0_keyCalendar_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_0_2->fn->setImagePosition(Screen0_keyCalendar_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_0_3 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 0, 3);
    Screen0_keyCalendar_cell_0_3->fn->setPressedImage(Screen0_keyCalendar_cell_0_3, &ButtonDown);
    Screen0_keyCalendar_cell_0_3->fn->setReleasedImage(Screen0_keyCalendar_cell_0_3, &ButtonUp);
    Screen0_keyCalendar_cell_0_3->fn->setBackgroundType(Screen0_keyCalendar_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_0_3->fn->setImagePosition(Screen0_keyCalendar_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_0_4 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 0, 4);
    Screen0_keyCalendar_cell_0_4->fn->setPressedImage(Screen0_keyCalendar_cell_0_4, &ButtonDown);
    Screen0_keyCalendar_cell_0_4->fn->setReleasedImage(Screen0_keyCalendar_cell_0_4, &ButtonUp);
    Screen0_keyCalendar_cell_0_4->fn->setBackgroundType(Screen0_keyCalendar_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_0_4->fn->setImagePosition(Screen0_keyCalendar_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_0_5 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 0, 5);
    Screen0_keyCalendar_cell_0_5->fn->setPressedImage(Screen0_keyCalendar_cell_0_5, &ButtonDown);
    Screen0_keyCalendar_cell_0_5->fn->setReleasedImage(Screen0_keyCalendar_cell_0_5, &ButtonUp);
    Screen0_keyCalendar_cell_0_5->fn->setBackgroundType(Screen0_keyCalendar_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_0_5->fn->setImagePosition(Screen0_keyCalendar_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_0_6 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 0, 6);
    Screen0_keyCalendar_cell_0_6->fn->setPressedImage(Screen0_keyCalendar_cell_0_6, &ButtonDown);
    Screen0_keyCalendar_cell_0_6->fn->setReleasedImage(Screen0_keyCalendar_cell_0_6, &ButtonUp);
    Screen0_keyCalendar_cell_0_6->fn->setBackgroundType(Screen0_keyCalendar_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_0_6->fn->setImagePosition(Screen0_keyCalendar_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_1_0 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 1, 0);
    Screen0_keyCalendar_cell_1_0->fn->setPressedImage(Screen0_keyCalendar_cell_1_0, &ButtonDown);
    Screen0_keyCalendar_cell_1_0->fn->setReleasedImage(Screen0_keyCalendar_cell_1_0, &ButtonUp);
    Screen0_keyCalendar_cell_1_0->fn->setBackgroundType(Screen0_keyCalendar_cell_1_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_1_0->fn->setImagePosition(Screen0_keyCalendar_cell_1_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_1_1 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 1, 1);
    Screen0_keyCalendar_cell_1_1->fn->setPressedImage(Screen0_keyCalendar_cell_1_1, &ButtonDown);
    Screen0_keyCalendar_cell_1_1->fn->setReleasedImage(Screen0_keyCalendar_cell_1_1, &ButtonUp);
    Screen0_keyCalendar_cell_1_1->fn->setBackgroundType(Screen0_keyCalendar_cell_1_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_1_1->fn->setImagePosition(Screen0_keyCalendar_cell_1_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_1_2 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 1, 2);
    Screen0_keyCalendar_cell_1_2->fn->setPressedImage(Screen0_keyCalendar_cell_1_2, &ButtonDown);
    Screen0_keyCalendar_cell_1_2->fn->setReleasedImage(Screen0_keyCalendar_cell_1_2, &ButtonUp);
    Screen0_keyCalendar_cell_1_2->fn->setBackgroundType(Screen0_keyCalendar_cell_1_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_1_2->fn->setImagePosition(Screen0_keyCalendar_cell_1_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_1_3 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 1, 3);
    Screen0_keyCalendar_cell_1_3->fn->setPressedImage(Screen0_keyCalendar_cell_1_3, &ButtonDown);
    Screen0_keyCalendar_cell_1_3->fn->setReleasedImage(Screen0_keyCalendar_cell_1_3, &ButtonUp);
    Screen0_keyCalendar_cell_1_3->fn->setBackgroundType(Screen0_keyCalendar_cell_1_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_1_3->fn->setImagePosition(Screen0_keyCalendar_cell_1_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_1_4 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 1, 4);
    Screen0_keyCalendar_cell_1_4->fn->setPressedImage(Screen0_keyCalendar_cell_1_4, &ButtonDown);
    Screen0_keyCalendar_cell_1_4->fn->setReleasedImage(Screen0_keyCalendar_cell_1_4, &ButtonUp);
    Screen0_keyCalendar_cell_1_4->fn->setBackgroundType(Screen0_keyCalendar_cell_1_4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_1_4->fn->setImagePosition(Screen0_keyCalendar_cell_1_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_1_5 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 1, 5);
    Screen0_keyCalendar_cell_1_5->fn->setPressedImage(Screen0_keyCalendar_cell_1_5, &ButtonDown);
    Screen0_keyCalendar_cell_1_5->fn->setReleasedImage(Screen0_keyCalendar_cell_1_5, &ButtonUp);
    Screen0_keyCalendar_cell_1_5->fn->setBackgroundType(Screen0_keyCalendar_cell_1_5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_1_5->fn->setImagePosition(Screen0_keyCalendar_cell_1_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_1_6 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 1, 6);
    Screen0_keyCalendar_cell_1_6->fn->setPressedImage(Screen0_keyCalendar_cell_1_6, &ButtonDown);
    Screen0_keyCalendar_cell_1_6->fn->setReleasedImage(Screen0_keyCalendar_cell_1_6, &ButtonUp);
    Screen0_keyCalendar_cell_1_6->fn->setBackgroundType(Screen0_keyCalendar_cell_1_6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_1_6->fn->setImagePosition(Screen0_keyCalendar_cell_1_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_2_0 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 2, 0);
    Screen0_keyCalendar_cell_2_0->fn->setPressedImage(Screen0_keyCalendar_cell_2_0, &ButtonDown);
    Screen0_keyCalendar_cell_2_0->fn->setReleasedImage(Screen0_keyCalendar_cell_2_0, &ButtonUp);
    Screen0_keyCalendar_cell_2_0->fn->setBackgroundType(Screen0_keyCalendar_cell_2_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_2_0->fn->setImagePosition(Screen0_keyCalendar_cell_2_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_2_1 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 2, 1);
    Screen0_keyCalendar_cell_2_1->fn->setPressedImage(Screen0_keyCalendar_cell_2_1, &ButtonDown);
    Screen0_keyCalendar_cell_2_1->fn->setReleasedImage(Screen0_keyCalendar_cell_2_1, &ButtonUp);
    Screen0_keyCalendar_cell_2_1->fn->setBackgroundType(Screen0_keyCalendar_cell_2_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_2_1->fn->setImagePosition(Screen0_keyCalendar_cell_2_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_2_2 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 2, 2);
    Screen0_keyCalendar_cell_2_2->fn->setPressedImage(Screen0_keyCalendar_cell_2_2, &ButtonDown);
    Screen0_keyCalendar_cell_2_2->fn->setReleasedImage(Screen0_keyCalendar_cell_2_2, &ButtonUp);
    Screen0_keyCalendar_cell_2_2->fn->setBackgroundType(Screen0_keyCalendar_cell_2_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_2_2->fn->setImagePosition(Screen0_keyCalendar_cell_2_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_2_3 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 2, 3);
    Screen0_keyCalendar_cell_2_3->fn->setPressedImage(Screen0_keyCalendar_cell_2_3, &ButtonDown);
    Screen0_keyCalendar_cell_2_3->fn->setReleasedImage(Screen0_keyCalendar_cell_2_3, &ButtonUp);
    Screen0_keyCalendar_cell_2_3->fn->setBackgroundType(Screen0_keyCalendar_cell_2_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_2_3->fn->setImagePosition(Screen0_keyCalendar_cell_2_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_2_4 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 2, 4);
    Screen0_keyCalendar_cell_2_4->fn->setPressedImage(Screen0_keyCalendar_cell_2_4, &ButtonDown);
    Screen0_keyCalendar_cell_2_4->fn->setReleasedImage(Screen0_keyCalendar_cell_2_4, &ButtonUp);
    Screen0_keyCalendar_cell_2_4->fn->setBackgroundType(Screen0_keyCalendar_cell_2_4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_2_4->fn->setImagePosition(Screen0_keyCalendar_cell_2_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_2_5 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 2, 5);
    Screen0_keyCalendar_cell_2_5->fn->setPressedImage(Screen0_keyCalendar_cell_2_5, &ButtonDown);
    Screen0_keyCalendar_cell_2_5->fn->setReleasedImage(Screen0_keyCalendar_cell_2_5, &ButtonUp);
    Screen0_keyCalendar_cell_2_5->fn->setBackgroundType(Screen0_keyCalendar_cell_2_5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_2_5->fn->setImagePosition(Screen0_keyCalendar_cell_2_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_2_6 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 2, 6);
    Screen0_keyCalendar_cell_2_6->fn->setPressedImage(Screen0_keyCalendar_cell_2_6, &ButtonDown);
    Screen0_keyCalendar_cell_2_6->fn->setReleasedImage(Screen0_keyCalendar_cell_2_6, &ButtonUp);
    Screen0_keyCalendar_cell_2_6->fn->setBackgroundType(Screen0_keyCalendar_cell_2_6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_2_6->fn->setImagePosition(Screen0_keyCalendar_cell_2_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_3_0 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 3, 0);
    Screen0_keyCalendar_cell_3_0->fn->setPressedImage(Screen0_keyCalendar_cell_3_0, &ButtonDown);
    Screen0_keyCalendar_cell_3_0->fn->setReleasedImage(Screen0_keyCalendar_cell_3_0, &ButtonUp);
    Screen0_keyCalendar_cell_3_0->fn->setBackgroundType(Screen0_keyCalendar_cell_3_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_3_0->fn->setImagePosition(Screen0_keyCalendar_cell_3_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_3_1 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 3, 1);
    Screen0_keyCalendar_cell_3_1->fn->setPressedImage(Screen0_keyCalendar_cell_3_1, &ButtonDown);
    Screen0_keyCalendar_cell_3_1->fn->setReleasedImage(Screen0_keyCalendar_cell_3_1, &ButtonUp);
    Screen0_keyCalendar_cell_3_1->fn->setBackgroundType(Screen0_keyCalendar_cell_3_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_3_1->fn->setImagePosition(Screen0_keyCalendar_cell_3_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_3_2 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 3, 2);
    Screen0_keyCalendar_cell_3_2->fn->setPressedImage(Screen0_keyCalendar_cell_3_2, &ButtonDown);
    Screen0_keyCalendar_cell_3_2->fn->setReleasedImage(Screen0_keyCalendar_cell_3_2, &ButtonUp);
    Screen0_keyCalendar_cell_3_2->fn->setBackgroundType(Screen0_keyCalendar_cell_3_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_3_2->fn->setImagePosition(Screen0_keyCalendar_cell_3_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_3_3 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 3, 3);
    Screen0_keyCalendar_cell_3_3->fn->setPressedImage(Screen0_keyCalendar_cell_3_3, &ButtonDown);
    Screen0_keyCalendar_cell_3_3->fn->setReleasedImage(Screen0_keyCalendar_cell_3_3, &ButtonUp);
    Screen0_keyCalendar_cell_3_3->fn->setBackgroundType(Screen0_keyCalendar_cell_3_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_3_3->fn->setImagePosition(Screen0_keyCalendar_cell_3_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_3_4 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 3, 4);
    Screen0_keyCalendar_cell_3_4->fn->setPressedImage(Screen0_keyCalendar_cell_3_4, &ButtonDown);
    Screen0_keyCalendar_cell_3_4->fn->setReleasedImage(Screen0_keyCalendar_cell_3_4, &ButtonUp);
    Screen0_keyCalendar_cell_3_4->fn->setBackgroundType(Screen0_keyCalendar_cell_3_4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_3_4->fn->setImagePosition(Screen0_keyCalendar_cell_3_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_3_5 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 3, 5);
    Screen0_keyCalendar_cell_3_5->fn->setPressedImage(Screen0_keyCalendar_cell_3_5, &ButtonDown);
    Screen0_keyCalendar_cell_3_5->fn->setReleasedImage(Screen0_keyCalendar_cell_3_5, &ButtonUp);
    Screen0_keyCalendar_cell_3_5->fn->setBackgroundType(Screen0_keyCalendar_cell_3_5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_3_5->fn->setImagePosition(Screen0_keyCalendar_cell_3_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_3_6 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 3, 6);
    Screen0_keyCalendar_cell_3_6->fn->setPressedImage(Screen0_keyCalendar_cell_3_6, &ButtonDown);
    Screen0_keyCalendar_cell_3_6->fn->setReleasedImage(Screen0_keyCalendar_cell_3_6, &ButtonUp);
    Screen0_keyCalendar_cell_3_6->fn->setBackgroundType(Screen0_keyCalendar_cell_3_6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_3_6->fn->setImagePosition(Screen0_keyCalendar_cell_3_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_4_0 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 4, 0);
    Screen0_keyCalendar_cell_4_0->fn->setPressedImage(Screen0_keyCalendar_cell_4_0, &ButtonDown);
    Screen0_keyCalendar_cell_4_0->fn->setReleasedImage(Screen0_keyCalendar_cell_4_0, &ButtonUp);
    Screen0_keyCalendar_cell_4_0->fn->setBackgroundType(Screen0_keyCalendar_cell_4_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_4_0->fn->setImagePosition(Screen0_keyCalendar_cell_4_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_4_1 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 4, 1);
    Screen0_keyCalendar_cell_4_1->fn->setPressedImage(Screen0_keyCalendar_cell_4_1, &ButtonDown);
    Screen0_keyCalendar_cell_4_1->fn->setReleasedImage(Screen0_keyCalendar_cell_4_1, &ButtonUp);
    Screen0_keyCalendar_cell_4_1->fn->setBackgroundType(Screen0_keyCalendar_cell_4_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_4_1->fn->setImagePosition(Screen0_keyCalendar_cell_4_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_4_2 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 4, 2);
    Screen0_keyCalendar_cell_4_2->fn->setPressedImage(Screen0_keyCalendar_cell_4_2, &ButtonDown);
    Screen0_keyCalendar_cell_4_2->fn->setReleasedImage(Screen0_keyCalendar_cell_4_2, &ButtonUp);
    Screen0_keyCalendar_cell_4_2->fn->setBackgroundType(Screen0_keyCalendar_cell_4_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_4_2->fn->setImagePosition(Screen0_keyCalendar_cell_4_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_4_3 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 4, 3);
    Screen0_keyCalendar_cell_4_3->fn->setPressedImage(Screen0_keyCalendar_cell_4_3, &ButtonDown);
    Screen0_keyCalendar_cell_4_3->fn->setReleasedImage(Screen0_keyCalendar_cell_4_3, &ButtonUp);
    Screen0_keyCalendar_cell_4_3->fn->setBackgroundType(Screen0_keyCalendar_cell_4_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_4_3->fn->setImagePosition(Screen0_keyCalendar_cell_4_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_4_4 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 4, 4);
    Screen0_keyCalendar_cell_4_4->fn->setPressedImage(Screen0_keyCalendar_cell_4_4, &ButtonDown);
    Screen0_keyCalendar_cell_4_4->fn->setReleasedImage(Screen0_keyCalendar_cell_4_4, &ButtonUp);
    Screen0_keyCalendar_cell_4_4->fn->setBackgroundType(Screen0_keyCalendar_cell_4_4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_4_4->fn->setImagePosition(Screen0_keyCalendar_cell_4_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_4_5 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 4, 5);
    Screen0_keyCalendar_cell_4_5->fn->setPressedImage(Screen0_keyCalendar_cell_4_5, &ButtonDown);
    Screen0_keyCalendar_cell_4_5->fn->setReleasedImage(Screen0_keyCalendar_cell_4_5, &ButtonUp);
    Screen0_keyCalendar_cell_4_5->fn->setBackgroundType(Screen0_keyCalendar_cell_4_5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_4_5->fn->setImagePosition(Screen0_keyCalendar_cell_4_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_4_6 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 4, 6);
    Screen0_keyCalendar_cell_4_6->fn->setPressedImage(Screen0_keyCalendar_cell_4_6, &ButtonDown);
    Screen0_keyCalendar_cell_4_6->fn->setReleasedImage(Screen0_keyCalendar_cell_4_6, &ButtonUp);
    Screen0_keyCalendar_cell_4_6->fn->setBackgroundType(Screen0_keyCalendar_cell_4_6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_4_6->fn->setImagePosition(Screen0_keyCalendar_cell_4_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_5_0 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 5, 0);
    Screen0_keyCalendar_cell_5_0->fn->setPressedImage(Screen0_keyCalendar_cell_5_0, &ButtonDown);
    Screen0_keyCalendar_cell_5_0->fn->setReleasedImage(Screen0_keyCalendar_cell_5_0, &ButtonUp);
    Screen0_keyCalendar_cell_5_0->fn->setBackgroundType(Screen0_keyCalendar_cell_5_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_5_0->fn->setImagePosition(Screen0_keyCalendar_cell_5_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_5_1 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 5, 1);
    Screen0_keyCalendar_cell_5_1->fn->setPressedImage(Screen0_keyCalendar_cell_5_1, &ButtonDown);
    Screen0_keyCalendar_cell_5_1->fn->setReleasedImage(Screen0_keyCalendar_cell_5_1, &ButtonUp);
    Screen0_keyCalendar_cell_5_1->fn->setBackgroundType(Screen0_keyCalendar_cell_5_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_5_1->fn->setImagePosition(Screen0_keyCalendar_cell_5_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_5_2 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 5, 2);
    Screen0_keyCalendar_cell_5_2->fn->setPressedImage(Screen0_keyCalendar_cell_5_2, &ButtonDown);
    Screen0_keyCalendar_cell_5_2->fn->setReleasedImage(Screen0_keyCalendar_cell_5_2, &ButtonUp);
    Screen0_keyCalendar_cell_5_2->fn->setBackgroundType(Screen0_keyCalendar_cell_5_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_5_2->fn->setImagePosition(Screen0_keyCalendar_cell_5_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_5_3 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 5, 3);
    Screen0_keyCalendar_cell_5_3->fn->setPressedImage(Screen0_keyCalendar_cell_5_3, &ButtonDown);
    Screen0_keyCalendar_cell_5_3->fn->setReleasedImage(Screen0_keyCalendar_cell_5_3, &ButtonUp);
    Screen0_keyCalendar_cell_5_3->fn->setBackgroundType(Screen0_keyCalendar_cell_5_3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_5_3->fn->setImagePosition(Screen0_keyCalendar_cell_5_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_5_4 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 5, 4);
    Screen0_keyCalendar_cell_5_4->fn->setPressedImage(Screen0_keyCalendar_cell_5_4, &ButtonDown);
    Screen0_keyCalendar_cell_5_4->fn->setReleasedImage(Screen0_keyCalendar_cell_5_4, &ButtonUp);
    Screen0_keyCalendar_cell_5_4->fn->setBackgroundType(Screen0_keyCalendar_cell_5_4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_5_4->fn->setImagePosition(Screen0_keyCalendar_cell_5_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_5_5 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 5, 5);
    Screen0_keyCalendar_cell_5_5->fn->setPressedImage(Screen0_keyCalendar_cell_5_5, &ButtonDown);
    Screen0_keyCalendar_cell_5_5->fn->setReleasedImage(Screen0_keyCalendar_cell_5_5, &ButtonUp);
    Screen0_keyCalendar_cell_5_5->fn->setBackgroundType(Screen0_keyCalendar_cell_5_5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_5_5->fn->setImagePosition(Screen0_keyCalendar_cell_5_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Screen0_keyCalendar_cell_5_6 = Screen0_keyCalendar->fn->getCellButton(Screen0_keyCalendar, 5, 6);
    Screen0_keyCalendar_cell_5_6->fn->setPressedImage(Screen0_keyCalendar_cell_5_6, &ButtonDown);
    Screen0_keyCalendar_cell_5_6->fn->setReleasedImage(Screen0_keyCalendar_cell_5_6, &ButtonUp);
    Screen0_keyCalendar_cell_5_6->fn->setBackgroundType(Screen0_keyCalendar_cell_5_6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_keyCalendar_cell_5_6->fn->setImagePosition(Screen0_keyCalendar_cell_5_6, LE_RELATIVE_POSITION_BEHIND);
    Screen0_keyCalendar->fn->setKeyClickEventCallback(Screen0_keyCalendar, event_Screen0_keyCalendar_OnKeyClick);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_keyCalendar);

    Screen0_btnPrevYear = leButtonWidget_New();
    Screen0_btnPrevYear->fn->setPosition(Screen0_btnPrevYear, 5, 7);
    Screen0_btnPrevYear->fn->setSize(Screen0_btnPrevYear, 45, 50);
    Screen0_btnPrevYear->fn->setBackgroundType(Screen0_btnPrevYear, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnPrevYear->fn->setBorderType(Screen0_btnPrevYear, LE_WIDGET_BORDER_NONE);
    Screen0_btnPrevYear->fn->setString(Screen0_btnPrevYear, (leString*)&string_strPrevYear);
    Screen0_btnPrevYear->fn->setPressedImage(Screen0_btnPrevYear, (leImage*)&ButtonDown);
    Screen0_btnPrevYear->fn->setReleasedImage(Screen0_btnPrevYear, (leImage*)&ButtonUp);
    Screen0_btnPrevYear->fn->setImagePosition(Screen0_btnPrevYear, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnPrevYear->fn->setReleasedEventCallback(Screen0_btnPrevYear, event_Screen0_btnPrevYear_OnReleased);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_btnPrevYear);

    Screen0_btnPrevMonth = leButtonWidget_New();
    Screen0_btnPrevMonth->fn->setPosition(Screen0_btnPrevMonth, 51, 7);
    Screen0_btnPrevMonth->fn->setSize(Screen0_btnPrevMonth, 45, 50);
    Screen0_btnPrevMonth->fn->setBackgroundType(Screen0_btnPrevMonth, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnPrevMonth->fn->setBorderType(Screen0_btnPrevMonth, LE_WIDGET_BORDER_NONE);
    Screen0_btnPrevMonth->fn->setString(Screen0_btnPrevMonth, (leString*)&string_strPrevMonth);
    Screen0_btnPrevMonth->fn->setPressedImage(Screen0_btnPrevMonth, (leImage*)&ButtonDown);
    Screen0_btnPrevMonth->fn->setReleasedImage(Screen0_btnPrevMonth, (leImage*)&ButtonUp);
    Screen0_btnPrevMonth->fn->setImagePosition(Screen0_btnPrevMonth, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnPrevMonth->fn->setReleasedEventCallback(Screen0_btnPrevMonth, event_Screen0_btnPrevMonth_OnReleased);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_btnPrevMonth);

    Screen0_btnNextYear = leButtonWidget_New();
    Screen0_btnNextYear->fn->setPosition(Screen0_btnNextYear, 279, 8);
    Screen0_btnNextYear->fn->setSize(Screen0_btnNextYear, 45, 50);
    Screen0_btnNextYear->fn->setBackgroundType(Screen0_btnNextYear, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnNextYear->fn->setBorderType(Screen0_btnNextYear, LE_WIDGET_BORDER_NONE);
    Screen0_btnNextYear->fn->setString(Screen0_btnNextYear, (leString*)&string_strNextYear);
    Screen0_btnNextYear->fn->setPressedImage(Screen0_btnNextYear, (leImage*)&ButtonDown);
    Screen0_btnNextYear->fn->setReleasedImage(Screen0_btnNextYear, (leImage*)&ButtonUp);
    Screen0_btnNextYear->fn->setImagePosition(Screen0_btnNextYear, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnNextYear->fn->setReleasedEventCallback(Screen0_btnNextYear, event_Screen0_btnNextYear_OnReleased);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_btnNextYear);

    Screen0_btnNextMonth = leButtonWidget_New();
    Screen0_btnNextMonth->fn->setPosition(Screen0_btnNextMonth, 233, 8);
    Screen0_btnNextMonth->fn->setSize(Screen0_btnNextMonth, 45, 50);
    Screen0_btnNextMonth->fn->setBackgroundType(Screen0_btnNextMonth, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnNextMonth->fn->setBorderType(Screen0_btnNextMonth, LE_WIDGET_BORDER_NONE);
    Screen0_btnNextMonth->fn->setString(Screen0_btnNextMonth, (leString*)&string_strNextMonth);
    Screen0_btnNextMonth->fn->setPressedImage(Screen0_btnNextMonth, (leImage*)&ButtonDown);
    Screen0_btnNextMonth->fn->setReleasedImage(Screen0_btnNextMonth, (leImage*)&ButtonUp);
    Screen0_btnNextMonth->fn->setImagePosition(Screen0_btnNextMonth, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnNextMonth->fn->setReleasedEventCallback(Screen0_btnNextMonth, event_Screen0_btnNextMonth_OnReleased);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_btnNextMonth);

    Screen0_lblMonth = leLabelWidget_New();
    Screen0_lblMonth->fn->setPosition(Screen0_lblMonth, 116, 6);
    Screen0_lblMonth->fn->setBackgroundType(Screen0_lblMonth, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblMonth->fn->setHAlignment(Screen0_lblMonth, LE_HALIGN_CENTER);
    Screen0_lblMonth->fn->setString(Screen0_lblMonth, (leString*)&string_strJan);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblMonth);

    Screen0_lblYear = leLabelWidget_New();
    Screen0_lblYear->fn->setPosition(Screen0_lblYear, 129, 36);
    Screen0_lblYear->fn->setSize(Screen0_lblYear, 71, 25);
    Screen0_lblYear->fn->setBackgroundType(Screen0_lblYear, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblYear->fn->setHAlignment(Screen0_lblYear, LE_HALIGN_CENTER);
    Screen0_lblYear->fn->setString(Screen0_lblYear, (leString*)&string_strDefaultYear);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblYear);

    Screen0_lblMon = leLabelWidget_New();
    Screen0_lblMon->fn->setPosition(Screen0_lblMon, 58, 66);
    Screen0_lblMon->fn->setSize(Screen0_lblMon, 35, 25);
    Screen0_lblMon->fn->setBackgroundType(Screen0_lblMon, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblMon->fn->setHAlignment(Screen0_lblMon, LE_HALIGN_CENTER);
    Screen0_lblMon->fn->setString(Screen0_lblMon, (leString*)&string_strMon);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblMon);

    Screen0_lblSun = leLabelWidget_New();
    Screen0_lblSun->fn->setPosition(Screen0_lblSun, 12, 66);
    Screen0_lblSun->fn->setSize(Screen0_lblSun, 35, 25);
    Screen0_lblSun->fn->setBackgroundType(Screen0_lblSun, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblSun->fn->setHAlignment(Screen0_lblSun, LE_HALIGN_CENTER);
    Screen0_lblSun->fn->setString(Screen0_lblSun, (leString*)&string_strSun);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblSun);

    Screen0_lblTue = leLabelWidget_New();
    Screen0_lblTue->fn->setPosition(Screen0_lblTue, 102, 66);
    Screen0_lblTue->fn->setSize(Screen0_lblTue, 35, 25);
    Screen0_lblTue->fn->setBackgroundType(Screen0_lblTue, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTue->fn->setHAlignment(Screen0_lblTue, LE_HALIGN_CENTER);
    Screen0_lblTue->fn->setString(Screen0_lblTue, (leString*)&string_strTue);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblTue);

    Screen0_lblWed = leLabelWidget_New();
    Screen0_lblWed->fn->setPosition(Screen0_lblWed, 149, 66);
    Screen0_lblWed->fn->setSize(Screen0_lblWed, 35, 25);
    Screen0_lblWed->fn->setBackgroundType(Screen0_lblWed, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblWed->fn->setHAlignment(Screen0_lblWed, LE_HALIGN_CENTER);
    Screen0_lblWed->fn->setString(Screen0_lblWed, (leString*)&string_strWed);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblWed);

    Screen0_lblThu = leLabelWidget_New();
    Screen0_lblThu->fn->setPosition(Screen0_lblThu, 194, 66);
    Screen0_lblThu->fn->setSize(Screen0_lblThu, 35, 25);
    Screen0_lblThu->fn->setBackgroundType(Screen0_lblThu, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblThu->fn->setHAlignment(Screen0_lblThu, LE_HALIGN_CENTER);
    Screen0_lblThu->fn->setString(Screen0_lblThu, (leString*)&string_strThu);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblThu);

    Screen0_lblFri = leLabelWidget_New();
    Screen0_lblFri->fn->setPosition(Screen0_lblFri, 240, 66);
    Screen0_lblFri->fn->setSize(Screen0_lblFri, 35, 25);
    Screen0_lblFri->fn->setBackgroundType(Screen0_lblFri, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblFri->fn->setHAlignment(Screen0_lblFri, LE_HALIGN_CENTER);
    Screen0_lblFri->fn->setString(Screen0_lblFri, (leString*)&string_strFri);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblFri);

    Screen0_lblSat = leLabelWidget_New();
    Screen0_lblSat->fn->setPosition(Screen0_lblSat, 286, 66);
    Screen0_lblSat->fn->setSize(Screen0_lblSat, 35, 25);
    Screen0_lblSat->fn->setBackgroundType(Screen0_lblSat, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblSat->fn->setHAlignment(Screen0_lblSat, LE_HALIGN_CENTER);
    Screen0_lblSat->fn->setString(Screen0_lblSat, (leString*)&string_strSun);
    Screen0_pnlCalendar->fn->addChild(Screen0_pnlCalendar, (leWidget*)Screen0_lblSat);

    Screen0_btnClose = leButtonWidget_New();
    Screen0_btnClose->fn->setPosition(Screen0_btnClose, 264, 0);
    Screen0_btnClose->fn->setSize(Screen0_btnClose, 70, 30);
    Screen0_btnClose->fn->setBackgroundType(Screen0_btnClose, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnClose->fn->setBorderType(Screen0_btnClose, LE_WIDGET_BORDER_NONE);
    Screen0_btnClose->fn->setHAlignment(Screen0_btnClose, LE_HALIGN_RIGHT);
    Screen0_btnClose->fn->setString(Screen0_btnClose, (leString*)&string_strClose);
    Screen0_btnClose->fn->setImagePosition(Screen0_btnClose, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnClose->fn->setReleasedEventCallback(Screen0_btnClose, event_Screen0_btnClose_OnReleased);
    Screen0_pnlCalendarDialog->fn->addChild(Screen0_pnlCalendarDialog, (leWidget*)Screen0_btnClose);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Screen0_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Screen0_OnUpdate(); // raise event
}

void screenHide_Screen0(void)
{
    Screen0_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_BackgroundPanel = NULL;
    Screen0_btnSetDate = NULL;
    Screen0_imgMGS = NULL;
    Screen0_pnlCalendarDialog = NULL;
    Screen0_pnlCalendar = NULL;
    Screen0_btnClose = NULL;
    Screen0_keyCalendar = NULL;
    Screen0_btnPrevYear = NULL;
    Screen0_btnPrevMonth = NULL;
    Screen0_btnNextYear = NULL;
    Screen0_btnNextMonth = NULL;
    Screen0_lblMonth = NULL;
    Screen0_lblYear = NULL;
    Screen0_lblMon = NULL;
    Screen0_lblSun = NULL;
    Screen0_lblTue = NULL;
    Screen0_lblWed = NULL;
    Screen0_lblThu = NULL;
    Screen0_lblFri = NULL;
    Screen0_lblSat = NULL;


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

