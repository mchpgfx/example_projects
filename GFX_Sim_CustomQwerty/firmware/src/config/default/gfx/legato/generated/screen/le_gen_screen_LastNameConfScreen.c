#include "gfx/legato/generated/screen/le_gen_screen_LastNameConfScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* LastNameConfScreen_BackgroundPanel;
leLabelWidget* LastNameConfScreen_LabelWidget_0;
leTextFieldWidget* LastNameConfScreen_txtFieldLastName;
leTextFieldWidget* LastNameConfScreen_txtFieldConfNum;
leLabelWidget* LastNameConfScreen_LabelWidget_1;
leImageWidget* LastNameConfScreen_imgMGS;
leImageWidget* LastNameConfScreen_ImageWidget_1_0;
leButtonWidget* LastNameConfScreen_btnContinue;
leLabelWidget* LastNameConfScreen_LabelWidget_3;
leLabelWidget* LastNameConfScreen_LabelWidget_3_0;
leWidget* LastNameConfScreen_pnlKeyboard;
leWidget* LastNameConfScreen_pnlError;
leWidget* LastNameConfScreen_pnlSuccess;
leWidget* LastNameConfScreen_PanelWidget_0_0;
leKeyPadWidget* LastNameConfScreen_keysRow1;
leKeyPadWidget* LastNameConfScreen_keysRow2;
leKeyPadWidget* LastNameConfScreen_keysRow3;
leKeyPadWidget* LastNameConfScreen_keysBtmLeft;
leKeyPadWidget* LastNameConfScreen_keysBtmRight;
leKeyPadWidget* LastNameConfScreen_keySpace;
leButtonWidget* LastNameConfScreen_keyShiftLeft;
leButtonWidget* LastNameConfScreen_keyShiftRight;
leButtonWidget* LastNameConfScreen_keyEnter;
leButtonWidget* LastNameConfScreen_keyNumLeft;
leButtonWidget* LastNameConfScreen_keyNumRight;
leLabelWidget* LastNameConfScreen_LabelWidget_2;
leLabelWidget* LastNameConfScreen_LabelWidget_4;
leButtonWidget* LastNameConfScreen_btnErrorBack;
leLabelWidget* LastNameConfScreen_LabelWidget_2_0;
leLabelWidget* LastNameConfScreen_LabelWidget_4_0;
leButtonWidget* LastNameConfScreen_btnSuccessOk;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_LastNameConfScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_LastNameConfScreen(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 1280, 800);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    LastNameConfScreen_BackgroundPanel = leWidget_New();
    LastNameConfScreen_BackgroundPanel->fn->setPosition(LastNameConfScreen_BackgroundPanel, 0, 0);
    LastNameConfScreen_BackgroundPanel->fn->setSize(LastNameConfScreen_BackgroundPanel, 1280, 800);
    LastNameConfScreen_BackgroundPanel->fn->setScheme(LastNameConfScreen_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_BackgroundPanel);

    LastNameConfScreen_LabelWidget_0 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_0->fn->setPosition(LastNameConfScreen_LabelWidget_0, 167, 163);
    LastNameConfScreen_LabelWidget_0->fn->setSize(LastNameConfScreen_LabelWidget_0, 795, 86);
    LastNameConfScreen_LabelWidget_0->fn->setScheme(LastNameConfScreen_LabelWidget_0, &BlackScheme);
    LastNameConfScreen_LabelWidget_0->fn->setBackgroundType(LastNameConfScreen_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_0->fn->setString(LastNameConfScreen_LabelWidget_0, (leString*)&string_strEnter);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_LabelWidget_0);

    LastNameConfScreen_txtFieldLastName = leTextFieldWidget_New();
    LastNameConfScreen_txtFieldLastName->fn->setPosition(LastNameConfScreen_txtFieldLastName, 190, 282);
    LastNameConfScreen_txtFieldLastName->fn->setSize(LastNameConfScreen_txtFieldLastName, 900, 60);
    LastNameConfScreen_txtFieldLastName->fn->setScheme(LastNameConfScreen_txtFieldLastName, &KioskSchemeText);
    LastNameConfScreen_txtFieldLastName->fn->setBorderType(LastNameConfScreen_txtFieldLastName, LE_WIDGET_BORDER_LINE);
    LastNameConfScreen_txtFieldLastName->fn->setHAlignment(LastNameConfScreen_txtFieldLastName, LE_HALIGN_LEFT);
    LastNameConfScreen_txtFieldLastName->fn->setHintString(LastNameConfScreen_txtFieldLastName, (leString*)&string_strEnterName);
    LastNameConfScreen_txtFieldLastName->fn->setFont(LastNameConfScreen_txtFieldLastName, (leFont*)&Lora24);
    LastNameConfScreen_txtFieldLastName->fn->setFocusChangedEventCallback(LastNameConfScreen_txtFieldLastName, event_LastNameConfScreen_txtFieldLastName_OnFocusChanged);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_txtFieldLastName);

    LastNameConfScreen_txtFieldConfNum = leTextFieldWidget_New();
    LastNameConfScreen_txtFieldConfNum->fn->setPosition(LastNameConfScreen_txtFieldConfNum, 190, 375);
    LastNameConfScreen_txtFieldConfNum->fn->setSize(LastNameConfScreen_txtFieldConfNum, 900, 60);
    LastNameConfScreen_txtFieldConfNum->fn->setScheme(LastNameConfScreen_txtFieldConfNum, &KioskSchemeText);
    LastNameConfScreen_txtFieldConfNum->fn->setBorderType(LastNameConfScreen_txtFieldConfNum, LE_WIDGET_BORDER_LINE);
    LastNameConfScreen_txtFieldConfNum->fn->setHAlignment(LastNameConfScreen_txtFieldConfNum, LE_HALIGN_LEFT);
    LastNameConfScreen_txtFieldConfNum->fn->setHintString(LastNameConfScreen_txtFieldConfNum, (leString*)&string_strEnterConf);
    LastNameConfScreen_txtFieldConfNum->fn->setFont(LastNameConfScreen_txtFieldConfNum, (leFont*)&Lora24);
    LastNameConfScreen_txtFieldConfNum->fn->setFocusChangedEventCallback(LastNameConfScreen_txtFieldConfNum, event_LastNameConfScreen_txtFieldConfNum_OnFocusChanged);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_txtFieldConfNum);

    LastNameConfScreen_LabelWidget_1 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_1->fn->setPosition(LastNameConfScreen_LabelWidget_1, 851, 0);
    LastNameConfScreen_LabelWidget_1->fn->setSize(LastNameConfScreen_LabelWidget_1, 416, 70);
    LastNameConfScreen_LabelWidget_1->fn->setScheme(LastNameConfScreen_LabelWidget_1, &KioskSchemeText);
    LastNameConfScreen_LabelWidget_1->fn->setBackgroundType(LastNameConfScreen_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_1->fn->setString(LastNameConfScreen_LabelWidget_1, (leString*)&string_strNameSmall);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_LabelWidget_1);

    LastNameConfScreen_imgMGS = leImageWidget_New();
    LastNameConfScreen_imgMGS->fn->setPosition(LastNameConfScreen_imgMGS, 3, 6);
    LastNameConfScreen_imgMGS->fn->setSize(LastNameConfScreen_imgMGS, 183, 53);
    LastNameConfScreen_imgMGS->fn->setBackgroundType(LastNameConfScreen_imgMGS, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_imgMGS->fn->setBorderType(LastNameConfScreen_imgMGS, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_imgMGS->fn->setImage(LastNameConfScreen_imgMGS, (leImage*)&MGS_40h);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_imgMGS);

    LastNameConfScreen_ImageWidget_1_0 = leImageWidget_New();
    LastNameConfScreen_ImageWidget_1_0->fn->setPosition(LastNameConfScreen_ImageWidget_1_0, 1338, 488);
    LastNameConfScreen_ImageWidget_1_0->fn->setSize(LastNameConfScreen_ImageWidget_1_0, 800, 140);
    LastNameConfScreen_ImageWidget_1_0->fn->setBackgroundType(LastNameConfScreen_ImageWidget_1_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_ImageWidget_1_0->fn->setBorderType(LastNameConfScreen_ImageWidget_1_0, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_ImageWidget_1_0->fn->setVAlignment(LastNameConfScreen_ImageWidget_1_0, LE_VALIGN_TOP);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_ImageWidget_1_0);

    LastNameConfScreen_btnContinue = leButtonWidget_New();
    LastNameConfScreen_btnContinue->fn->setPosition(LastNameConfScreen_btnContinue, 190, 680);
    LastNameConfScreen_btnContinue->fn->setSize(LastNameConfScreen_btnContinue, 900, 89);
    LastNameConfScreen_btnContinue->fn->setScheme(LastNameConfScreen_btnContinue, &KioskScheme);
    LastNameConfScreen_btnContinue->fn->setBorderType(LastNameConfScreen_btnContinue, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_btnContinue->fn->setMargins(LastNameConfScreen_btnContinue, 0, 0, 0, 0);
    LastNameConfScreen_btnContinue->fn->setString(LastNameConfScreen_btnContinue, (leString*)&string_strContinue);
    LastNameConfScreen_btnContinue->fn->setReleasedEventCallback(LastNameConfScreen_btnContinue, event_LastNameConfScreen_btnContinue_OnReleased);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_btnContinue);

    LastNameConfScreen_LabelWidget_3 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_3->fn->setPosition(LastNameConfScreen_LabelWidget_3, 191, 253);
    LastNameConfScreen_LabelWidget_3->fn->setScheme(LastNameConfScreen_LabelWidget_3, &BlackScheme);
    LastNameConfScreen_LabelWidget_3->fn->setBackgroundType(LastNameConfScreen_LabelWidget_3, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_3->fn->setString(LastNameConfScreen_LabelWidget_3, (leString*)&string_strLastName);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_LabelWidget_3);

    LastNameConfScreen_LabelWidget_3_0 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_3_0->fn->setPosition(LastNameConfScreen_LabelWidget_3_0, 190, 349);
    LastNameConfScreen_LabelWidget_3_0->fn->setSize(LastNameConfScreen_LabelWidget_3_0, 170, 25);
    LastNameConfScreen_LabelWidget_3_0->fn->setScheme(LastNameConfScreen_LabelWidget_3_0, &BlackScheme);
    LastNameConfScreen_LabelWidget_3_0->fn->setBackgroundType(LastNameConfScreen_LabelWidget_3_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_3_0->fn->setString(LastNameConfScreen_LabelWidget_3_0, (leString*)&string_strConfNum);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_LabelWidget_3_0);

    LastNameConfScreen_pnlKeyboard = leWidget_New();
    LastNameConfScreen_pnlKeyboard->fn->setPosition(LastNameConfScreen_pnlKeyboard, 0, 800);
    LastNameConfScreen_pnlKeyboard->fn->setSize(LastNameConfScreen_pnlKeyboard, 1280, 360);
    LastNameConfScreen_pnlKeyboard->fn->setScheme(LastNameConfScreen_pnlKeyboard, &KeyboardBack);
    LastNameConfScreen_pnlKeyboard->fn->setBackgroundType(LastNameConfScreen_pnlKeyboard, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_pnlKeyboard);

    LastNameConfScreen_PanelWidget_0_0 = leWidget_New();
    LastNameConfScreen_PanelWidget_0_0->fn->setPosition(LastNameConfScreen_PanelWidget_0_0, 164, 0);
    LastNameConfScreen_PanelWidget_0_0->fn->setSize(LastNameConfScreen_PanelWidget_0_0, 955, 360);
    LastNameConfScreen_PanelWidget_0_0->fn->setScheme(LastNameConfScreen_PanelWidget_0_0, &KeyboardBack);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_PanelWidget_0_0);

    LastNameConfScreen_keysRow1 = leKeyPadWidget_New(1, 11);
    LastNameConfScreen_keysRow1->fn->setPosition(LastNameConfScreen_keysRow1, 180, 14);
    LastNameConfScreen_keysRow1->fn->setSize(LastNameConfScreen_keysRow1, 920, 80);
    LastNameConfScreen_keysRow1->fn->setScheme(LastNameConfScreen_keysRow1, &KeyboardBack);
    LastNameConfScreen_keysRow1->fn->setBackgroundType(LastNameConfScreen_keysRow1, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1->fn->setBorderType(LastNameConfScreen_keysRow1, LE_WIDGET_BORDER_NONE);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_0 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 0);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 0, (leString*)&string_strq);
    LastNameConfScreen_keysRow1_cell_0_0->fn->setString(LastNameConfScreen_keysRow1_cell_0_0, (leString*)&string_strq);
    LastNameConfScreen_keysRow1_cell_0_0->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_0, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_0->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_0, &Key);
    LastNameConfScreen_keysRow1_cell_0_0->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_0->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_1 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 1);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 1, (leString*)&string_strw);
    LastNameConfScreen_keysRow1_cell_0_1->fn->setString(LastNameConfScreen_keysRow1_cell_0_1, (leString*)&string_strw);
    LastNameConfScreen_keysRow1_cell_0_1->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_1, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_1->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_1, &Key);
    LastNameConfScreen_keysRow1_cell_0_1->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_1->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_2 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 2);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 2, (leString*)&string_stre);
    LastNameConfScreen_keysRow1_cell_0_2->fn->setString(LastNameConfScreen_keysRow1_cell_0_2, (leString*)&string_stre);
    LastNameConfScreen_keysRow1_cell_0_2->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_2, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_2->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_2, &Key);
    LastNameConfScreen_keysRow1_cell_0_2->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_2->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_3 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 3);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 3, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 3, (leString*)&string_strr);
    LastNameConfScreen_keysRow1_cell_0_3->fn->setString(LastNameConfScreen_keysRow1_cell_0_3, (leString*)&string_strr);
    LastNameConfScreen_keysRow1_cell_0_3->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_3, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_3->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_3, &Key);
    LastNameConfScreen_keysRow1_cell_0_3->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_3->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_4 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 4);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 4, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 4, (leString*)&string_strt);
    LastNameConfScreen_keysRow1_cell_0_4->fn->setString(LastNameConfScreen_keysRow1_cell_0_4, (leString*)&string_strt);
    LastNameConfScreen_keysRow1_cell_0_4->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_4, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_4->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_4, &Key);
    LastNameConfScreen_keysRow1_cell_0_4->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_4->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_5 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 5);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 5, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 5, (leString*)&string_stry);
    LastNameConfScreen_keysRow1_cell_0_5->fn->setString(LastNameConfScreen_keysRow1_cell_0_5, (leString*)&string_stry);
    LastNameConfScreen_keysRow1_cell_0_5->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_5, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_5->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_5, &Key);
    LastNameConfScreen_keysRow1_cell_0_5->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_5->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_6 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 6);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 6, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 6, (leString*)&string_stru);
    LastNameConfScreen_keysRow1_cell_0_6->fn->setString(LastNameConfScreen_keysRow1_cell_0_6, (leString*)&string_stru);
    LastNameConfScreen_keysRow1_cell_0_6->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_6, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_6->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_6, &Key);
    LastNameConfScreen_keysRow1_cell_0_6->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_6->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_7 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 7);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 7, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 7, (leString*)&string_stri);
    LastNameConfScreen_keysRow1_cell_0_7->fn->setString(LastNameConfScreen_keysRow1_cell_0_7, (leString*)&string_stri);
    LastNameConfScreen_keysRow1_cell_0_7->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_7, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_7->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_7, &Key);
    LastNameConfScreen_keysRow1_cell_0_7->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_7, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_7->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_7, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_8 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 8);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 8, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 8, (leString*)&string_stro);
    LastNameConfScreen_keysRow1_cell_0_8->fn->setString(LastNameConfScreen_keysRow1_cell_0_8, (leString*)&string_stro);
    LastNameConfScreen_keysRow1_cell_0_8->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_8, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_8->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_8, &Key);
    LastNameConfScreen_keysRow1_cell_0_8->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_8, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_8->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_8, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_9 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 9);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 9, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, 9, (leString*)&string_strp);
    LastNameConfScreen_keysRow1_cell_0_9->fn->setString(LastNameConfScreen_keysRow1_cell_0_9, (leString*)&string_strp);
    LastNameConfScreen_keysRow1_cell_0_9->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_9, &KeyPressed);
    LastNameConfScreen_keysRow1_cell_0_9->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_9, &Key);
    LastNameConfScreen_keysRow1_cell_0_9->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_9, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow1_cell_0_9->fn->setImagePosition(LastNameConfScreen_keysRow1_cell_0_9, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow1_cell_0_10 = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, 10);
    LastNameConfScreen_keysRow1->fn->setKeyAction(LastNameConfScreen_keysRow1, 0, 10, LE_KEYPAD_CELL_ACTION_BACKSPACE);
    LastNameConfScreen_keysRow1_cell_0_10->fn->setPressedImage(LastNameConfScreen_keysRow1_cell_0_10, &BackspaceKeyPressed);
    LastNameConfScreen_keysRow1_cell_0_10->fn->setReleasedImage(LastNameConfScreen_keysRow1_cell_0_10, &BackspaceKey);
    LastNameConfScreen_keysRow1_cell_0_10->fn->setBackgroundType(LastNameConfScreen_keysRow1_cell_0_10, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keysRow1);

    LastNameConfScreen_keysRow2 = leKeyPadWidget_New(1, 9);
    LastNameConfScreen_keysRow2->fn->setPosition(LastNameConfScreen_keysRow2, 219, 99);
    LastNameConfScreen_keysRow2->fn->setSize(LastNameConfScreen_keysRow2, 756, 80);
    LastNameConfScreen_keysRow2->fn->setScheme(LastNameConfScreen_keysRow2, &KeyboardBack);
    LastNameConfScreen_keysRow2->fn->setBackgroundType(LastNameConfScreen_keysRow2, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2->fn->setBorderType(LastNameConfScreen_keysRow2, LE_WIDGET_BORDER_NONE);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_0 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 0);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 0, (leString*)&string_stra);
    LastNameConfScreen_keysRow2_cell_0_0->fn->setString(LastNameConfScreen_keysRow2_cell_0_0, (leString*)&string_stra);
    LastNameConfScreen_keysRow2_cell_0_0->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_0, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_0->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_0, &Key);
    LastNameConfScreen_keysRow2_cell_0_0->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_0->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_1 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 1);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 1, (leString*)&string_strs);
    LastNameConfScreen_keysRow2_cell_0_1->fn->setString(LastNameConfScreen_keysRow2_cell_0_1, (leString*)&string_strs);
    LastNameConfScreen_keysRow2_cell_0_1->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_1, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_1->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_1, &Key);
    LastNameConfScreen_keysRow2_cell_0_1->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_1->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_2 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 2);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 2, (leString*)&string_strd);
    LastNameConfScreen_keysRow2_cell_0_2->fn->setString(LastNameConfScreen_keysRow2_cell_0_2, (leString*)&string_strd);
    LastNameConfScreen_keysRow2_cell_0_2->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_2, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_2->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_2, &Key);
    LastNameConfScreen_keysRow2_cell_0_2->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_2->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_3 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 3);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 3, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 3, (leString*)&string_strf);
    LastNameConfScreen_keysRow2_cell_0_3->fn->setString(LastNameConfScreen_keysRow2_cell_0_3, (leString*)&string_strf);
    LastNameConfScreen_keysRow2_cell_0_3->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_3, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_3->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_3, &Key);
    LastNameConfScreen_keysRow2_cell_0_3->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_3->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_4 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 4);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 4, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 4, (leString*)&string_strg);
    LastNameConfScreen_keysRow2_cell_0_4->fn->setString(LastNameConfScreen_keysRow2_cell_0_4, (leString*)&string_strg);
    LastNameConfScreen_keysRow2_cell_0_4->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_4, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_4->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_4, &Key);
    LastNameConfScreen_keysRow2_cell_0_4->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_4->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_5 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 5);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 5, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 5, (leString*)&string_strh);
    LastNameConfScreen_keysRow2_cell_0_5->fn->setString(LastNameConfScreen_keysRow2_cell_0_5, (leString*)&string_strh);
    LastNameConfScreen_keysRow2_cell_0_5->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_5, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_5->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_5, &Key);
    LastNameConfScreen_keysRow2_cell_0_5->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_5->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_6 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 6);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 6, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 6, (leString*)&string_strj);
    LastNameConfScreen_keysRow2_cell_0_6->fn->setString(LastNameConfScreen_keysRow2_cell_0_6, (leString*)&string_strj);
    LastNameConfScreen_keysRow2_cell_0_6->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_6, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_6->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_6, &Key);
    LastNameConfScreen_keysRow2_cell_0_6->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_6->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_7 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 7);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 7, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 7, (leString*)&string_strk);
    LastNameConfScreen_keysRow2_cell_0_7->fn->setString(LastNameConfScreen_keysRow2_cell_0_7, (leString*)&string_strk);
    LastNameConfScreen_keysRow2_cell_0_7->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_7, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_7->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_7, &Key);
    LastNameConfScreen_keysRow2_cell_0_7->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_7, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_7->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_7, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow2_cell_0_8 = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, 8);
    LastNameConfScreen_keysRow2->fn->setKeyAction(LastNameConfScreen_keysRow2, 0, 8, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, 8, (leString*)&string_strl);
    LastNameConfScreen_keysRow2_cell_0_8->fn->setString(LastNameConfScreen_keysRow2_cell_0_8, (leString*)&string_strl);
    LastNameConfScreen_keysRow2_cell_0_8->fn->setPressedImage(LastNameConfScreen_keysRow2_cell_0_8, &KeyPressed);
    LastNameConfScreen_keysRow2_cell_0_8->fn->setReleasedImage(LastNameConfScreen_keysRow2_cell_0_8, &Key);
    LastNameConfScreen_keysRow2_cell_0_8->fn->setBackgroundType(LastNameConfScreen_keysRow2_cell_0_8, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow2_cell_0_8->fn->setImagePosition(LastNameConfScreen_keysRow2_cell_0_8, LE_RELATIVE_POSITION_BEHIND);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keysRow2);

    LastNameConfScreen_keysRow3 = leKeyPadWidget_New(1, 9);
    LastNameConfScreen_keysRow3->fn->setPosition(LastNameConfScreen_keysRow3, 264, 183);
    LastNameConfScreen_keysRow3->fn->setSize(LastNameConfScreen_keysRow3, 752, 80);
    LastNameConfScreen_keysRow3->fn->setScheme(LastNameConfScreen_keysRow3, &KeyboardBack);
    LastNameConfScreen_keysRow3->fn->setBackgroundType(LastNameConfScreen_keysRow3, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3->fn->setBorderType(LastNameConfScreen_keysRow3, LE_WIDGET_BORDER_NONE);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_0 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 0);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 0, (leString*)&string_strz);
    LastNameConfScreen_keysRow3_cell_0_0->fn->setString(LastNameConfScreen_keysRow3_cell_0_0, (leString*)&string_strz);
    LastNameConfScreen_keysRow3_cell_0_0->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_0, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_0->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_0, &Key);
    LastNameConfScreen_keysRow3_cell_0_0->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_0->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_1 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 1);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 1, (leString*)&string_strx);
    LastNameConfScreen_keysRow3_cell_0_1->fn->setString(LastNameConfScreen_keysRow3_cell_0_1, (leString*)&string_strx);
    LastNameConfScreen_keysRow3_cell_0_1->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_1, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_1->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_1, &Key);
    LastNameConfScreen_keysRow3_cell_0_1->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_1->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_2 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 2);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 2, (leString*)&string_strc);
    LastNameConfScreen_keysRow3_cell_0_2->fn->setString(LastNameConfScreen_keysRow3_cell_0_2, (leString*)&string_strc);
    LastNameConfScreen_keysRow3_cell_0_2->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_2, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_2->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_2, &Key);
    LastNameConfScreen_keysRow3_cell_0_2->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_2->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_3 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 3);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 3, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 3, (leString*)&string_strv);
    LastNameConfScreen_keysRow3_cell_0_3->fn->setString(LastNameConfScreen_keysRow3_cell_0_3, (leString*)&string_strv);
    LastNameConfScreen_keysRow3_cell_0_3->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_3, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_3->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_3, &Key);
    LastNameConfScreen_keysRow3_cell_0_3->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_3->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_4 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 4);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 4, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 4, (leString*)&string_strb);
    LastNameConfScreen_keysRow3_cell_0_4->fn->setString(LastNameConfScreen_keysRow3_cell_0_4, (leString*)&string_strb);
    LastNameConfScreen_keysRow3_cell_0_4->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_4, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_4->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_4, &Key);
    LastNameConfScreen_keysRow3_cell_0_4->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_4->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_5 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 5);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 5, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 5, (leString*)&string_strn);
    LastNameConfScreen_keysRow3_cell_0_5->fn->setString(LastNameConfScreen_keysRow3_cell_0_5, (leString*)&string_strn);
    LastNameConfScreen_keysRow3_cell_0_5->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_5, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_5->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_5, &Key);
    LastNameConfScreen_keysRow3_cell_0_5->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_5->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_6 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 6);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 6, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 6, (leString*)&string_strm);
    LastNameConfScreen_keysRow3_cell_0_6->fn->setString(LastNameConfScreen_keysRow3_cell_0_6, (leString*)&string_strm);
    LastNameConfScreen_keysRow3_cell_0_6->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_6, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_6->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_6, &Key);
    LastNameConfScreen_keysRow3_cell_0_6->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_6->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_7 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 7);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 7, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 7, (leString*)&string_strexc);
    LastNameConfScreen_keysRow3_cell_0_7->fn->setString(LastNameConfScreen_keysRow3_cell_0_7, (leString*)&string_strexc);
    LastNameConfScreen_keysRow3_cell_0_7->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_7, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_7->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_7, &Key);
    LastNameConfScreen_keysRow3_cell_0_7->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_7, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_7->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_7, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* LastNameConfScreen_keysRow3_cell_0_8 = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, 8);
    LastNameConfScreen_keysRow3->fn->setKeyAction(LastNameConfScreen_keysRow3, 0, 8, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, 8, (leString*)&string_strqs);
    LastNameConfScreen_keysRow3_cell_0_8->fn->setString(LastNameConfScreen_keysRow3_cell_0_8, (leString*)&string_strqs);
    LastNameConfScreen_keysRow3_cell_0_8->fn->setPressedImage(LastNameConfScreen_keysRow3_cell_0_8, &KeyPressed);
    LastNameConfScreen_keysRow3_cell_0_8->fn->setReleasedImage(LastNameConfScreen_keysRow3_cell_0_8, &Key);
    LastNameConfScreen_keysRow3_cell_0_8->fn->setBackgroundType(LastNameConfScreen_keysRow3_cell_0_8, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysRow3_cell_0_8->fn->setImagePosition(LastNameConfScreen_keysRow3_cell_0_8, LE_RELATIVE_POSITION_BEHIND);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keysRow3);

    LastNameConfScreen_keysBtmLeft = leKeyPadWidget_New(1, 1);
    LastNameConfScreen_keysBtmLeft->fn->setPosition(LastNameConfScreen_keysBtmLeft, 264, 268);
    LastNameConfScreen_keysBtmLeft->fn->setSize(LastNameConfScreen_keysBtmLeft, 84, 80);
    LastNameConfScreen_keysBtmLeft->fn->setScheme(LastNameConfScreen_keysBtmLeft, &KeyboardBack);
    LastNameConfScreen_keysBtmLeft->fn->setBackgroundType(LastNameConfScreen_keysBtmLeft, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysBtmLeft->fn->setBorderType(LastNameConfScreen_keysBtmLeft, LE_WIDGET_BORDER_NONE);
    leButtonWidget* LastNameConfScreen_keysBtmLeft_cell_0_0 = LastNameConfScreen_keysBtmLeft->fn->getCellButton(LastNameConfScreen_keysBtmLeft, 0, 0);
    LastNameConfScreen_keysBtmLeft->fn->setKeyAction(LastNameConfScreen_keysBtmLeft, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysBtmLeft->fn->setKeyValue(LastNameConfScreen_keysBtmLeft, 0, 0, (leString*)&string_strCma);
    LastNameConfScreen_keysBtmLeft_cell_0_0->fn->setString(LastNameConfScreen_keysBtmLeft_cell_0_0, (leString*)&string_strCma);
    LastNameConfScreen_keysBtmLeft_cell_0_0->fn->setPressedImage(LastNameConfScreen_keysBtmLeft_cell_0_0, &KeyPressed);
    LastNameConfScreen_keysBtmLeft_cell_0_0->fn->setReleasedImage(LastNameConfScreen_keysBtmLeft_cell_0_0, &Key);
    LastNameConfScreen_keysBtmLeft_cell_0_0->fn->setBackgroundType(LastNameConfScreen_keysBtmLeft_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysBtmLeft_cell_0_0->fn->setImagePosition(LastNameConfScreen_keysBtmLeft_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keysBtmLeft);

    LastNameConfScreen_keysBtmRight = leKeyPadWidget_New(1, 1);
    LastNameConfScreen_keysBtmRight->fn->setPosition(LastNameConfScreen_keysBtmRight, 931, 268);
    LastNameConfScreen_keysBtmRight->fn->setSize(LastNameConfScreen_keysBtmRight, 84, 80);
    LastNameConfScreen_keysBtmRight->fn->setScheme(LastNameConfScreen_keysBtmRight, &KeyboardBack);
    LastNameConfScreen_keysBtmRight->fn->setBackgroundType(LastNameConfScreen_keysBtmRight, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysBtmRight->fn->setBorderType(LastNameConfScreen_keysBtmRight, LE_WIDGET_BORDER_NONE);
    leButtonWidget* LastNameConfScreen_keysBtmRight_cell_0_0 = LastNameConfScreen_keysBtmRight->fn->getCellButton(LastNameConfScreen_keysBtmRight, 0, 0);
    LastNameConfScreen_keysBtmRight->fn->setKeyAction(LastNameConfScreen_keysBtmRight, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keysBtmRight->fn->setKeyValue(LastNameConfScreen_keysBtmRight, 0, 0, (leString*)&string_strDot);
    LastNameConfScreen_keysBtmRight_cell_0_0->fn->setString(LastNameConfScreen_keysBtmRight_cell_0_0, (leString*)&string_strDot);
    LastNameConfScreen_keysBtmRight_cell_0_0->fn->setPressedImage(LastNameConfScreen_keysBtmRight_cell_0_0, &KeyPressed);
    LastNameConfScreen_keysBtmRight_cell_0_0->fn->setReleasedImage(LastNameConfScreen_keysBtmRight_cell_0_0, &Key);
    LastNameConfScreen_keysBtmRight_cell_0_0->fn->setBackgroundType(LastNameConfScreen_keysBtmRight_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keysBtmRight_cell_0_0->fn->setImagePosition(LastNameConfScreen_keysBtmRight_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keysBtmRight);

    LastNameConfScreen_keySpace = leKeyPadWidget_New(1, 1);
    LastNameConfScreen_keySpace->fn->setPosition(LastNameConfScreen_keySpace, 350, 268);
    LastNameConfScreen_keySpace->fn->setSize(LastNameConfScreen_keySpace, 580, 80);
    LastNameConfScreen_keySpace->fn->setScheme(LastNameConfScreen_keySpace, &KeyboardBack);
    LastNameConfScreen_keySpace->fn->setBackgroundType(LastNameConfScreen_keySpace, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keySpace->fn->setBorderType(LastNameConfScreen_keySpace, LE_WIDGET_BORDER_NONE);
    leButtonWidget* LastNameConfScreen_keySpace_cell_0_0 = LastNameConfScreen_keySpace->fn->getCellButton(LastNameConfScreen_keySpace, 0, 0);
    LastNameConfScreen_keySpace->fn->setKeyAction(LastNameConfScreen_keySpace, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    LastNameConfScreen_keySpace->fn->setKeyValue(LastNameConfScreen_keySpace, 0, 0, (leString*)&string_strSpace);
    LastNameConfScreen_keySpace_cell_0_0->fn->setPressedImage(LastNameConfScreen_keySpace_cell_0_0, &spacekeypressed);
    LastNameConfScreen_keySpace_cell_0_0->fn->setReleasedImage(LastNameConfScreen_keySpace_cell_0_0, &spacekey);
    LastNameConfScreen_keySpace_cell_0_0->fn->setBackgroundType(LastNameConfScreen_keySpace_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keySpace);

    LastNameConfScreen_keyShiftLeft = leButtonWidget_New();
    LastNameConfScreen_keyShiftLeft->fn->setPosition(LastNameConfScreen_keyShiftLeft, 182, 184);
    LastNameConfScreen_keyShiftLeft->fn->setSize(LastNameConfScreen_keyShiftLeft, 80, 80);
    LastNameConfScreen_keyShiftLeft->fn->setBackgroundType(LastNameConfScreen_keyShiftLeft, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keyShiftLeft->fn->setBorderType(LastNameConfScreen_keyShiftLeft, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_keyShiftLeft->fn->setPressedImage(LastNameConfScreen_keyShiftLeft, (leImage*)&ShiftKeyPressed);
    LastNameConfScreen_keyShiftLeft->fn->setReleasedImage(LastNameConfScreen_keyShiftLeft, (leImage*)&ShiftKey);
    LastNameConfScreen_keyShiftLeft->fn->setPressedEventCallback(LastNameConfScreen_keyShiftLeft, event_LastNameConfScreen_keyShiftLeft_OnPressed);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keyShiftLeft);

    LastNameConfScreen_keyShiftRight = leButtonWidget_New();
    LastNameConfScreen_keyShiftRight->fn->setPosition(LastNameConfScreen_keyShiftRight, 1018, 184);
    LastNameConfScreen_keyShiftRight->fn->setSize(LastNameConfScreen_keyShiftRight, 80, 80);
    LastNameConfScreen_keyShiftRight->fn->setBackgroundType(LastNameConfScreen_keyShiftRight, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keyShiftRight->fn->setBorderType(LastNameConfScreen_keyShiftRight, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_keyShiftRight->fn->setPressedImage(LastNameConfScreen_keyShiftRight, (leImage*)&ShiftKeyPressed);
    LastNameConfScreen_keyShiftRight->fn->setReleasedImage(LastNameConfScreen_keyShiftRight, (leImage*)&ShiftKey);
    LastNameConfScreen_keyShiftRight->fn->setPressedEventCallback(LastNameConfScreen_keyShiftRight, event_LastNameConfScreen_keyShiftRight_OnPressed);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keyShiftRight);

    LastNameConfScreen_keyEnter = leButtonWidget_New();
    LastNameConfScreen_keyEnter->fn->setPosition(LastNameConfScreen_keyEnter, 976, 99);
    LastNameConfScreen_keyEnter->fn->setSize(LastNameConfScreen_keyEnter, 120, 80);
    LastNameConfScreen_keyEnter->fn->setBackgroundType(LastNameConfScreen_keyEnter, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keyEnter->fn->setBorderType(LastNameConfScreen_keyEnter, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_keyEnter->fn->setPressedImage(LastNameConfScreen_keyEnter, (leImage*)&EnterKeyPressed);
    LastNameConfScreen_keyEnter->fn->setReleasedImage(LastNameConfScreen_keyEnter, (leImage*)&EnterKey);
    LastNameConfScreen_keyEnter->fn->setReleasedEventCallback(LastNameConfScreen_keyEnter, event_LastNameConfScreen_keyEnter_OnReleased);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keyEnter);

    LastNameConfScreen_keyNumLeft = leButtonWidget_New();
    LastNameConfScreen_keyNumLeft->fn->setPosition(LastNameConfScreen_keyNumLeft, 181, 268);
    LastNameConfScreen_keyNumLeft->fn->setSize(LastNameConfScreen_keyNumLeft, 83, 80);
    LastNameConfScreen_keyNumLeft->fn->setScheme(LastNameConfScreen_keyNumLeft, &KeyboardBack);
    LastNameConfScreen_keyNumLeft->fn->setBackgroundType(LastNameConfScreen_keyNumLeft, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keyNumLeft->fn->setBorderType(LastNameConfScreen_keyNumLeft, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_keyNumLeft->fn->setString(LastNameConfScreen_keyNumLeft, (leString*)&string_strNum);
    LastNameConfScreen_keyNumLeft->fn->setPressedImage(LastNameConfScreen_keyNumLeft, (leImage*)&KeyPressed);
    LastNameConfScreen_keyNumLeft->fn->setReleasedImage(LastNameConfScreen_keyNumLeft, (leImage*)&Key);
    LastNameConfScreen_keyNumLeft->fn->setImagePosition(LastNameConfScreen_keyNumLeft, LE_RELATIVE_POSITION_BEHIND);
    LastNameConfScreen_keyNumLeft->fn->setPressedEventCallback(LastNameConfScreen_keyNumLeft, event_LastNameConfScreen_keyNumLeft_OnPressed);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keyNumLeft);

    LastNameConfScreen_keyNumRight = leButtonWidget_New();
    LastNameConfScreen_keyNumRight->fn->setPosition(LastNameConfScreen_keyNumRight, 1017, 268);
    LastNameConfScreen_keyNumRight->fn->setSize(LastNameConfScreen_keyNumRight, 83, 80);
    LastNameConfScreen_keyNumRight->fn->setScheme(LastNameConfScreen_keyNumRight, &KeyboardBack);
    LastNameConfScreen_keyNumRight->fn->setBackgroundType(LastNameConfScreen_keyNumRight, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_keyNumRight->fn->setBorderType(LastNameConfScreen_keyNumRight, LE_WIDGET_BORDER_NONE);
    LastNameConfScreen_keyNumRight->fn->setString(LastNameConfScreen_keyNumRight, (leString*)&string_strNum);
    LastNameConfScreen_keyNumRight->fn->setPressedImage(LastNameConfScreen_keyNumRight, (leImage*)&KeyPressed);
    LastNameConfScreen_keyNumRight->fn->setReleasedImage(LastNameConfScreen_keyNumRight, (leImage*)&Key);
    LastNameConfScreen_keyNumRight->fn->setImagePosition(LastNameConfScreen_keyNumRight, LE_RELATIVE_POSITION_BEHIND);
    LastNameConfScreen_keyNumRight->fn->setPressedEventCallback(LastNameConfScreen_keyNumRight, event_LastNameConfScreen_keyNumRight_OnPressed);
    LastNameConfScreen_pnlKeyboard->fn->addChild(LastNameConfScreen_pnlKeyboard, (leWidget*)LastNameConfScreen_keyNumRight);

    LastNameConfScreen_pnlError = leWidget_New();
    LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlError, -540, 100);
    LastNameConfScreen_pnlError->fn->setSize(LastNameConfScreen_pnlError, 540, 260);
    LastNameConfScreen_pnlError->fn->setScheme(LastNameConfScreen_pnlError, &KeyboardBack);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_pnlError);

    LastNameConfScreen_LabelWidget_2 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_2->fn->setPosition(LastNameConfScreen_LabelWidget_2, -1, 60);
    LastNameConfScreen_LabelWidget_2->fn->setSize(LastNameConfScreen_LabelWidget_2, 540, 75);
    LastNameConfScreen_LabelWidget_2->fn->setScheme(LastNameConfScreen_LabelWidget_2, &KeyboardBack);
    LastNameConfScreen_LabelWidget_2->fn->setBackgroundType(LastNameConfScreen_LabelWidget_2, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_2->fn->setHAlignment(LastNameConfScreen_LabelWidget_2, LE_HALIGN_CENTER);
    LastNameConfScreen_LabelWidget_2->fn->setString(LastNameConfScreen_LabelWidget_2, (leString*)&string_strErrorGuestInfo);
    LastNameConfScreen_pnlError->fn->addChild(LastNameConfScreen_pnlError, (leWidget*)LastNameConfScreen_LabelWidget_2);

    LastNameConfScreen_LabelWidget_4 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_4->fn->setPosition(LastNameConfScreen_LabelWidget_4, 174, 23);
    LastNameConfScreen_LabelWidget_4->fn->setSize(LastNameConfScreen_LabelWidget_4, 170, 44);
    LastNameConfScreen_LabelWidget_4->fn->setScheme(LastNameConfScreen_LabelWidget_4, &KeyboardBack);
    LastNameConfScreen_LabelWidget_4->fn->setBackgroundType(LastNameConfScreen_LabelWidget_4, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_4->fn->setHAlignment(LastNameConfScreen_LabelWidget_4, LE_HALIGN_CENTER);
    LastNameConfScreen_LabelWidget_4->fn->setString(LastNameConfScreen_LabelWidget_4, (leString*)&string_strSorry);
    LastNameConfScreen_pnlError->fn->addChild(LastNameConfScreen_pnlError, (leWidget*)LastNameConfScreen_LabelWidget_4);

    LastNameConfScreen_btnErrorBack = leButtonWidget_New();
    LastNameConfScreen_btnErrorBack->fn->setPosition(LastNameConfScreen_btnErrorBack, 180, 144);
    LastNameConfScreen_btnErrorBack->fn->setSize(LastNameConfScreen_btnErrorBack, 164, 72);
    LastNameConfScreen_btnErrorBack->fn->setScheme(LastNameConfScreen_btnErrorBack, &KioskScheme);
    LastNameConfScreen_btnErrorBack->fn->setBackgroundType(LastNameConfScreen_btnErrorBack, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_btnErrorBack->fn->setBorderType(LastNameConfScreen_btnErrorBack, LE_WIDGET_BORDER_LINE);
    LastNameConfScreen_btnErrorBack->fn->setString(LastNameConfScreen_btnErrorBack, (leString*)&string_strOk);
    LastNameConfScreen_btnErrorBack->fn->setReleasedEventCallback(LastNameConfScreen_btnErrorBack, event_LastNameConfScreen_btnErrorBack_OnReleased);
    LastNameConfScreen_pnlError->fn->addChild(LastNameConfScreen_pnlError, (leWidget*)LastNameConfScreen_btnErrorBack);

    LastNameConfScreen_pnlSuccess = leWidget_New();
    LastNameConfScreen_pnlSuccess->fn->setPosition(LastNameConfScreen_pnlSuccess, -540, 363);
    LastNameConfScreen_pnlSuccess->fn->setSize(LastNameConfScreen_pnlSuccess, 540, 260);
    LastNameConfScreen_pnlSuccess->fn->setScheme(LastNameConfScreen_pnlSuccess, &KeyboardBack);
    root0->fn->addChild(root0, (leWidget*)LastNameConfScreen_pnlSuccess);

    LastNameConfScreen_LabelWidget_2_0 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_2_0->fn->setPosition(LastNameConfScreen_LabelWidget_2_0, -1, 60);
    LastNameConfScreen_LabelWidget_2_0->fn->setSize(LastNameConfScreen_LabelWidget_2_0, 540, 75);
    LastNameConfScreen_LabelWidget_2_0->fn->setScheme(LastNameConfScreen_LabelWidget_2_0, &KeyboardBack);
    LastNameConfScreen_LabelWidget_2_0->fn->setBackgroundType(LastNameConfScreen_LabelWidget_2_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_2_0->fn->setHAlignment(LastNameConfScreen_LabelWidget_2_0, LE_HALIGN_CENTER);
    LastNameConfScreen_LabelWidget_2_0->fn->setString(LastNameConfScreen_LabelWidget_2_0, (leString*)&string_strWelcom);
    LastNameConfScreen_pnlSuccess->fn->addChild(LastNameConfScreen_pnlSuccess, (leWidget*)LastNameConfScreen_LabelWidget_2_0);

    LastNameConfScreen_LabelWidget_4_0 = leLabelWidget_New();
    LastNameConfScreen_LabelWidget_4_0->fn->setPosition(LastNameConfScreen_LabelWidget_4_0, 162, 23);
    LastNameConfScreen_LabelWidget_4_0->fn->setSize(LastNameConfScreen_LabelWidget_4_0, 204, 44);
    LastNameConfScreen_LabelWidget_4_0->fn->setScheme(LastNameConfScreen_LabelWidget_4_0, &KeyboardBack);
    LastNameConfScreen_LabelWidget_4_0->fn->setBackgroundType(LastNameConfScreen_LabelWidget_4_0, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_LabelWidget_4_0->fn->setHAlignment(LastNameConfScreen_LabelWidget_4_0, LE_HALIGN_CENTER);
    LastNameConfScreen_LabelWidget_4_0->fn->setString(LastNameConfScreen_LabelWidget_4_0, (leString*)&string_strWelcome);
    LastNameConfScreen_pnlSuccess->fn->addChild(LastNameConfScreen_pnlSuccess, (leWidget*)LastNameConfScreen_LabelWidget_4_0);

    LastNameConfScreen_btnSuccessOk = leButtonWidget_New();
    LastNameConfScreen_btnSuccessOk->fn->setPosition(LastNameConfScreen_btnSuccessOk, 180, 144);
    LastNameConfScreen_btnSuccessOk->fn->setSize(LastNameConfScreen_btnSuccessOk, 164, 72);
    LastNameConfScreen_btnSuccessOk->fn->setScheme(LastNameConfScreen_btnSuccessOk, &KioskScheme);
    LastNameConfScreen_btnSuccessOk->fn->setBackgroundType(LastNameConfScreen_btnSuccessOk, LE_WIDGET_BACKGROUND_NONE);
    LastNameConfScreen_btnSuccessOk->fn->setBorderType(LastNameConfScreen_btnSuccessOk, LE_WIDGET_BORDER_LINE);
    LastNameConfScreen_btnSuccessOk->fn->setString(LastNameConfScreen_btnSuccessOk, (leString*)&string_strOk);
    LastNameConfScreen_btnSuccessOk->fn->setReleasedEventCallback(LastNameConfScreen_btnSuccessOk, event_LastNameConfScreen_btnSuccessOk_OnReleased);
    LastNameConfScreen_pnlSuccess->fn->addChild(LastNameConfScreen_pnlSuccess, (leWidget*)LastNameConfScreen_btnSuccessOk);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    LastNameConfScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_LastNameConfScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    LastNameConfScreen_OnUpdate(); // raise event
}

void screenHide_LastNameConfScreen(void)
{
    LastNameConfScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    LastNameConfScreen_BackgroundPanel = NULL;
    LastNameConfScreen_LabelWidget_0 = NULL;
    LastNameConfScreen_txtFieldLastName = NULL;
    LastNameConfScreen_txtFieldConfNum = NULL;
    LastNameConfScreen_LabelWidget_1 = NULL;
    LastNameConfScreen_imgMGS = NULL;
    LastNameConfScreen_ImageWidget_1_0 = NULL;
    LastNameConfScreen_btnContinue = NULL;
    LastNameConfScreen_LabelWidget_3 = NULL;
    LastNameConfScreen_LabelWidget_3_0 = NULL;
    LastNameConfScreen_pnlKeyboard = NULL;
    LastNameConfScreen_pnlError = NULL;
    LastNameConfScreen_pnlSuccess = NULL;
    LastNameConfScreen_PanelWidget_0_0 = NULL;
    LastNameConfScreen_keysRow1 = NULL;
    LastNameConfScreen_keysRow2 = NULL;
    LastNameConfScreen_keysRow3 = NULL;
    LastNameConfScreen_keysBtmLeft = NULL;
    LastNameConfScreen_keysBtmRight = NULL;
    LastNameConfScreen_keySpace = NULL;
    LastNameConfScreen_keyShiftLeft = NULL;
    LastNameConfScreen_keyShiftRight = NULL;
    LastNameConfScreen_keyEnter = NULL;
    LastNameConfScreen_keyNumLeft = NULL;
    LastNameConfScreen_keyNumRight = NULL;
    LastNameConfScreen_LabelWidget_2 = NULL;
    LastNameConfScreen_LabelWidget_4 = NULL;
    LastNameConfScreen_btnErrorBack = NULL;
    LastNameConfScreen_LabelWidget_2_0 = NULL;
    LastNameConfScreen_LabelWidget_4_0 = NULL;
    LastNameConfScreen_btnSuccessOk = NULL;


    showing = LE_FALSE;
}

void screenDestroy_LastNameConfScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_LastNameConfScreen(uint32_t lyrIdx)
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

