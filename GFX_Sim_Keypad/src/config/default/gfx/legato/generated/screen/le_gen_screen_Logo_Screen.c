#include "gfx/legato/generated/screen/le_gen_screen_Logo_Screen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Logo_Screen_BackgroundPanel;
leKeyPadWidget* Logo_Screen_KeyPadWidget;
leImageWidget* Logo_Screen_ImageWidget_Logo_1;
leImageWidget* Logo_Screen_ImageWidget_Logo_4;
leImageWidget* Logo_Screen_ImageWidget_Logo_6;
leImageWidget* Logo_Screen_ImageWidget_Logo_5;
leImageWidget* Logo_Screen_ImageWidget_Logo_2;
leImageWidget* Logo_Screen_ImageWidget_Logo_3;
leLabelWidget* Logo_Screen_LabelWidget_KeyPress;
leButtonWidget* Logo_Screen_ButtonWidget_TicTacToe;
leTextFieldWidget* Logo_Screen_TextFieldWidget;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Logo_Screen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Logo_Screen(void)
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

    Logo_Screen_BackgroundPanel = leWidget_New();
    Logo_Screen_BackgroundPanel->fn->setPosition(Logo_Screen_BackgroundPanel, 0, 0);
    Logo_Screen_BackgroundPanel->fn->setSize(Logo_Screen_BackgroundPanel, 800, 480);
    Logo_Screen_BackgroundPanel->fn->setScheme(Logo_Screen_BackgroundPanel, &BlueScheme);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_BackgroundPanel);

    Logo_Screen_KeyPadWidget = leKeyPadWidget_New(3, 2);
    Logo_Screen_KeyPadWidget->fn->setPosition(Logo_Screen_KeyPadWidget, 292, 166);
    Logo_Screen_KeyPadWidget->fn->setSize(Logo_Screen_KeyPadWidget, 200, 228);
    Logo_Screen_KeyPadWidget->fn->setScheme(Logo_Screen_KeyPadWidget, &RedScheme);
    Logo_Screen_KeyPadWidget->fn->setKeyPadActionTrigger(Logo_Screen_KeyPadWidget, LE_KEYPAD_TRIGGER_KEYPRESSED);
    leButtonWidget* Logo_Screen_KeyPadWidget_cell_0_0 = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 0, 0);
    Logo_Screen_KeyPadWidget->fn->setKeyAction(Logo_Screen_KeyPadWidget, 0, 0, LE_KEYPAD_CELL_ACTION_SET);
    Logo_Screen_KeyPadWidget->fn->setKeyValue(Logo_Screen_KeyPadWidget, 0, 0, (leString*)&string_No1);
    Logo_Screen_KeyPadWidget_cell_0_0->fn->setString(Logo_Screen_KeyPadWidget_cell_0_0, (leString*)&string_No1);
    Logo_Screen_KeyPadWidget_cell_0_0->fn->setPressedImage(Logo_Screen_KeyPadWidget_cell_0_0, &PressedImg2);
    Logo_Screen_KeyPadWidget_cell_0_0->fn->setReleasedImage(Logo_Screen_KeyPadWidget_cell_0_0, &ReleasedImg);
    Logo_Screen_KeyPadWidget_cell_0_0->fn->setBackgroundType(Logo_Screen_KeyPadWidget_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_KeyPadWidget_cell_0_0->fn->setBorderType(Logo_Screen_KeyPadWidget_cell_0_0, LE_WIDGET_BORDER_BEVEL);
    Logo_Screen_KeyPadWidget_cell_0_0->fn->setImagePosition(Logo_Screen_KeyPadWidget_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Logo_Screen_KeyPadWidget_cell_0_1 = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 0, 1);
    Logo_Screen_KeyPadWidget->fn->setKeyAction(Logo_Screen_KeyPadWidget, 0, 1, LE_KEYPAD_CELL_ACTION_SET);
    Logo_Screen_KeyPadWidget->fn->setKeyValue(Logo_Screen_KeyPadWidget, 0, 1, (leString*)&string_No2);
    Logo_Screen_KeyPadWidget_cell_0_1->fn->setString(Logo_Screen_KeyPadWidget_cell_0_1, (leString*)&string_No2);
    Logo_Screen_KeyPadWidget_cell_0_1->fn->setPressedImage(Logo_Screen_KeyPadWidget_cell_0_1, &PressedImg2);
    Logo_Screen_KeyPadWidget_cell_0_1->fn->setReleasedImage(Logo_Screen_KeyPadWidget_cell_0_1, &ReleasedImg);
    Logo_Screen_KeyPadWidget_cell_0_1->fn->setBackgroundType(Logo_Screen_KeyPadWidget_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_KeyPadWidget_cell_0_1->fn->setBorderType(Logo_Screen_KeyPadWidget_cell_0_1, LE_WIDGET_BORDER_BEVEL);
    Logo_Screen_KeyPadWidget_cell_0_1->fn->setImagePosition(Logo_Screen_KeyPadWidget_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Logo_Screen_KeyPadWidget_cell_1_0 = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 1, 0);
    Logo_Screen_KeyPadWidget->fn->setKeyAction(Logo_Screen_KeyPadWidget, 1, 0, LE_KEYPAD_CELL_ACTION_SET);
    Logo_Screen_KeyPadWidget->fn->setKeyValue(Logo_Screen_KeyPadWidget, 1, 0, (leString*)&string_No3);
    Logo_Screen_KeyPadWidget_cell_1_0->fn->setString(Logo_Screen_KeyPadWidget_cell_1_0, (leString*)&string_No3);
    Logo_Screen_KeyPadWidget_cell_1_0->fn->setPressedImage(Logo_Screen_KeyPadWidget_cell_1_0, &PressedImg2);
    Logo_Screen_KeyPadWidget_cell_1_0->fn->setReleasedImage(Logo_Screen_KeyPadWidget_cell_1_0, &ReleasedImg);
    Logo_Screen_KeyPadWidget_cell_1_0->fn->setBackgroundType(Logo_Screen_KeyPadWidget_cell_1_0, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_KeyPadWidget_cell_1_0->fn->setBorderType(Logo_Screen_KeyPadWidget_cell_1_0, LE_WIDGET_BORDER_BEVEL);
    Logo_Screen_KeyPadWidget_cell_1_0->fn->setImagePosition(Logo_Screen_KeyPadWidget_cell_1_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Logo_Screen_KeyPadWidget_cell_1_1 = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 1, 1);
    Logo_Screen_KeyPadWidget->fn->setKeyAction(Logo_Screen_KeyPadWidget, 1, 1, LE_KEYPAD_CELL_ACTION_SET);
    Logo_Screen_KeyPadWidget->fn->setKeyValue(Logo_Screen_KeyPadWidget, 1, 1, (leString*)&string_No4);
    Logo_Screen_KeyPadWidget_cell_1_1->fn->setString(Logo_Screen_KeyPadWidget_cell_1_1, (leString*)&string_No4);
    Logo_Screen_KeyPadWidget_cell_1_1->fn->setPressedImage(Logo_Screen_KeyPadWidget_cell_1_1, &PressedImg2);
    Logo_Screen_KeyPadWidget_cell_1_1->fn->setReleasedImage(Logo_Screen_KeyPadWidget_cell_1_1, &ReleasedImg);
    Logo_Screen_KeyPadWidget_cell_1_1->fn->setBackgroundType(Logo_Screen_KeyPadWidget_cell_1_1, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_KeyPadWidget_cell_1_1->fn->setBorderType(Logo_Screen_KeyPadWidget_cell_1_1, LE_WIDGET_BORDER_BEVEL);
    Logo_Screen_KeyPadWidget_cell_1_1->fn->setImagePosition(Logo_Screen_KeyPadWidget_cell_1_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Logo_Screen_KeyPadWidget_cell_2_0 = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 2, 0);
    Logo_Screen_KeyPadWidget->fn->setKeyAction(Logo_Screen_KeyPadWidget, 2, 0, LE_KEYPAD_CELL_ACTION_SET);
    Logo_Screen_KeyPadWidget->fn->setKeyValue(Logo_Screen_KeyPadWidget, 2, 0, (leString*)&string_No5);
    Logo_Screen_KeyPadWidget_cell_2_0->fn->setString(Logo_Screen_KeyPadWidget_cell_2_0, (leString*)&string_No5);
    Logo_Screen_KeyPadWidget_cell_2_0->fn->setPressedImage(Logo_Screen_KeyPadWidget_cell_2_0, &PressedImg2);
    Logo_Screen_KeyPadWidget_cell_2_0->fn->setReleasedImage(Logo_Screen_KeyPadWidget_cell_2_0, &ReleasedImg);
    Logo_Screen_KeyPadWidget_cell_2_0->fn->setBackgroundType(Logo_Screen_KeyPadWidget_cell_2_0, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_KeyPadWidget_cell_2_0->fn->setBorderType(Logo_Screen_KeyPadWidget_cell_2_0, LE_WIDGET_BORDER_BEVEL);
    Logo_Screen_KeyPadWidget_cell_2_0->fn->setImagePosition(Logo_Screen_KeyPadWidget_cell_2_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Logo_Screen_KeyPadWidget_cell_2_1 = Logo_Screen_KeyPadWidget->fn->getCellButton(Logo_Screen_KeyPadWidget, 2, 1);
    Logo_Screen_KeyPadWidget->fn->setKeyAction(Logo_Screen_KeyPadWidget, 2, 1, LE_KEYPAD_CELL_ACTION_SET);
    Logo_Screen_KeyPadWidget->fn->setKeyValue(Logo_Screen_KeyPadWidget, 2, 1, (leString*)&string_No6);
    Logo_Screen_KeyPadWidget_cell_2_1->fn->setString(Logo_Screen_KeyPadWidget_cell_2_1, (leString*)&string_No6);
    Logo_Screen_KeyPadWidget_cell_2_1->fn->setPressedImage(Logo_Screen_KeyPadWidget_cell_2_1, &PressedImg2);
    Logo_Screen_KeyPadWidget_cell_2_1->fn->setReleasedImage(Logo_Screen_KeyPadWidget_cell_2_1, &ReleasedImg);
    Logo_Screen_KeyPadWidget_cell_2_1->fn->setBackgroundType(Logo_Screen_KeyPadWidget_cell_2_1, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_KeyPadWidget_cell_2_1->fn->setBorderType(Logo_Screen_KeyPadWidget_cell_2_1, LE_WIDGET_BORDER_BEVEL);
    Logo_Screen_KeyPadWidget_cell_2_1->fn->setImagePosition(Logo_Screen_KeyPadWidget_cell_2_1, LE_RELATIVE_POSITION_BEHIND);
    Logo_Screen_KeyPadWidget->fn->setKeyClickEventCallback(Logo_Screen_KeyPadWidget, event_Logo_Screen_KeyPadWidget_OnKeyClick);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_KeyPadWidget);

    Logo_Screen_ImageWidget_Logo_1 = leImageWidget_New();
    Logo_Screen_ImageWidget_Logo_1->fn->setPosition(Logo_Screen_ImageWidget_Logo_1, 293, 99);
    Logo_Screen_ImageWidget_Logo_1->fn->setSize(Logo_Screen_ImageWidget_Logo_1, 188, 51);
    Logo_Screen_ImageWidget_Logo_1->fn->setVisible(Logo_Screen_ImageWidget_Logo_1, LE_FALSE);
    Logo_Screen_ImageWidget_Logo_1->fn->setBackgroundType(Logo_Screen_ImageWidget_Logo_1, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_ImageWidget_Logo_1->fn->setBorderType(Logo_Screen_ImageWidget_Logo_1, LE_WIDGET_BORDER_NONE);
    Logo_Screen_ImageWidget_Logo_1->fn->setImage(Logo_Screen_ImageWidget_Logo_1, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_ImageWidget_Logo_1);

    Logo_Screen_ImageWidget_Logo_4 = leImageWidget_New();
    Logo_Screen_ImageWidget_Logo_4->fn->setPosition(Logo_Screen_ImageWidget_Logo_4, 294, 412);
    Logo_Screen_ImageWidget_Logo_4->fn->setSize(Logo_Screen_ImageWidget_Logo_4, 189, 51);
    Logo_Screen_ImageWidget_Logo_4->fn->setVisible(Logo_Screen_ImageWidget_Logo_4, LE_FALSE);
    Logo_Screen_ImageWidget_Logo_4->fn->setBackgroundType(Logo_Screen_ImageWidget_Logo_4, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_ImageWidget_Logo_4->fn->setBorderType(Logo_Screen_ImageWidget_Logo_4, LE_WIDGET_BORDER_NONE);
    Logo_Screen_ImageWidget_Logo_4->fn->setImage(Logo_Screen_ImageWidget_Logo_4, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_ImageWidget_Logo_4);

    Logo_Screen_ImageWidget_Logo_6 = leImageWidget_New();
    Logo_Screen_ImageWidget_Logo_6->fn->setPosition(Logo_Screen_ImageWidget_Logo_6, 40, 194);
    Logo_Screen_ImageWidget_Logo_6->fn->setSize(Logo_Screen_ImageWidget_Logo_6, 187, 54);
    Logo_Screen_ImageWidget_Logo_6->fn->setVisible(Logo_Screen_ImageWidget_Logo_6, LE_FALSE);
    Logo_Screen_ImageWidget_Logo_6->fn->setBackgroundType(Logo_Screen_ImageWidget_Logo_6, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_ImageWidget_Logo_6->fn->setBorderType(Logo_Screen_ImageWidget_Logo_6, LE_WIDGET_BORDER_NONE);
    Logo_Screen_ImageWidget_Logo_6->fn->setImage(Logo_Screen_ImageWidget_Logo_6, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_ImageWidget_Logo_6);

    Logo_Screen_ImageWidget_Logo_5 = leImageWidget_New();
    Logo_Screen_ImageWidget_Logo_5->fn->setPosition(Logo_Screen_ImageWidget_Logo_5, 47, 338);
    Logo_Screen_ImageWidget_Logo_5->fn->setSize(Logo_Screen_ImageWidget_Logo_5, 181, 46);
    Logo_Screen_ImageWidget_Logo_5->fn->setVisible(Logo_Screen_ImageWidget_Logo_5, LE_FALSE);
    Logo_Screen_ImageWidget_Logo_5->fn->setBackgroundType(Logo_Screen_ImageWidget_Logo_5, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_ImageWidget_Logo_5->fn->setBorderType(Logo_Screen_ImageWidget_Logo_5, LE_WIDGET_BORDER_NONE);
    Logo_Screen_ImageWidget_Logo_5->fn->setImage(Logo_Screen_ImageWidget_Logo_5, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_ImageWidget_Logo_5);

    Logo_Screen_ImageWidget_Logo_2 = leImageWidget_New();
    Logo_Screen_ImageWidget_Logo_2->fn->setPosition(Logo_Screen_ImageWidget_Logo_2, 571, 193);
    Logo_Screen_ImageWidget_Logo_2->fn->setSize(Logo_Screen_ImageWidget_Logo_2, 191, 48);
    Logo_Screen_ImageWidget_Logo_2->fn->setVisible(Logo_Screen_ImageWidget_Logo_2, LE_FALSE);
    Logo_Screen_ImageWidget_Logo_2->fn->setBackgroundType(Logo_Screen_ImageWidget_Logo_2, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_ImageWidget_Logo_2->fn->setBorderType(Logo_Screen_ImageWidget_Logo_2, LE_WIDGET_BORDER_NONE);
    Logo_Screen_ImageWidget_Logo_2->fn->setImage(Logo_Screen_ImageWidget_Logo_2, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_ImageWidget_Logo_2);

    Logo_Screen_ImageWidget_Logo_3 = leImageWidget_New();
    Logo_Screen_ImageWidget_Logo_3->fn->setPosition(Logo_Screen_ImageWidget_Logo_3, 575, 336);
    Logo_Screen_ImageWidget_Logo_3->fn->setSize(Logo_Screen_ImageWidget_Logo_3, 190, 52);
    Logo_Screen_ImageWidget_Logo_3->fn->setVisible(Logo_Screen_ImageWidget_Logo_3, LE_FALSE);
    Logo_Screen_ImageWidget_Logo_3->fn->setBackgroundType(Logo_Screen_ImageWidget_Logo_3, LE_WIDGET_BACKGROUND_NONE);
    Logo_Screen_ImageWidget_Logo_3->fn->setBorderType(Logo_Screen_ImageWidget_Logo_3, LE_WIDGET_BORDER_NONE);
    Logo_Screen_ImageWidget_Logo_3->fn->setImage(Logo_Screen_ImageWidget_Logo_3, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_ImageWidget_Logo_3);

    Logo_Screen_LabelWidget_KeyPress = leLabelWidget_New();
    Logo_Screen_LabelWidget_KeyPress->fn->setPosition(Logo_Screen_LabelWidget_KeyPress, 34, 17);
    Logo_Screen_LabelWidget_KeyPress->fn->setSize(Logo_Screen_LabelWidget_KeyPress, 141, 33);
    Logo_Screen_LabelWidget_KeyPress->fn->setScheme(Logo_Screen_LabelWidget_KeyPress, &RedScheme);
    Logo_Screen_LabelWidget_KeyPress->fn->setHAlignment(Logo_Screen_LabelWidget_KeyPress, LE_HALIGN_CENTER);
    Logo_Screen_LabelWidget_KeyPress->fn->setVAlignment(Logo_Screen_LabelWidget_KeyPress, LE_VALIGN_TOP);
    Logo_Screen_LabelWidget_KeyPress->fn->setString(Logo_Screen_LabelWidget_KeyPress, (leString*)&string_Key);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_LabelWidget_KeyPress);

    Logo_Screen_ButtonWidget_TicTacToe = leButtonWidget_New();
    Logo_Screen_ButtonWidget_TicTacToe->fn->setPosition(Logo_Screen_ButtonWidget_TicTacToe, 653, 17);
    Logo_Screen_ButtonWidget_TicTacToe->fn->setSize(Logo_Screen_ButtonWidget_TicTacToe, 119, 32);
    Logo_Screen_ButtonWidget_TicTacToe->fn->setScheme(Logo_Screen_ButtonWidget_TicTacToe, &RedScheme);
    Logo_Screen_ButtonWidget_TicTacToe->fn->setBorderType(Logo_Screen_ButtonWidget_TicTacToe, LE_WIDGET_BORDER_NONE);
    Logo_Screen_ButtonWidget_TicTacToe->fn->setVAlignment(Logo_Screen_ButtonWidget_TicTacToe, LE_VALIGN_TOP);
    Logo_Screen_ButtonWidget_TicTacToe->fn->setString(Logo_Screen_ButtonWidget_TicTacToe, (leString*)&string_XandOGame);
    Logo_Screen_ButtonWidget_TicTacToe->fn->setPressedEventCallback(Logo_Screen_ButtonWidget_TicTacToe, event_Logo_Screen_ButtonWidget_TicTacToe_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_ButtonWidget_TicTacToe);

    Logo_Screen_TextFieldWidget = leTextFieldWidget_New();
    Logo_Screen_TextFieldWidget->fn->setPosition(Logo_Screen_TextFieldWidget, 180, 17);
    Logo_Screen_TextFieldWidget->fn->setSize(Logo_Screen_TextFieldWidget, 124, 33);
    Logo_Screen_TextFieldWidget->fn->setScheme(Logo_Screen_TextFieldWidget, &RedScheme);
    Logo_Screen_TextFieldWidget->fn->setBorderType(Logo_Screen_TextFieldWidget, LE_WIDGET_BORDER_NONE);
    Logo_Screen_TextFieldWidget->fn->setHintString(Logo_Screen_TextFieldWidget, (leString*)&string_Touch);
    Logo_Screen_TextFieldWidget->fn->setFont(Logo_Screen_TextFieldWidget, (leFont*)&InterBold_20);
    root0->fn->addChild(root0, (leWidget*)Logo_Screen_TextFieldWidget);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    Logo_Screen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Logo_Screen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Logo_Screen(void)
{
    Logo_Screen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Logo_Screen_BackgroundPanel = NULL;
    Logo_Screen_KeyPadWidget = NULL;
    Logo_Screen_ImageWidget_Logo_1 = NULL;
    Logo_Screen_ImageWidget_Logo_4 = NULL;
    Logo_Screen_ImageWidget_Logo_6 = NULL;
    Logo_Screen_ImageWidget_Logo_5 = NULL;
    Logo_Screen_ImageWidget_Logo_2 = NULL;
    Logo_Screen_ImageWidget_Logo_3 = NULL;
    Logo_Screen_LabelWidget_KeyPress = NULL;
    Logo_Screen_ButtonWidget_TicTacToe = NULL;
    Logo_Screen_TextFieldWidget = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Logo_Screen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Logo_Screen(uint32_t lyrIdx)
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

