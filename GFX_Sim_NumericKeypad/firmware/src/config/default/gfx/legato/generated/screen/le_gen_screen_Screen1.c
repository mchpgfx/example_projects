#include "gfx/legato/generated/screen/le_gen_screen_Screen1.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen1_Panel_0;
leKeyPadWidget* Screen1_KeyPadWidget_0;
leTextFieldWidget* Screen1_TextFieldWidget_0;
leButtonWidget* Screen1_OkButton;
leLabelWidget* Screen1_NewCode;
leButtonWidget* Screen1_SetDefaultButton;
leLabelWidget* Screen1_LabelWidget_0;

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
    root0->fn->setSize(root0, 480, 320);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen1_Panel_0 = leWidget_New();
    Screen1_Panel_0->fn->setPosition(Screen1_Panel_0, 0, 0);
    Screen1_Panel_0->fn->setSize(Screen1_Panel_0, 480, 320);
    Screen1_Panel_0->fn->setScheme(Screen1_Panel_0, &LayerScheme);
    Screen1_Panel_0->fn->setBorderType(Screen1_Panel_0, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Screen1_Panel_0);

    Screen1_KeyPadWidget_0 = leKeyPadWidget_New(4, 3);
    Screen1_KeyPadWidget_0->fn->setPosition(Screen1_KeyPadWidget_0, 261, 20);
    Screen1_KeyPadWidget_0->fn->setSize(Screen1_KeyPadWidget_0, 210, 280);
    Screen1_KeyPadWidget_0->fn->setScheme(Screen1_KeyPadWidget_0, &KeypadScheme);
    Screen1_KeyPadWidget_0->fn->setBackgroundType(Screen1_KeyPadWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen1_KeyPadWidget_0->fn->setBorderType(Screen1_KeyPadWidget_0, LE_WIDGET_BORDER_NONE);
    leButtonWidget* cell_0_0 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 0, 0);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 0, 0, (leString*)&string_String_7);
    cell_0_0->fn->setString(cell_0_0, (leString*)&string_String_7);
    cell_0_0->fn->setPressedImage(cell_0_0, &keydown);
    cell_0_0->fn->setReleasedImage(cell_0_0, &keyup);
    leButtonWidget* cell_0_1 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 0, 1);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 0, 1, (leString*)&string_String_8);
    cell_0_1->fn->setString(cell_0_1, (leString*)&string_String_8);
    cell_0_1->fn->setPressedImage(cell_0_1, &keydown);
    cell_0_1->fn->setReleasedImage(cell_0_1, &keyup);
    leButtonWidget* cell_0_2 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 0, 2);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 0, 2, (leString*)&string_String_9);
    cell_0_2->fn->setString(cell_0_2, (leString*)&string_String_9);
    cell_0_2->fn->setPressedImage(cell_0_2, &keydown);
    cell_0_2->fn->setReleasedImage(cell_0_2, &keyup);
    leButtonWidget* cell_1_0 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 1, 0);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 1, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 1, 0, (leString*)&string_String_4);
    cell_1_0->fn->setString(cell_1_0, (leString*)&string_String_4);
    cell_1_0->fn->setPressedImage(cell_1_0, &keydown);
    cell_1_0->fn->setReleasedImage(cell_1_0, &keyup);
    leButtonWidget* cell_1_1 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 1, 1);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 1, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 1, 1, (leString*)&string_String_5);
    cell_1_1->fn->setString(cell_1_1, (leString*)&string_String_5);
    cell_1_1->fn->setPressedImage(cell_1_1, &keydown);
    cell_1_1->fn->setReleasedImage(cell_1_1, &keyup);
    leButtonWidget* cell_1_2 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 1, 2);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 1, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 1, 2, (leString*)&string_String_6);
    cell_1_2->fn->setString(cell_1_2, (leString*)&string_String_6);
    cell_1_2->fn->setPressedImage(cell_1_2, &keydown);
    cell_1_2->fn->setReleasedImage(cell_1_2, &keyup);
    leButtonWidget* cell_2_0 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 2, 0);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 2, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 2, 0, (leString*)&string_String_1);
    cell_2_0->fn->setString(cell_2_0, (leString*)&string_String_1);
    cell_2_0->fn->setPressedImage(cell_2_0, &keydown);
    cell_2_0->fn->setReleasedImage(cell_2_0, &keyup);
    leButtonWidget* cell_2_1 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 2, 1);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 2, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 2, 1, (leString*)&string_String_2);
    cell_2_1->fn->setString(cell_2_1, (leString*)&string_String_2);
    cell_2_1->fn->setPressedImage(cell_2_1, &keydown);
    cell_2_1->fn->setReleasedImage(cell_2_1, &keyup);
    leButtonWidget* cell_2_2 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 2, 2);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 2, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 2, 2, (leString*)&string_String_3);
    cell_2_2->fn->setString(cell_2_2, (leString*)&string_String_3);
    cell_2_2->fn->setPressedImage(cell_2_2, &keydown);
    cell_2_2->fn->setReleasedImage(cell_2_2, &keyup);
    leButtonWidget* cell_3_0 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 3, 0);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 3, 0, LE_KEYPAD_CELL_ACTION_CLEAR);
    cell_3_0->fn->setString(cell_3_0, (leString*)&string_StrClear);
    cell_3_0->fn->setPressedImage(cell_3_0, &keydown);
    cell_3_0->fn->setReleasedImage(cell_3_0, &keyup);
    leButtonWidget* cell_3_1 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 3, 1);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 3, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Screen1_KeyPadWidget_0->fn->setKeyValue(Screen1_KeyPadWidget_0, 3, 1, (leString*)&string_String_0);
    cell_3_1->fn->setString(cell_3_1, (leString*)&string_String_0);
    cell_3_1->fn->setPressedImage(cell_3_1, &keydown);
    cell_3_1->fn->setReleasedImage(cell_3_1, &keyup);
    leButtonWidget* cell_3_2 = Screen1_KeyPadWidget_0->fn->getCellButton(Screen1_KeyPadWidget_0, 3, 2);
    Screen1_KeyPadWidget_0->fn->setKeyAction(Screen1_KeyPadWidget_0, 3, 2, LE_KEYPAD_CELL_ACTION_BACKSPACE);
    cell_3_2->fn->setString(cell_3_2, (leString*)&string_StrDel);
    cell_3_2->fn->setPressedImage(cell_3_2, &keydown);
    cell_3_2->fn->setReleasedImage(cell_3_2, &keyup);
    Screen1_KeyPadWidget_0->fn->setKeyClickEventCallback(Screen1_KeyPadWidget_0, event_Screen1_KeyPadWidget_0_OnKeyClick);
    root0->fn->addChild(root0, (leWidget*)Screen1_KeyPadWidget_0);

    Screen1_TextFieldWidget_0 = leTextFieldWidget_New();
    Screen1_TextFieldWidget_0->fn->setPosition(Screen1_TextFieldWidget_0, 14, 32);
    Screen1_TextFieldWidget_0->fn->setSize(Screen1_TextFieldWidget_0, 243, 50);
    Screen1_TextFieldWidget_0->fn->setBorderType(Screen1_TextFieldWidget_0, LE_WIDGET_BORDER_LINE);
    Screen1_TextFieldWidget_0->fn->setHintString(Screen1_TextFieldWidget_0, (leString*)&string_NumDefault);
    Screen1_TextFieldWidget_0->fn->setFont(Screen1_TextFieldWidget_0, (leFont*)&NotoSans_48);
    root0->fn->addChild(root0, (leWidget*)Screen1_TextFieldWidget_0);

    Screen1_OkButton = leButtonWidget_New();
    Screen1_OkButton->fn->setPosition(Screen1_OkButton, 29, 89);
    Screen1_OkButton->fn->setSize(Screen1_OkButton, 217, 68);
    Screen1_OkButton->fn->setScheme(Screen1_OkButton, &KeypadScheme);
    Screen1_OkButton->fn->setBackgroundType(Screen1_OkButton, LE_WIDGET_BACKGROUND_NONE);
    Screen1_OkButton->fn->setBorderType(Screen1_OkButton, LE_WIDGET_BORDER_NONE);
    Screen1_OkButton->fn->setString(Screen1_OkButton, (leString*)&string_StrOK);
    Screen1_OkButton->fn->setPressedImage(Screen1_OkButton, (leImage*)&BigKeyDown);
    Screen1_OkButton->fn->setReleasedImage(Screen1_OkButton, (leImage*)&BigKeyUp);
    Screen1_OkButton->fn->setImagePosition(Screen1_OkButton, LE_RELATIVE_POSITION_BEHIND);
    Screen1_OkButton->fn->setPressedEventCallback(Screen1_OkButton, event_Screen1_OkButton_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Screen1_OkButton);

    Screen1_NewCode = leLabelWidget_New();
    Screen1_NewCode->fn->setPosition(Screen1_NewCode, 117, 263);
    Screen1_NewCode->fn->setSize(Screen1_NewCode, 118, 30);
    Screen1_NewCode->fn->setScheme(Screen1_NewCode, &defaultScheme);
    Screen1_NewCode->fn->setBackgroundType(Screen1_NewCode, LE_WIDGET_BACKGROUND_NONE);
    Screen1_NewCode->fn->setBorderType(Screen1_NewCode, LE_WIDGET_BORDER_LINE);
    Screen1_NewCode->fn->setHAlignment(Screen1_NewCode, LE_HALIGN_CENTER);
    root0->fn->addChild(root0, (leWidget*)Screen1_NewCode);

    Screen1_SetDefaultButton = leButtonWidget_New();
    Screen1_SetDefaultButton->fn->setPosition(Screen1_SetDefaultButton, 25, 160);
    Screen1_SetDefaultButton->fn->setSize(Screen1_SetDefaultButton, 220, 70);
    Screen1_SetDefaultButton->fn->setScheme(Screen1_SetDefaultButton, &KeypadScheme);
    Screen1_SetDefaultButton->fn->setBackgroundType(Screen1_SetDefaultButton, LE_WIDGET_BACKGROUND_NONE);
    Screen1_SetDefaultButton->fn->setBorderType(Screen1_SetDefaultButton, LE_WIDGET_BORDER_NONE);
    Screen1_SetDefaultButton->fn->setString(Screen1_SetDefaultButton, (leString*)&string_StringDefault);
    Screen1_SetDefaultButton->fn->setPressedImage(Screen1_SetDefaultButton, (leImage*)&BigKeyDown);
    Screen1_SetDefaultButton->fn->setReleasedImage(Screen1_SetDefaultButton, (leImage*)&BigKeyUp);
    Screen1_SetDefaultButton->fn->setImagePosition(Screen1_SetDefaultButton, LE_RELATIVE_POSITION_BEHIND);
    Screen1_SetDefaultButton->fn->setReleasedEventCallback(Screen1_SetDefaultButton, event_Screen1_SetDefaultButton_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen1_SetDefaultButton);

    Screen1_LabelWidget_0 = leLabelWidget_New();
    Screen1_LabelWidget_0->fn->setPosition(Screen1_LabelWidget_0, 9, 266);
    Screen1_LabelWidget_0->fn->setSize(Screen1_LabelWidget_0, 106, 25);
    Screen1_LabelWidget_0->fn->setScheme(Screen1_LabelWidget_0, &defaultScheme);
    Screen1_LabelWidget_0->fn->setBackgroundType(Screen1_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen1_LabelWidget_0->fn->setString(Screen1_LabelWidget_0, (leString*)&string_StringNewCode);
    root0->fn->addChild(root0, (leWidget*)Screen1_LabelWidget_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Screen1_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen1(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Screen1(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen1_Panel_0 = NULL;
    Screen1_KeyPadWidget_0 = NULL;
    Screen1_TextFieldWidget_0 = NULL;
    Screen1_OkButton = NULL;
    Screen1_NewCode = NULL;
    Screen1_SetDefaultButton = NULL;
    Screen1_LabelWidget_0 = NULL;


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

