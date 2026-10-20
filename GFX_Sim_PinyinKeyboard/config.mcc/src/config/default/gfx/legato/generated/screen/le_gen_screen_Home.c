#include "gfx/legato/generated/screen/le_gen_screen_Home.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Home_panel_Pinyin_Keyboard;
leImageWidget* Home_SelectPanel;
leButtonWidget* Home_Btn_Next;
leButtonWidget* Home_Btn_Prev;
leButtonWidget* Home_Btn_Select;
leImageWidget* Home_ImageWidget_0;
leWidget* Home_panel_TouchScreenMainContainer;
leWidget* Home_panel_TopSection;
leWidget* Home_panel_Touch_Keyboard;
leWidget* Home_panel_Status_Bar;
leWidget* Home_panel_Cooking_Mode;
leWidget* Home_panel_Active_Input_Field;
leWidget* Home_panel_Container;
leWidget* Home_panel_Container_3;
leWidget* Home_panel_Overlay_Border;
leWidget* Home_panel_Container_0;
leWidget* Home_panel_Container_1;
leImageWidget* Home_ImageWidget_Zone;
leImageWidget* Home_image_Overlay_Border;
leLabelWidget* Home_label_Text;
leLabelWidget* Home_label_Text_0;
leWidget* Home_panel_Container_2;
leLabelWidget* Home_label_Text_1;
leImageWidget* Home_image_Container_2;
leWidget* Home_panel_Container_4;
leWidget* Home_panel_Container_7;
leWidget* Home_panel_Container_8;
leWidget* Home_panel_Container_5;
leWidget* Home_panel_Container_6;
leImageWidget* Home_image_Container_5;
leImageWidget* Home_image_Container_6;
leLabelWidget* Home_label_Text_2;
leLabelWidget* Home_label_Text_3;
leWidget* Home_panel_Button;
leWidget* Home_panel_Button_0;
leWidget* Home_panel_Button_1;
leWidget* Home_panel_Button_2;
leWidget* Home_panel_Button_3;
leWidget* Home_panel_Button_4;
leWidget* Home_panel_Button_5;
leWidget* Home_panel_Button_6;
leWidget* Home_panel_Button_7;
leWidget* Home_panel_Button_8;
leWidget* Home_panel_Button_9;
leWidget* Home_panel_Button_10;
leWidget* Home_panel_Button_11;
leWidget* Home_panel_Button_12;
leWidget* Home_panel_Button_13;
leWidget* Home_panel_Button_14;
leWidget* Home_panel_Button_15;
leWidget* Home_panel_Button_16;
leWidget* Home_panel_Button_17;
leButtonWidget* Home_BtnKey_Select;
leWidget* Home_panel_Container_9;
leWidget* Home_panel_Container_10;
leImageWidget* Home_image_Container_9;
leLabelWidget* Home_label_Text_4;
leWidget* Home_panel_Container_11;
leWidget* Home_panel_Container_12;
leImageWidget* Home_image_Container_11;
leLabelWidget* Home_label_Text_5;
leWidget* Home_panel_Container_13;
leWidget* Home_panel_Container_14;
leImageWidget* Home_image_Container_13;
leLabelWidget* Home_label_Text_6;
leWidget* Home_panel_Container_15;
leWidget* Home_panel_Container_16;
leImageWidget* Home_image_Container_15;
leLabelWidget* Home_label_Text_7;
leWidget* Home_panel_Container_17;
leWidget* Home_panel_Container_18;
leImageWidget* Home_image_Container_17;
leLabelWidget* Home_label_Text_8;
leWidget* Home_panel_Container_19;
leWidget* Home_panel_Container_20;
leImageWidget* Home_image_Container_19;
leLabelWidget* Home_label_Text_9;
leWidget* Home_panel_Container_21;
leWidget* Home_panel_Container_22;
leImageWidget* Home_image_Container_21;
leLabelWidget* Home_label_Text_10;
leWidget* Home_panel_Container_23;
leWidget* Home_panel_Container_24;
leImageWidget* Home_image_Container_23;
leLabelWidget* Home_label_Text_11;
leWidget* Home_panel_Container_25;
leWidget* Home_panel_Container_26;
leImageWidget* Home_image_Container_25;
leLabelWidget* Home_label_Text_12;
leWidget* Home_panel_Container_27;
leWidget* Home_panel_Container_28;
leImageWidget* Home_image_Container_27;
leLabelWidget* Home_label_Text_13;
leImageWidget* Home_ImageWidget_Input;
leWidget* Home_panel_Input_Box;
leImageWidget* Home_image_Container_30;
leLabelWidget* Home_label_Text_14;
leTextFieldWidget* Home_TextFieldWidget_Input;
leButtonWidget* Home_Btn_ClearInput;
leWidget* Home_panel_Quick_Preset___Heat_Zone_Status_Widget;
leButtonWidget* Home_ButtonWidget_HeatZone;
leWidget* Home_panel_Container_33;
leWidget* Home_panel_Overlay_Border_0;
leWidget* Home_panel_Container_34;
leWidget* Home_panel_Container_35;
leLabelWidget* Home_label_Text_15;
leLabelWidget* Home_label_Text_16;
leImageWidget* Home_ImageWidget_Temp;
leWidget* Home_panel_Container_36;
leImageWidget* Home_image_Container_36;
leKeyPadWidget* Home_KeysRow1;
leKeyPadWidget* Home_KeysRow2;
leKeyPadWidget* Home_KeysRow3;
leKeyPadWidget* Home_KeysRow4;
leWidget* Home_panel_Row5;
leButtonWidget* Home_BtnKeyClear;
leButtonWidget* Home_BtnKeyShift;
leButtonWidget* Home_BtnKeySpace;
leButtonWidget* Home_BtnKeyStart;
leImageWidget* Home_image_Container_38;
leImageWidget* Home_image_Button___Space_Bar;
leImageWidget* Home_image_Container_39;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Home(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Home(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Home_panel_Pinyin_Keyboard = leWidget_New();
    Home_panel_Pinyin_Keyboard->fn->setPosition(Home_panel_Pinyin_Keyboard, 0, 0);
    Home_panel_Pinyin_Keyboard->fn->setSize(Home_panel_Pinyin_Keyboard, 800, 480);
    Home_panel_Pinyin_Keyboard->fn->setBackgroundType(Home_panel_Pinyin_Keyboard, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)Home_panel_Pinyin_Keyboard);

    Home_ImageWidget_0 = leImageWidget_New();
    Home_ImageWidget_0->fn->setPosition(Home_ImageWidget_0, 0, 0);
    Home_ImageWidget_0->fn->setSize(Home_ImageWidget_0, 800, 480);
    Home_ImageWidget_0->fn->setBackgroundType(Home_ImageWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Home_ImageWidget_0->fn->setBorderType(Home_ImageWidget_0, LE_WIDGET_BORDER_NONE);
    Home_ImageWidget_0->fn->setImage(Home_ImageWidget_0, (leImage*)&Background);
    Home_panel_Pinyin_Keyboard->fn->addChild(Home_panel_Pinyin_Keyboard, (leWidget*)Home_ImageWidget_0);

    Home_panel_TouchScreenMainContainer = leWidget_New();
    Home_panel_TouchScreenMainContainer->fn->setPosition(Home_panel_TouchScreenMainContainer, 0, 0);
    Home_panel_TouchScreenMainContainer->fn->setSize(Home_panel_TouchScreenMainContainer, 800, 480);
    Home_panel_TouchScreenMainContainer->fn->setBackgroundType(Home_panel_TouchScreenMainContainer, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Pinyin_Keyboard->fn->addChild(Home_panel_Pinyin_Keyboard, (leWidget*)Home_panel_TouchScreenMainContainer);

    Home_panel_TopSection = leWidget_New();
    Home_panel_TopSection->fn->setPosition(Home_panel_TopSection, 13, 13);
    Home_panel_TopSection->fn->setSize(Home_panel_TopSection, 774, 118);
    Home_panel_TopSection->fn->setBackgroundType(Home_panel_TopSection, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_TouchScreenMainContainer->fn->addChild(Home_panel_TouchScreenMainContainer, (leWidget*)Home_panel_TopSection);

    Home_panel_Status_Bar = leWidget_New();
    Home_panel_Status_Bar->fn->setPosition(Home_panel_Status_Bar, 0, 0);
    Home_panel_Status_Bar->fn->setSize(Home_panel_Status_Bar, 774, 24);
    Home_panel_Status_Bar->fn->setBackgroundType(Home_panel_Status_Bar, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_TopSection->fn->addChild(Home_panel_TopSection, (leWidget*)Home_panel_Status_Bar);

    Home_panel_Container = leWidget_New();
    Home_panel_Container->fn->setPosition(Home_panel_Container, 6, 1);
    Home_panel_Container->fn->setSize(Home_panel_Container, 373, 22);
    Home_panel_Container->fn->setBackgroundType(Home_panel_Container, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Status_Bar->fn->addChild(Home_panel_Status_Bar, (leWidget*)Home_panel_Container);

    Home_panel_Overlay_Border = leWidget_New();
    Home_panel_Overlay_Border->fn->setPosition(Home_panel_Overlay_Border, 0, 0);
    Home_panel_Overlay_Border->fn->setSize(Home_panel_Overlay_Border, 128, 22);
    Home_panel_Overlay_Border->fn->setScheme(Home_panel_Overlay_Border, &panel_orange);
    Home_panel_Overlay_Border->fn->setBackgroundType(Home_panel_Overlay_Border, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container->fn->addChild(Home_panel_Container, (leWidget*)Home_panel_Overlay_Border);

    Home_ImageWidget_Zone = leImageWidget_New();
    Home_ImageWidget_Zone->fn->setPosition(Home_ImageWidget_Zone, -2, -2);
    Home_ImageWidget_Zone->fn->setSize(Home_ImageWidget_Zone, 123, 26);
    Home_ImageWidget_Zone->fn->setBackgroundType(Home_ImageWidget_Zone, LE_WIDGET_BACKGROUND_NONE);
    Home_ImageWidget_Zone->fn->setBorderType(Home_ImageWidget_Zone, LE_WIDGET_BORDER_NONE);
    Home_ImageWidget_Zone->fn->setImage(Home_ImageWidget_Zone, (leImage*)&Img_Zone);
    Home_panel_Overlay_Border->fn->addChild(Home_panel_Overlay_Border, (leWidget*)Home_ImageWidget_Zone);

    Home_image_Overlay_Border = leImageWidget_New();
    Home_image_Overlay_Border->fn->setPosition(Home_image_Overlay_Border, 0, 0);
    Home_image_Overlay_Border->fn->setSize(Home_image_Overlay_Border, 128, 22);
    Home_image_Overlay_Border->fn->setBackgroundType(Home_image_Overlay_Border, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Overlay_Border->fn->setBorderType(Home_image_Overlay_Border, LE_WIDGET_BORDER_NONE);
    Home_image_Overlay_Border->fn->setImage(Home_image_Overlay_Border, (leImage*)&figmaImg_Overlay_Border);
    Home_panel_Overlay_Border->fn->addChild(Home_panel_Overlay_Border, (leWidget*)Home_image_Overlay_Border);

    Home_label_Text = leLabelWidget_New();
    Home_label_Text->fn->setPosition(Home_label_Text, 19, 3);
    Home_label_Text->fn->setSize(Home_label_Text, 100, 16);
    Home_label_Text->fn->setScheme(Home_label_Text, &text_goldenrod);
    Home_label_Text->fn->setBackgroundType(Home_label_Text, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text->fn->setMargins(Home_label_Text, 0, 0, 0, 0);
    Home_label_Text->fn->setString(Home_label_Text, (leString*)&string_figmaStr_Text);
    Home_panel_Overlay_Border->fn->addChild(Home_panel_Overlay_Border, (leWidget*)Home_label_Text);

    Home_panel_Container_0 = leWidget_New();
    Home_panel_Container_0->fn->setPosition(Home_panel_Container_0, 138, 3);
    Home_panel_Container_0->fn->setSize(Home_panel_Container_0, 5, 16);
    Home_panel_Container_0->fn->setBackgroundType(Home_panel_Container_0, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container->fn->addChild(Home_panel_Container, (leWidget*)Home_panel_Container_0);

    Home_label_Text_0 = leLabelWidget_New();
    Home_label_Text_0->fn->setPosition(Home_label_Text_0, 0, 0);
    Home_label_Text_0->fn->setSize(Home_label_Text_0, 5, 16);
    Home_label_Text_0->fn->setScheme(Home_label_Text_0, &text_dimgray);
    Home_label_Text_0->fn->setBackgroundType(Home_label_Text_0, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_0->fn->setMargins(Home_label_Text_0, 0, 0, 0, 0);
    Home_label_Text_0->fn->setString(Home_label_Text_0, (leString*)&string_figmaStr_Text_0);
    Home_panel_Container_0->fn->addChild(Home_panel_Container_0, (leWidget*)Home_label_Text_0);

    Home_panel_Container_1 = leWidget_New();
    Home_panel_Container_1->fn->setPosition(Home_panel_Container_1, 153, 3);
    Home_panel_Container_1->fn->setSize(Home_panel_Container_1, 221, 16);
    Home_panel_Container_1->fn->setBackgroundType(Home_panel_Container_1, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container->fn->addChild(Home_panel_Container, (leWidget*)Home_panel_Container_1);

    Home_panel_Container_2 = leWidget_New();
    Home_panel_Container_2->fn->setPosition(Home_panel_Container_2, 0, 4);
    Home_panel_Container_2->fn->setSize(Home_panel_Container_2, 13, 10);
    Home_panel_Container_2->fn->setBackgroundType(Home_panel_Container_2, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_1->fn->addChild(Home_panel_Container_1, (leWidget*)Home_panel_Container_2);

    Home_image_Container_2 = leImageWidget_New();
    Home_image_Container_2->fn->setPosition(Home_image_Container_2, 0, 0);
    Home_image_Container_2->fn->setSize(Home_image_Container_2, 13, 10);
    Home_image_Container_2->fn->setBackgroundType(Home_image_Container_2, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_2->fn->setBorderType(Home_image_Container_2, LE_WIDGET_BORDER_NONE);
    Home_image_Container_2->fn->setImage(Home_image_Container_2, (leImage*)&figmaImg_Container_2);
    Home_panel_Container_2->fn->addChild(Home_panel_Container_2, (leWidget*)Home_image_Container_2);

    Home_label_Text_1 = leLabelWidget_New();
    Home_label_Text_1->fn->setPosition(Home_label_Text_1, 17, 0);
    Home_label_Text_1->fn->setSize(Home_label_Text_1, 204, 16);
    Home_label_Text_1->fn->setScheme(Home_label_Text_1, &text_lightgray);
    Home_label_Text_1->fn->setBackgroundType(Home_label_Text_1, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_1->fn->setMargins(Home_label_Text_1, 0, 0, 0, 0);
    Home_label_Text_1->fn->setString(Home_label_Text_1, (leString*)&string_str_smartRecipeAssist);
    Home_panel_Container_1->fn->addChild(Home_panel_Container_1, (leWidget*)Home_label_Text_1);

    Home_panel_Container_3 = leWidget_New();
    Home_panel_Container_3->fn->setPosition(Home_panel_Container_3, 655, 2);
    Home_panel_Container_3->fn->setSize(Home_panel_Container_3, 114, 20);
    Home_panel_Container_3->fn->setBackgroundType(Home_panel_Container_3, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Status_Bar->fn->addChild(Home_panel_Status_Bar, (leWidget*)Home_panel_Container_3);

    Home_panel_Container_4 = leWidget_New();
    Home_panel_Container_4->fn->setPosition(Home_panel_Container_4, 0, 4);
    Home_panel_Container_4->fn->setSize(Home_panel_Container_4, 32, 13);
    Home_panel_Container_4->fn->setBackgroundType(Home_panel_Container_4, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_3->fn->addChild(Home_panel_Container_3, (leWidget*)Home_panel_Container_4);

    Home_panel_Container_5 = leWidget_New();
    Home_panel_Container_5->fn->setPosition(Home_panel_Container_5, 0, 2);
    Home_panel_Container_5->fn->setSize(Home_panel_Container_5, 15, 11);
    Home_panel_Container_5->fn->setBackgroundType(Home_panel_Container_5, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_4->fn->addChild(Home_panel_Container_4, (leWidget*)Home_panel_Container_5);

    Home_image_Container_5 = leImageWidget_New();
    Home_image_Container_5->fn->setPosition(Home_image_Container_5, 0, 0);
    Home_image_Container_5->fn->setSize(Home_image_Container_5, 15, 11);
    Home_image_Container_5->fn->setBackgroundType(Home_image_Container_5, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_5->fn->setBorderType(Home_image_Container_5, LE_WIDGET_BORDER_NONE);
    Home_image_Container_5->fn->setImage(Home_image_Container_5, (leImage*)&figmaImg_Container_5);
    Home_panel_Container_5->fn->addChild(Home_panel_Container_5, (leWidget*)Home_image_Container_5);

    Home_panel_Container_6 = leWidget_New();
    Home_panel_Container_6->fn->setPosition(Home_panel_Container_6, 23, 0);
    Home_panel_Container_6->fn->setSize(Home_panel_Container_6, 9, 13);
    Home_panel_Container_6->fn->setBackgroundType(Home_panel_Container_6, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_4->fn->addChild(Home_panel_Container_4, (leWidget*)Home_panel_Container_6);

    Home_image_Container_6 = leImageWidget_New();
    Home_image_Container_6->fn->setPosition(Home_image_Container_6, 0, 0);
    Home_image_Container_6->fn->setSize(Home_image_Container_6, 9, 13);
    Home_image_Container_6->fn->setBackgroundType(Home_image_Container_6, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_6->fn->setBorderType(Home_image_Container_6, LE_WIDGET_BORDER_NONE);
    Home_image_Container_6->fn->setImage(Home_image_Container_6, (leImage*)&figmaImg_Container_6);
    Home_panel_Container_6->fn->addChild(Home_panel_Container_6, (leWidget*)Home_image_Container_6);

    Home_panel_Container_7 = leWidget_New();
    Home_panel_Container_7->fn->setPosition(Home_panel_Container_7, 46, 2);
    Home_panel_Container_7->fn->setSize(Home_panel_Container_7, 5, 16);
    Home_panel_Container_7->fn->setBackgroundType(Home_panel_Container_7, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_3->fn->addChild(Home_panel_Container_3, (leWidget*)Home_panel_Container_7);

    Home_label_Text_2 = leLabelWidget_New();
    Home_label_Text_2->fn->setPosition(Home_label_Text_2, 0, 0);
    Home_label_Text_2->fn->setSize(Home_label_Text_2, 5, 16);
    Home_label_Text_2->fn->setScheme(Home_label_Text_2, &text_dimgray);
    Home_label_Text_2->fn->setBackgroundType(Home_label_Text_2, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_2->fn->setMargins(Home_label_Text_2, 0, 0, 0, 0);
    Home_panel_Container_7->fn->addChild(Home_panel_Container_7, (leWidget*)Home_label_Text_2);

    Home_panel_Container_8 = leWidget_New();
    Home_panel_Container_8->fn->setPosition(Home_panel_Container_8, 65, 0);
    Home_panel_Container_8->fn->setSize(Home_panel_Container_8, 50, 20);
    Home_panel_Container_8->fn->setBackgroundType(Home_panel_Container_8, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_3->fn->addChild(Home_panel_Container_3, (leWidget*)Home_panel_Container_8);

    Home_label_Text_3 = leLabelWidget_New();
    Home_label_Text_3->fn->setPosition(Home_label_Text_3, 0, 0);
    Home_label_Text_3->fn->setSize(Home_label_Text_3, 50, 20);
    Home_label_Text_3->fn->setScheme(Home_label_Text_3, &text_gainsboro);
    Home_label_Text_3->fn->setBackgroundType(Home_label_Text_3, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_3->fn->setMargins(Home_label_Text_3, 0, 0, 0, 0);
    Home_panel_Container_8->fn->addChild(Home_panel_Container_8, (leWidget*)Home_label_Text_3);

    Home_panel_Cooking_Mode = leWidget_New();
    Home_panel_Cooking_Mode->fn->setPosition(Home_panel_Cooking_Mode, 0, 32);
    Home_panel_Cooking_Mode->fn->setSize(Home_panel_Cooking_Mode, 774, 30);
    Home_panel_Cooking_Mode->fn->setBackgroundType(Home_panel_Cooking_Mode, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_TopSection->fn->addChild(Home_panel_TopSection, (leWidget*)Home_panel_Cooking_Mode);

    Home_panel_Button = leWidget_New();
    Home_panel_Button->fn->setPosition(Home_panel_Button, 2, 2);
    Home_panel_Button->fn->setSize(Home_panel_Button, 83, 26);
    Home_panel_Button->fn->setScheme(Home_panel_Button, &panel_orange);
    Home_panel_Button->fn->setBackgroundType(Home_panel_Button, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button);

    Home_BtnKey_Select = leButtonWidget_New();
    Home_BtnKey_Select->fn->setPosition(Home_BtnKey_Select, -2, -10);
    Home_BtnKey_Select->fn->setSize(Home_BtnKey_Select, 87, 46);
    Home_BtnKey_Select->fn->setBackgroundType(Home_BtnKey_Select, LE_WIDGET_BACKGROUND_NONE);
    Home_BtnKey_Select->fn->setBorderType(Home_BtnKey_Select, LE_WIDGET_BORDER_NONE);
    Home_BtnKey_Select->fn->setPressedImage(Home_BtnKey_Select, (leImage*)&Btn_Select);
    Home_BtnKey_Select->fn->setReleasedImage(Home_BtnKey_Select, (leImage*)&Btn_Select);
    Home_panel_Button->fn->addChild(Home_panel_Button, (leWidget*)Home_BtnKey_Select);

    Home_panel_Container_9 = leWidget_New();
    Home_panel_Container_9->fn->setPosition(Home_panel_Container_9, 11, 8);
    Home_panel_Container_9->fn->setSize(Home_panel_Container_9, 12, 12);
    Home_panel_Container_9->fn->setBackgroundType(Home_panel_Container_9, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button->fn->addChild(Home_panel_Button, (leWidget*)Home_panel_Container_9);

    Home_image_Container_9 = leImageWidget_New();
    Home_image_Container_9->fn->setPosition(Home_image_Container_9, 0, 0);
    Home_image_Container_9->fn->setSize(Home_image_Container_9, 12, 12);
    Home_image_Container_9->fn->setBackgroundType(Home_image_Container_9, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_9->fn->setBorderType(Home_image_Container_9, LE_WIDGET_BORDER_NONE);
    Home_image_Container_9->fn->setImage(Home_image_Container_9, (leImage*)&figmaImg_Container_9);
    Home_panel_Container_9->fn->addChild(Home_panel_Container_9, (leWidget*)Home_image_Container_9);

    Home_panel_Container_10 = leWidget_New();
    Home_panel_Container_10->fn->setPosition(Home_panel_Container_10, 27, 5);
    Home_panel_Container_10->fn->setSize(Home_panel_Container_10, 46, 16);
    Home_panel_Container_10->fn->setBackgroundType(Home_panel_Container_10, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button->fn->addChild(Home_panel_Button, (leWidget*)Home_panel_Container_10);

    Home_label_Text_4 = leLabelWidget_New();
    Home_label_Text_4->fn->setPosition(Home_label_Text_4, 0, 0);
    Home_label_Text_4->fn->setSize(Home_label_Text_4, 46, 16);
    Home_label_Text_4->fn->setScheme(Home_label_Text_4, &text_goldenrod);
    Home_label_Text_4->fn->setBackgroundType(Home_label_Text_4, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_4->fn->setHAlignment(Home_label_Text_4, LE_HALIGN_CENTER);
    Home_label_Text_4->fn->setMargins(Home_label_Text_4, 0, 0, 0, 0);
    Home_label_Text_4->fn->setString(Home_label_Text_4, (leString*)&string_str_stirfry);
    Home_panel_Container_10->fn->addChild(Home_panel_Container_10, (leWidget*)Home_label_Text_4);

    Home_panel_Button_0 = leWidget_New();
    Home_panel_Button_0->fn->setPosition(Home_panel_Button_0, 92, 2);
    Home_panel_Button_0->fn->setSize(Home_panel_Button_0, 72, 26);
    Home_panel_Button_0->fn->setScheme(Home_panel_Button_0, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_0);

    Home_panel_Container_11 = leWidget_New();
    Home_panel_Container_11->fn->setPosition(Home_panel_Container_11, 11, 8);
    Home_panel_Container_11->fn->setSize(Home_panel_Container_11, 12, 12);
    Home_panel_Container_11->fn->setBackgroundType(Home_panel_Container_11, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_0->fn->addChild(Home_panel_Button_0, (leWidget*)Home_panel_Container_11);

    Home_image_Container_11 = leImageWidget_New();
    Home_image_Container_11->fn->setPosition(Home_image_Container_11, 0, 0);
    Home_image_Container_11->fn->setSize(Home_image_Container_11, 12, 12);
    Home_image_Container_11->fn->setBackgroundType(Home_image_Container_11, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_11->fn->setBorderType(Home_image_Container_11, LE_WIDGET_BORDER_NONE);
    Home_image_Container_11->fn->setImage(Home_image_Container_11, (leImage*)&figmaImg_Container_11);
    Home_panel_Container_11->fn->addChild(Home_panel_Container_11, (leWidget*)Home_image_Container_11);

    Home_panel_Container_12 = leWidget_New();
    Home_panel_Container_12->fn->setPosition(Home_panel_Container_12, 27, 5);
    Home_panel_Container_12->fn->setSize(Home_panel_Container_12, 34, 16);
    Home_panel_Container_12->fn->setBackgroundType(Home_panel_Container_12, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_0->fn->addChild(Home_panel_Button_0, (leWidget*)Home_panel_Container_12);

    Home_label_Text_5 = leLabelWidget_New();
    Home_label_Text_5->fn->setPosition(Home_label_Text_5, 0, 0);
    Home_label_Text_5->fn->setSize(Home_label_Text_5, 34, 16);
    Home_label_Text_5->fn->setScheme(Home_label_Text_5, &text_darkgray);
    Home_label_Text_5->fn->setBackgroundType(Home_label_Text_5, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_5->fn->setHAlignment(Home_label_Text_5, LE_HALIGN_CENTER);
    Home_label_Text_5->fn->setMargins(Home_label_Text_5, 0, 0, 0, 0);
    Home_label_Text_5->fn->setString(Home_label_Text_5, (leString*)&string_str_steam);
    Home_panel_Container_12->fn->addChild(Home_panel_Container_12, (leWidget*)Home_label_Text_5);

    Home_panel_Button_1 = leWidget_New();
    Home_panel_Button_1->fn->setPosition(Home_panel_Button_1, 170, 2);
    Home_panel_Button_1->fn->setSize(Home_panel_Button_1, 88, 26);
    Home_panel_Button_1->fn->setScheme(Home_panel_Button_1, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_1);

    Home_panel_Container_13 = leWidget_New();
    Home_panel_Container_13->fn->setPosition(Home_panel_Container_13, 11, 8);
    Home_panel_Container_13->fn->setSize(Home_panel_Container_13, 12, 12);
    Home_panel_Container_13->fn->setBackgroundType(Home_panel_Container_13, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_1->fn->addChild(Home_panel_Button_1, (leWidget*)Home_panel_Container_13);

    Home_image_Container_13 = leImageWidget_New();
    Home_image_Container_13->fn->setPosition(Home_image_Container_13, 0, 0);
    Home_image_Container_13->fn->setSize(Home_image_Container_13, 12, 12);
    Home_image_Container_13->fn->setBackgroundType(Home_image_Container_13, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_13->fn->setBorderType(Home_image_Container_13, LE_WIDGET_BORDER_NONE);
    Home_image_Container_13->fn->setImage(Home_image_Container_13, (leImage*)&figmaImg_Container_13);
    Home_panel_Container_13->fn->addChild(Home_panel_Container_13, (leWidget*)Home_image_Container_13);

    Home_panel_Container_14 = leWidget_New();
    Home_panel_Container_14->fn->setPosition(Home_panel_Container_14, 27, 5);
    Home_panel_Container_14->fn->setSize(Home_panel_Container_14, 50, 16);
    Home_panel_Container_14->fn->setBackgroundType(Home_panel_Container_14, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_1->fn->addChild(Home_panel_Button_1, (leWidget*)Home_panel_Container_14);

    Home_label_Text_6 = leLabelWidget_New();
    Home_label_Text_6->fn->setPosition(Home_label_Text_6, 0, 0);
    Home_label_Text_6->fn->setSize(Home_label_Text_6, 50, 16);
    Home_label_Text_6->fn->setScheme(Home_label_Text_6, &text_darkgray);
    Home_label_Text_6->fn->setBackgroundType(Home_label_Text_6, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_6->fn->setHAlignment(Home_label_Text_6, LE_HALIGN_CENTER);
    Home_label_Text_6->fn->setMargins(Home_label_Text_6, 0, 0, 0, 0);
    Home_label_Text_6->fn->setString(Home_label_Text_6, (leString*)&string_str_deepfry);
    Home_panel_Container_14->fn->addChild(Home_panel_Container_14, (leWidget*)Home_label_Text_6);

    Home_panel_Button_2 = leWidget_New();
    Home_panel_Button_2->fn->setPosition(Home_panel_Button_2, 263, 2);
    Home_panel_Button_2->fn->setSize(Home_panel_Button_2, 66, 26);
    Home_panel_Button_2->fn->setScheme(Home_panel_Button_2, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_2);

    Home_panel_Container_15 = leWidget_New();
    Home_panel_Container_15->fn->setPosition(Home_panel_Container_15, 11, 8);
    Home_panel_Container_15->fn->setSize(Home_panel_Container_15, 12, 12);
    Home_panel_Container_15->fn->setBackgroundType(Home_panel_Container_15, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_2->fn->addChild(Home_panel_Button_2, (leWidget*)Home_panel_Container_15);

    Home_image_Container_15 = leImageWidget_New();
    Home_image_Container_15->fn->setPosition(Home_image_Container_15, 0, 0);
    Home_image_Container_15->fn->setSize(Home_image_Container_15, 12, 12);
    Home_image_Container_15->fn->setBackgroundType(Home_image_Container_15, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_15->fn->setBorderType(Home_image_Container_15, LE_WIDGET_BORDER_NONE);
    Home_image_Container_15->fn->setImage(Home_image_Container_15, (leImage*)&figmaImg_Container_15);
    Home_panel_Container_15->fn->addChild(Home_panel_Container_15, (leWidget*)Home_image_Container_15);

    Home_panel_Container_16 = leWidget_New();
    Home_panel_Container_16->fn->setPosition(Home_panel_Container_16, 27, 5);
    Home_panel_Container_16->fn->setSize(Home_panel_Container_16, 29, 16);
    Home_panel_Container_16->fn->setBackgroundType(Home_panel_Container_16, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_2->fn->addChild(Home_panel_Button_2, (leWidget*)Home_panel_Container_16);

    Home_label_Text_7 = leLabelWidget_New();
    Home_label_Text_7->fn->setPosition(Home_label_Text_7, 0, 0);
    Home_label_Text_7->fn->setSize(Home_label_Text_7, 29, 16);
    Home_label_Text_7->fn->setScheme(Home_label_Text_7, &text_darkgray);
    Home_label_Text_7->fn->setBackgroundType(Home_label_Text_7, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_7->fn->setHAlignment(Home_label_Text_7, LE_HALIGN_CENTER);
    Home_label_Text_7->fn->setMargins(Home_label_Text_7, 0, 0, 0, 0);
    Home_label_Text_7->fn->setString(Home_label_Text_7, (leString*)&string_str_stew);
    Home_panel_Container_16->fn->addChild(Home_panel_Container_16, (leWidget*)Home_label_Text_7);

    Home_panel_Button_3 = leWidget_New();
    Home_panel_Button_3->fn->setPosition(Home_panel_Button_3, 336, 2);
    Home_panel_Button_3->fn->setSize(Home_panel_Button_3, 64, 26);
    Home_panel_Button_3->fn->setScheme(Home_panel_Button_3, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_3);

    Home_panel_Container_17 = leWidget_New();
    Home_panel_Container_17->fn->setPosition(Home_panel_Container_17, 11, 8);
    Home_panel_Container_17->fn->setSize(Home_panel_Container_17, 12, 12);
    Home_panel_Container_17->fn->setBackgroundType(Home_panel_Container_17, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_3->fn->addChild(Home_panel_Button_3, (leWidget*)Home_panel_Container_17);

    Home_image_Container_17 = leImageWidget_New();
    Home_image_Container_17->fn->setPosition(Home_image_Container_17, 0, 0);
    Home_image_Container_17->fn->setSize(Home_image_Container_17, 12, 12);
    Home_image_Container_17->fn->setBackgroundType(Home_image_Container_17, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_17->fn->setBorderType(Home_image_Container_17, LE_WIDGET_BORDER_NONE);
    Home_image_Container_17->fn->setImage(Home_image_Container_17, (leImage*)&figmaImg_Container_17);
    Home_panel_Container_17->fn->addChild(Home_panel_Container_17, (leWidget*)Home_image_Container_17);

    Home_panel_Container_18 = leWidget_New();
    Home_panel_Container_18->fn->setPosition(Home_panel_Container_18, 27, 5);
    Home_panel_Container_18->fn->setSize(Home_panel_Container_18, 27, 16);
    Home_panel_Container_18->fn->setBackgroundType(Home_panel_Container_18, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_3->fn->addChild(Home_panel_Button_3, (leWidget*)Home_panel_Container_18);

    Home_label_Text_8 = leLabelWidget_New();
    Home_label_Text_8->fn->setPosition(Home_label_Text_8, 0, 0);
    Home_label_Text_8->fn->setSize(Home_label_Text_8, 27, 16);
    Home_label_Text_8->fn->setScheme(Home_label_Text_8, &text_darkgray);
    Home_label_Text_8->fn->setBackgroundType(Home_label_Text_8, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_8->fn->setHAlignment(Home_label_Text_8, LE_HALIGN_CENTER);
    Home_label_Text_8->fn->setMargins(Home_label_Text_8, 0, 0, 0, 0);
    Home_label_Text_8->fn->setString(Home_label_Text_8, (leString*)&string_str_bake);
    Home_panel_Container_18->fn->addChild(Home_panel_Container_18, (leWidget*)Home_label_Text_8);

    Home_panel_Button_4 = leWidget_New();
    Home_panel_Button_4->fn->setPosition(Home_panel_Button_4, 406, 2);
    Home_panel_Button_4->fn->setSize(Home_panel_Button_4, 60, 26);
    Home_panel_Button_4->fn->setScheme(Home_panel_Button_4, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_4);

    Home_panel_Container_19 = leWidget_New();
    Home_panel_Container_19->fn->setPosition(Home_panel_Container_19, 11, 8);
    Home_panel_Container_19->fn->setSize(Home_panel_Container_19, 12, 12);
    Home_panel_Container_19->fn->setBackgroundType(Home_panel_Container_19, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_4->fn->addChild(Home_panel_Button_4, (leWidget*)Home_panel_Container_19);

    Home_image_Container_19 = leImageWidget_New();
    Home_image_Container_19->fn->setPosition(Home_image_Container_19, 0, 0);
    Home_image_Container_19->fn->setSize(Home_image_Container_19, 12, 12);
    Home_image_Container_19->fn->setBackgroundType(Home_image_Container_19, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_19->fn->setBorderType(Home_image_Container_19, LE_WIDGET_BORDER_NONE);
    Home_image_Container_19->fn->setImage(Home_image_Container_19, (leImage*)&figmaImg_Container_19);
    Home_panel_Container_19->fn->addChild(Home_panel_Container_19, (leWidget*)Home_image_Container_19);

    Home_panel_Container_20 = leWidget_New();
    Home_panel_Container_20->fn->setPosition(Home_panel_Container_20, 27, 5);
    Home_panel_Container_20->fn->setSize(Home_panel_Container_20, 23, 16);
    Home_panel_Container_20->fn->setBackgroundType(Home_panel_Container_20, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_4->fn->addChild(Home_panel_Button_4, (leWidget*)Home_panel_Container_20);

    Home_label_Text_9 = leLabelWidget_New();
    Home_label_Text_9->fn->setPosition(Home_label_Text_9, 0, 0);
    Home_label_Text_9->fn->setSize(Home_label_Text_9, 23, 16);
    Home_label_Text_9->fn->setScheme(Home_label_Text_9, &text_darkgray);
    Home_label_Text_9->fn->setBackgroundType(Home_label_Text_9, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_9->fn->setHAlignment(Home_label_Text_9, LE_HALIGN_CENTER);
    Home_label_Text_9->fn->setMargins(Home_label_Text_9, 0, 0, 0, 0);
    Home_label_Text_9->fn->setString(Home_label_Text_9, (leString*)&string_str_boil);
    Home_panel_Container_20->fn->addChild(Home_panel_Container_20, (leWidget*)Home_label_Text_9);

    Home_panel_Button_5 = leWidget_New();
    Home_panel_Button_5->fn->setPosition(Home_panel_Button_5, 473, 2);
    Home_panel_Button_5->fn->setSize(Home_panel_Button_5, 80, 26);
    Home_panel_Button_5->fn->setScheme(Home_panel_Button_5, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_5);

    Home_panel_Container_21 = leWidget_New();
    Home_panel_Container_21->fn->setPosition(Home_panel_Container_21, 11, 7);
    Home_panel_Container_21->fn->setSize(Home_panel_Container_21, 12, 13);
    Home_panel_Container_21->fn->setBackgroundType(Home_panel_Container_21, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_5->fn->addChild(Home_panel_Button_5, (leWidget*)Home_panel_Container_21);

    Home_image_Container_21 = leImageWidget_New();
    Home_image_Container_21->fn->setPosition(Home_image_Container_21, 0, 0);
    Home_image_Container_21->fn->setSize(Home_image_Container_21, 12, 13);
    Home_image_Container_21->fn->setBackgroundType(Home_image_Container_21, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_21->fn->setBorderType(Home_image_Container_21, LE_WIDGET_BORDER_NONE);
    Home_image_Container_21->fn->setImage(Home_image_Container_21, (leImage*)&figmaImg_Container_21);
    Home_panel_Container_21->fn->addChild(Home_panel_Container_21, (leWidget*)Home_image_Container_21);

    Home_panel_Container_22 = leWidget_New();
    Home_panel_Container_22->fn->setPosition(Home_panel_Container_22, 27, 5);
    Home_panel_Container_22->fn->setSize(Home_panel_Container_22, 43, 16);
    Home_panel_Container_22->fn->setBackgroundType(Home_panel_Container_22, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_5->fn->addChild(Home_panel_Button_5, (leWidget*)Home_panel_Container_22);

    Home_label_Text_10 = leLabelWidget_New();
    Home_label_Text_10->fn->setPosition(Home_label_Text_10, 0, 0);
    Home_label_Text_10->fn->setSize(Home_label_Text_10, 43, 16);
    Home_label_Text_10->fn->setScheme(Home_label_Text_10, &text_darkgray);
    Home_label_Text_10->fn->setBackgroundType(Home_label_Text_10, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_10->fn->setHAlignment(Home_label_Text_10, LE_HALIGN_CENTER);
    Home_label_Text_10->fn->setMargins(Home_label_Text_10, 0, 0, 0, 0);
    Home_label_Text_10->fn->setString(Home_label_Text_10, (leString*)&string_str_panfry);
    Home_panel_Container_22->fn->addChild(Home_panel_Container_22, (leWidget*)Home_label_Text_10);

    Home_panel_Button_6 = leWidget_New();
    Home_panel_Button_6->fn->setPosition(Home_panel_Button_6, 559, 2);
    Home_panel_Button_6->fn->setSize(Home_panel_Button_6, 92, 26);
    Home_panel_Button_6->fn->setScheme(Home_panel_Button_6, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_6);

    Home_panel_Container_23 = leWidget_New();
    Home_panel_Container_23->fn->setPosition(Home_panel_Container_23, 11, 8);
    Home_panel_Container_23->fn->setSize(Home_panel_Container_23, 12, 12);
    Home_panel_Container_23->fn->setBackgroundType(Home_panel_Container_23, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_6->fn->addChild(Home_panel_Button_6, (leWidget*)Home_panel_Container_23);

    Home_image_Container_23 = leImageWidget_New();
    Home_image_Container_23->fn->setPosition(Home_image_Container_23, 0, 0);
    Home_image_Container_23->fn->setSize(Home_image_Container_23, 12, 12);
    Home_image_Container_23->fn->setBackgroundType(Home_image_Container_23, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_23->fn->setBorderType(Home_image_Container_23, LE_WIDGET_BORDER_NONE);
    Home_image_Container_23->fn->setImage(Home_image_Container_23, (leImage*)&figmaImg_Container_23);
    Home_panel_Container_23->fn->addChild(Home_panel_Container_23, (leWidget*)Home_image_Container_23);

    Home_panel_Container_24 = leWidget_New();
    Home_panel_Container_24->fn->setPosition(Home_panel_Container_24, 27, 5);
    Home_panel_Container_24->fn->setSize(Home_panel_Container_24, 54, 16);
    Home_panel_Container_24->fn->setBackgroundType(Home_panel_Container_24, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_6->fn->addChild(Home_panel_Button_6, (leWidget*)Home_panel_Container_24);

    Home_label_Text_11 = leLabelWidget_New();
    Home_label_Text_11->fn->setPosition(Home_label_Text_11, 0, 0);
    Home_label_Text_11->fn->setSize(Home_label_Text_11, 54, 16);
    Home_label_Text_11->fn->setScheme(Home_label_Text_11, &text_darkgray);
    Home_label_Text_11->fn->setBackgroundType(Home_label_Text_11, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_11->fn->setHAlignment(Home_label_Text_11, LE_HALIGN_CENTER);
    Home_label_Text_11->fn->setMargins(Home_label_Text_11, 0, 0, 0, 0);
    Home_label_Text_11->fn->setString(Home_label_Text_11, (leString*)&string_str_quickfry);
    Home_panel_Container_24->fn->addChild(Home_panel_Container_24, (leWidget*)Home_label_Text_11);

    Home_panel_Button_7 = leWidget_New();
    Home_panel_Button_7->fn->setPosition(Home_panel_Button_7, 657, 2);
    Home_panel_Button_7->fn->setSize(Home_panel_Button_7, 74, 26);
    Home_panel_Button_7->fn->setScheme(Home_panel_Button_7, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_7);

    Home_panel_Container_25 = leWidget_New();
    Home_panel_Container_25->fn->setPosition(Home_panel_Container_25, 11, 8);
    Home_panel_Container_25->fn->setSize(Home_panel_Container_25, 11, 12);
    Home_panel_Container_25->fn->setBackgroundType(Home_panel_Container_25, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_7->fn->addChild(Home_panel_Button_7, (leWidget*)Home_panel_Container_25);

    Home_image_Container_25 = leImageWidget_New();
    Home_image_Container_25->fn->setPosition(Home_image_Container_25, 0, 0);
    Home_image_Container_25->fn->setSize(Home_image_Container_25, 11, 12);
    Home_image_Container_25->fn->setBackgroundType(Home_image_Container_25, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_25->fn->setBorderType(Home_image_Container_25, LE_WIDGET_BORDER_NONE);
    Home_image_Container_25->fn->setImage(Home_image_Container_25, (leImage*)&figmaImg_Container_25);
    Home_panel_Container_25->fn->addChild(Home_panel_Container_25, (leWidget*)Home_image_Container_25);

    Home_panel_Container_26 = leWidget_New();
    Home_panel_Container_26->fn->setPosition(Home_panel_Container_26, 26, 5);
    Home_panel_Container_26->fn->setSize(Home_panel_Container_26, 37, 16);
    Home_panel_Container_26->fn->setBackgroundType(Home_panel_Container_26, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_7->fn->addChild(Home_panel_Button_7, (leWidget*)Home_panel_Container_26);

    Home_label_Text_12 = leLabelWidget_New();
    Home_label_Text_12->fn->setPosition(Home_label_Text_12, 0, 0);
    Home_label_Text_12->fn->setSize(Home_label_Text_12, 37, 16);
    Home_label_Text_12->fn->setScheme(Home_label_Text_12, &text_darkgray);
    Home_label_Text_12->fn->setBackgroundType(Home_label_Text_12, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_12->fn->setHAlignment(Home_label_Text_12, LE_HALIGN_CENTER);
    Home_label_Text_12->fn->setMargins(Home_label_Text_12, 0, 0, 0, 0);
    Home_label_Text_12->fn->setString(Home_label_Text_12, (leString*)&string_str_braise);
    Home_panel_Container_26->fn->addChild(Home_panel_Container_26, (leWidget*)Home_label_Text_12);

    Home_panel_Button_8 = leWidget_New();
    Home_panel_Button_8->fn->setPosition(Home_panel_Button_8, 738, 2);
    Home_panel_Button_8->fn->setSize(Home_panel_Button_8, 99, 26);
    Home_panel_Button_8->fn->setScheme(Home_panel_Button_8, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_8);

    Home_panel_Container_27 = leWidget_New();
    Home_panel_Container_27->fn->setPosition(Home_panel_Container_27, 11, 8);
    Home_panel_Container_27->fn->setSize(Home_panel_Container_27, 11, 12);
    Home_panel_Container_27->fn->setBackgroundType(Home_panel_Container_27, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_8->fn->addChild(Home_panel_Button_8, (leWidget*)Home_panel_Container_27);

    Home_image_Container_27 = leImageWidget_New();
    Home_image_Container_27->fn->setPosition(Home_image_Container_27, 0, 0);
    Home_image_Container_27->fn->setSize(Home_image_Container_27, 11, 12);
    Home_image_Container_27->fn->setBackgroundType(Home_image_Container_27, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_27->fn->setBorderType(Home_image_Container_27, LE_WIDGET_BORDER_NONE);
    Home_image_Container_27->fn->setImage(Home_image_Container_27, (leImage*)&figmaImg_Container_27);
    Home_panel_Container_27->fn->addChild(Home_panel_Container_27, (leWidget*)Home_image_Container_27);

    Home_panel_Container_28 = leWidget_New();
    Home_panel_Container_28->fn->setPosition(Home_panel_Container_28, 26, 5);
    Home_panel_Container_28->fn->setSize(Home_panel_Container_28, 62, 16);
    Home_panel_Container_28->fn->setBackgroundType(Home_panel_Container_28, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Button_8->fn->addChild(Home_panel_Button_8, (leWidget*)Home_panel_Container_28);

    Home_label_Text_13 = leLabelWidget_New();
    Home_label_Text_13->fn->setPosition(Home_label_Text_13, 0, 0);
    Home_label_Text_13->fn->setSize(Home_label_Text_13, 62, 16);
    Home_label_Text_13->fn->setScheme(Home_label_Text_13, &text_darkgray);
    Home_label_Text_13->fn->setBackgroundType(Home_label_Text_13, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_13->fn->setHAlignment(Home_label_Text_13, LE_HALIGN_CENTER);
    Home_label_Text_13->fn->setMargins(Home_label_Text_13, 0, 0, 0, 0);
    Home_label_Text_13->fn->setString(Home_label_Text_13, (leString*)&string_str_slowcook);
    Home_panel_Container_28->fn->addChild(Home_panel_Container_28, (leWidget*)Home_label_Text_13);

    Home_panel_Button_9 = leWidget_New();
    Home_panel_Button_9->fn->setPosition(Home_panel_Button_9, 844, 5);
    Home_panel_Button_9->fn->setSize(Home_panel_Button_9, 34, 22);
    Home_panel_Button_9->fn->setScheme(Home_panel_Button_9, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_9);

    Home_panel_Button_10 = leWidget_New();
    Home_panel_Button_10->fn->setPosition(Home_panel_Button_10, 884, 5);
    Home_panel_Button_10->fn->setSize(Home_panel_Button_10, 34, 22);
    Home_panel_Button_10->fn->setScheme(Home_panel_Button_10, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_10);

    Home_panel_Button_11 = leWidget_New();
    Home_panel_Button_11->fn->setPosition(Home_panel_Button_11, 924, 5);
    Home_panel_Button_11->fn->setSize(Home_panel_Button_11, 34, 22);
    Home_panel_Button_11->fn->setScheme(Home_panel_Button_11, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_11);

    Home_panel_Button_12 = leWidget_New();
    Home_panel_Button_12->fn->setPosition(Home_panel_Button_12, 964, 5);
    Home_panel_Button_12->fn->setSize(Home_panel_Button_12, 34, 22);
    Home_panel_Button_12->fn->setScheme(Home_panel_Button_12, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_12);

    Home_panel_Button_13 = leWidget_New();
    Home_panel_Button_13->fn->setPosition(Home_panel_Button_13, 1004, 5);
    Home_panel_Button_13->fn->setSize(Home_panel_Button_13, 34, 22);
    Home_panel_Button_13->fn->setScheme(Home_panel_Button_13, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_13);

    Home_panel_Button_14 = leWidget_New();
    Home_panel_Button_14->fn->setPosition(Home_panel_Button_14, 1044, 5);
    Home_panel_Button_14->fn->setSize(Home_panel_Button_14, 34, 22);
    Home_panel_Button_14->fn->setScheme(Home_panel_Button_14, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_14);

    Home_panel_Button_15 = leWidget_New();
    Home_panel_Button_15->fn->setPosition(Home_panel_Button_15, 1084, 5);
    Home_panel_Button_15->fn->setSize(Home_panel_Button_15, 34, 22);
    Home_panel_Button_15->fn->setScheme(Home_panel_Button_15, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_15);

    Home_panel_Button_16 = leWidget_New();
    Home_panel_Button_16->fn->setPosition(Home_panel_Button_16, 1124, 5);
    Home_panel_Button_16->fn->setSize(Home_panel_Button_16, 34, 22);
    Home_panel_Button_16->fn->setScheme(Home_panel_Button_16, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_16);

    Home_panel_Button_17 = leWidget_New();
    Home_panel_Button_17->fn->setPosition(Home_panel_Button_17, 1164, 5);
    Home_panel_Button_17->fn->setSize(Home_panel_Button_17, 34, 22);
    Home_panel_Button_17->fn->setScheme(Home_panel_Button_17, &panel_black_1);
    Home_panel_Cooking_Mode->fn->addChild(Home_panel_Cooking_Mode, (leWidget*)Home_panel_Button_17);

    Home_panel_Active_Input_Field = leWidget_New();
    Home_panel_Active_Input_Field->fn->setPosition(Home_panel_Active_Input_Field, 0, 70);
    Home_panel_Active_Input_Field->fn->setSize(Home_panel_Active_Input_Field, 774, 48);
    Home_panel_Active_Input_Field->fn->setBackgroundType(Home_panel_Active_Input_Field, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_TopSection->fn->addChild(Home_panel_TopSection, (leWidget*)Home_panel_Active_Input_Field);

    Home_ImageWidget_Input = leImageWidget_New();
    Home_ImageWidget_Input->fn->setPosition(Home_ImageWidget_Input, -2, 0);
    Home_ImageWidget_Input->fn->setSize(Home_ImageWidget_Input, 582, 48);
    Home_ImageWidget_Input->fn->setBackgroundType(Home_ImageWidget_Input, LE_WIDGET_BACKGROUND_NONE);
    Home_ImageWidget_Input->fn->setBorderType(Home_ImageWidget_Input, LE_WIDGET_BORDER_NONE);
    Home_ImageWidget_Input->fn->setImage(Home_ImageWidget_Input, (leImage*)&InputBox);
    Home_panel_Active_Input_Field->fn->addChild(Home_panel_Active_Input_Field, (leWidget*)Home_ImageWidget_Input);

    Home_panel_Input_Box = leWidget_New();
    Home_panel_Input_Box->fn->setPosition(Home_panel_Input_Box, 0, 0);
    Home_panel_Input_Box->fn->setSize(Home_panel_Input_Box, 582, 48);
    Home_panel_Input_Box->fn->setScheme(Home_panel_Input_Box, &panel_black_2);
    Home_panel_Input_Box->fn->setBackgroundType(Home_panel_Input_Box, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Active_Input_Field->fn->addChild(Home_panel_Active_Input_Field, (leWidget*)Home_panel_Input_Box);

    Home_image_Container_30 = leImageWidget_New();
    Home_image_Container_30->fn->setPosition(Home_image_Container_30, 15, 17);
    Home_image_Container_30->fn->setSize(Home_image_Container_30, 14, 14);
    Home_image_Container_30->fn->setBackgroundType(Home_image_Container_30, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_30->fn->setBorderType(Home_image_Container_30, LE_WIDGET_BORDER_NONE);
    Home_image_Container_30->fn->setImage(Home_image_Container_30, (leImage*)&figmaImg_Container_30);
    Home_panel_Active_Input_Field->fn->addChild(Home_panel_Active_Input_Field, (leWidget*)Home_image_Container_30);

    Home_label_Text_14 = leLabelWidget_New();
    Home_label_Text_14->fn->setPosition(Home_label_Text_14, 39, 12);
    Home_label_Text_14->fn->setSize(Home_label_Text_14, 66, 24);
    Home_label_Text_14->fn->setScheme(Home_label_Text_14, &text_white);
    Home_label_Text_14->fn->setBackgroundType(Home_label_Text_14, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_14->fn->setMargins(Home_label_Text_14, 0, 0, 0, 0);
    Home_label_Text_14->fn->setString(Home_label_Text_14, (leString*)&string_str_recipe_fish);
    Home_panel_Active_Input_Field->fn->addChild(Home_panel_Active_Input_Field, (leWidget*)Home_label_Text_14);

    Home_TextFieldWidget_Input = leTextFieldWidget_New();
    Home_TextFieldWidget_Input->fn->setPosition(Home_TextFieldWidget_Input, 55, 1);
    Home_TextFieldWidget_Input->fn->setSize(Home_TextFieldWidget_Input, 453, 46);
    Home_TextFieldWidget_Input->fn->setBackgroundType(Home_TextFieldWidget_Input, LE_WIDGET_BACKGROUND_NONE);
    Home_TextFieldWidget_Input->fn->setBorderType(Home_TextFieldWidget_Input, LE_WIDGET_BORDER_NONE);
    Home_TextFieldWidget_Input->fn->setHAlignment(Home_TextFieldWidget_Input, LE_HALIGN_LEFT);
    Home_panel_Active_Input_Field->fn->addChild(Home_panel_Active_Input_Field, (leWidget*)Home_TextFieldWidget_Input);

    Home_Btn_ClearInput = leButtonWidget_New();
    Home_Btn_ClearInput->fn->setPosition(Home_Btn_ClearInput, 530, 1);
    Home_Btn_ClearInput->fn->setSize(Home_Btn_ClearInput, 41, 46);
    Home_Btn_ClearInput->fn->setBackgroundType(Home_Btn_ClearInput, LE_WIDGET_BACKGROUND_NONE);
    Home_Btn_ClearInput->fn->setBorderType(Home_Btn_ClearInput, LE_WIDGET_BORDER_NONE);
    Home_Btn_ClearInput->fn->setPressedImage(Home_Btn_ClearInput, (leImage*)&btn_clearinput);
    Home_Btn_ClearInput->fn->setReleasedImage(Home_Btn_ClearInput, (leImage*)&btn_clearinput);
    Home_Btn_ClearInput->fn->setReleasedEventCallback(Home_Btn_ClearInput, event_Home_Btn_ClearInput_OnReleased);
    Home_panel_Active_Input_Field->fn->addChild(Home_panel_Active_Input_Field, (leWidget*)Home_Btn_ClearInput);

    Home_panel_Quick_Preset___Heat_Zone_Status_Widget = leWidget_New();
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget->fn->setPosition(Home_panel_Quick_Preset___Heat_Zone_Status_Widget, 594, 0);
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget->fn->setSize(Home_panel_Quick_Preset___Heat_Zone_Status_Widget, 180, 48);
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget->fn->setScheme(Home_panel_Quick_Preset___Heat_Zone_Status_Widget, &panel_black_3);
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget->fn->setBackgroundType(Home_panel_Quick_Preset___Heat_Zone_Status_Widget, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Active_Input_Field->fn->addChild(Home_panel_Active_Input_Field, (leWidget*)Home_panel_Quick_Preset___Heat_Zone_Status_Widget);

    Home_ButtonWidget_HeatZone = leButtonWidget_New();
    Home_ButtonWidget_HeatZone->fn->setPosition(Home_ButtonWidget_HeatZone, 0, 0);
    Home_ButtonWidget_HeatZone->fn->setSize(Home_ButtonWidget_HeatZone, 180, 48);
    Home_ButtonWidget_HeatZone->fn->setBackgroundType(Home_ButtonWidget_HeatZone, LE_WIDGET_BACKGROUND_NONE);
    Home_ButtonWidget_HeatZone->fn->setBorderType(Home_ButtonWidget_HeatZone, LE_WIDGET_BORDER_NONE);
    Home_ButtonWidget_HeatZone->fn->setPressedImage(Home_ButtonWidget_HeatZone, (leImage*)&Img_HeatZone);
    Home_ButtonWidget_HeatZone->fn->setReleasedImage(Home_ButtonWidget_HeatZone, (leImage*)&Img_HeatZone);
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget->fn->addChild(Home_panel_Quick_Preset___Heat_Zone_Status_Widget, (leWidget*)Home_ButtonWidget_HeatZone);

    Home_panel_Container_33 = leWidget_New();
    Home_panel_Container_33->fn->setPosition(Home_panel_Container_33, 13, 9);
    Home_panel_Container_33->fn->setSize(Home_panel_Container_33, 93, 31);
    Home_panel_Container_33->fn->setBackgroundType(Home_panel_Container_33, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget->fn->addChild(Home_panel_Quick_Preset___Heat_Zone_Status_Widget, (leWidget*)Home_panel_Container_33);

    Home_panel_Container_34 = leWidget_New();
    Home_panel_Container_34->fn->setPosition(Home_panel_Container_34, 0, 0);
    Home_panel_Container_34->fn->setSize(Home_panel_Container_34, 93, 15);
    Home_panel_Container_34->fn->setBackgroundType(Home_panel_Container_34, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_33->fn->addChild(Home_panel_Container_33, (leWidget*)Home_panel_Container_34);

    Home_label_Text_15 = leLabelWidget_New();
    Home_label_Text_15->fn->setPosition(Home_label_Text_15, 0, 0);
    Home_label_Text_15->fn->setSize(Home_label_Text_15, 76, 15);
    Home_label_Text_15->fn->setScheme(Home_label_Text_15, &text_darkgray);
    Home_label_Text_15->fn->setBackgroundType(Home_label_Text_15, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_15->fn->setMargins(Home_label_Text_15, 0, 0, 0, 0);
    Home_label_Text_15->fn->setString(Home_label_Text_15, (leString*)&string_str_targetTemp);
    Home_panel_Container_34->fn->addChild(Home_panel_Container_34, (leWidget*)Home_label_Text_15);

    Home_panel_Container_35 = leWidget_New();
    Home_panel_Container_35->fn->setPosition(Home_panel_Container_35, 0, 15);
    Home_panel_Container_35->fn->setSize(Home_panel_Container_35, 93, 16);
    Home_panel_Container_35->fn->setBackgroundType(Home_panel_Container_35, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Container_33->fn->addChild(Home_panel_Container_33, (leWidget*)Home_panel_Container_35);

    Home_label_Text_16 = leLabelWidget_New();
    Home_label_Text_16->fn->setPosition(Home_label_Text_16, 0, 0);
    Home_label_Text_16->fn->setSize(Home_label_Text_16, 93, 16);
    Home_label_Text_16->fn->setScheme(Home_label_Text_16, &text_gainsboro);
    Home_label_Text_16->fn->setBackgroundType(Home_label_Text_16, LE_WIDGET_BACKGROUND_NONE);
    Home_label_Text_16->fn->setMargins(Home_label_Text_16, 0, 0, 0, 0);
    Home_label_Text_16->fn->setString(Home_label_Text_16, (leString*)&string_str_temp);
    Home_panel_Container_35->fn->addChild(Home_panel_Container_35, (leWidget*)Home_label_Text_16);

    Home_panel_Overlay_Border_0 = leWidget_New();
    Home_panel_Overlay_Border_0->fn->setPosition(Home_panel_Overlay_Border_0, 135, 8);
    Home_panel_Overlay_Border_0->fn->setSize(Home_panel_Overlay_Border_0, 32, 32);
    Home_panel_Overlay_Border_0->fn->setScheme(Home_panel_Overlay_Border_0, &panel_darkorange);
    Home_panel_Overlay_Border_0->fn->setBackgroundType(Home_panel_Overlay_Border_0, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget->fn->addChild(Home_panel_Quick_Preset___Heat_Zone_Status_Widget, (leWidget*)Home_panel_Overlay_Border_0);

    Home_ImageWidget_Temp = leImageWidget_New();
    Home_ImageWidget_Temp->fn->setPosition(Home_ImageWidget_Temp, 0, 0);
    Home_ImageWidget_Temp->fn->setSize(Home_ImageWidget_Temp, 32, 32);
    Home_ImageWidget_Temp->fn->setBackgroundType(Home_ImageWidget_Temp, LE_WIDGET_BACKGROUND_NONE);
    Home_ImageWidget_Temp->fn->setBorderType(Home_ImageWidget_Temp, LE_WIDGET_BORDER_NONE);
    Home_ImageWidget_Temp->fn->setImage(Home_ImageWidget_Temp, (leImage*)&ImgTempIcon);
    Home_panel_Overlay_Border_0->fn->addChild(Home_panel_Overlay_Border_0, (leWidget*)Home_ImageWidget_Temp);

    Home_panel_Container_36 = leWidget_New();
    Home_panel_Container_36->fn->setPosition(Home_panel_Container_36, 11, 10);
    Home_panel_Container_36->fn->setSize(Home_panel_Container_36, 11, 14);
    Home_panel_Container_36->fn->setBackgroundType(Home_panel_Container_36, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Overlay_Border_0->fn->addChild(Home_panel_Overlay_Border_0, (leWidget*)Home_panel_Container_36);

    Home_image_Container_36 = leImageWidget_New();
    Home_image_Container_36->fn->setPosition(Home_image_Container_36, 0, 0);
    Home_image_Container_36->fn->setSize(Home_image_Container_36, 11, 14);
    Home_image_Container_36->fn->setBackgroundType(Home_image_Container_36, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_36->fn->setBorderType(Home_image_Container_36, LE_WIDGET_BORDER_NONE);
    Home_image_Container_36->fn->setImage(Home_image_Container_36, (leImage*)&figmaImg_Container_36);
    Home_panel_Container_36->fn->addChild(Home_panel_Container_36, (leWidget*)Home_image_Container_36);

    Home_panel_Touch_Keyboard = leWidget_New();
    Home_panel_Touch_Keyboard->fn->setPosition(Home_panel_Touch_Keyboard, 13, 175);
    Home_panel_Touch_Keyboard->fn->setSize(Home_panel_Touch_Keyboard, 774, 300);
    Home_panel_Touch_Keyboard->fn->setBackgroundType(Home_panel_Touch_Keyboard, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_TouchScreenMainContainer->fn->addChild(Home_panel_TouchScreenMainContainer, (leWidget*)Home_panel_Touch_Keyboard);

    Home_KeysRow1 = leKeyPadWidget_New(1, 10);
    Home_KeysRow1->fn->setPosition(Home_KeysRow1, 0, 0);
    Home_KeysRow1->fn->setSize(Home_KeysRow1, 774, 58);
    Home_KeysRow1->fn->setScheme(Home_KeysRow1, &text_gainsboro);
    Home_KeysRow1->fn->setBackgroundType(Home_KeysRow1, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1->fn->setBorderType(Home_KeysRow1, LE_WIDGET_BORDER_NONE);
    leButtonWidget* Home_KeysRow1_cell_0_0 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 0);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 0, (leString*)&string_str1);
    Home_KeysRow1_cell_0_0->fn->setString(Home_KeysRow1_cell_0_0, (leString*)&string_str1);
    Home_KeysRow1_cell_0_0->fn->setPressedImage(Home_KeysRow1_cell_0_0, &Btn1_Pressed);
    Home_KeysRow1_cell_0_0->fn->setReleasedImage(Home_KeysRow1_cell_0_0, &Btn1);
    Home_KeysRow1_cell_0_0->fn->setBackgroundType(Home_KeysRow1_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_0->fn->setBorderType(Home_KeysRow1_cell_0_0, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_0->fn->setImagePosition(Home_KeysRow1_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_1 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 1);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 1, (leString*)&string_str2);
    Home_KeysRow1_cell_0_1->fn->setString(Home_KeysRow1_cell_0_1, (leString*)&string_str2);
    Home_KeysRow1_cell_0_1->fn->setPressedImage(Home_KeysRow1_cell_0_1, &Btn1_Pressed);
    Home_KeysRow1_cell_0_1->fn->setReleasedImage(Home_KeysRow1_cell_0_1, &Btn1);
    Home_KeysRow1_cell_0_1->fn->setBackgroundType(Home_KeysRow1_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_1->fn->setBorderType(Home_KeysRow1_cell_0_1, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_1->fn->setImagePosition(Home_KeysRow1_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_2 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 2);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 2, (leString*)&string_str3);
    Home_KeysRow1_cell_0_2->fn->setString(Home_KeysRow1_cell_0_2, (leString*)&string_str3);
    Home_KeysRow1_cell_0_2->fn->setPressedImage(Home_KeysRow1_cell_0_2, &Btn1_Pressed);
    Home_KeysRow1_cell_0_2->fn->setReleasedImage(Home_KeysRow1_cell_0_2, &Btn1);
    Home_KeysRow1_cell_0_2->fn->setBackgroundType(Home_KeysRow1_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_2->fn->setBorderType(Home_KeysRow1_cell_0_2, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_2->fn->setImagePosition(Home_KeysRow1_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_3 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 3);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 3, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 3, (leString*)&string_str4);
    Home_KeysRow1_cell_0_3->fn->setString(Home_KeysRow1_cell_0_3, (leString*)&string_str4);
    Home_KeysRow1_cell_0_3->fn->setPressedImage(Home_KeysRow1_cell_0_3, &Btn1_Pressed);
    Home_KeysRow1_cell_0_3->fn->setReleasedImage(Home_KeysRow1_cell_0_3, &Btn1);
    Home_KeysRow1_cell_0_3->fn->setBackgroundType(Home_KeysRow1_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_3->fn->setBorderType(Home_KeysRow1_cell_0_3, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_3->fn->setImagePosition(Home_KeysRow1_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_4 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 4);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 4, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 4, (leString*)&string_str5);
    Home_KeysRow1_cell_0_4->fn->setString(Home_KeysRow1_cell_0_4, (leString*)&string_str5);
    Home_KeysRow1_cell_0_4->fn->setPressedImage(Home_KeysRow1_cell_0_4, &Btn1_Pressed);
    Home_KeysRow1_cell_0_4->fn->setReleasedImage(Home_KeysRow1_cell_0_4, &Btn1);
    Home_KeysRow1_cell_0_4->fn->setBackgroundType(Home_KeysRow1_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_4->fn->setBorderType(Home_KeysRow1_cell_0_4, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_4->fn->setImagePosition(Home_KeysRow1_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_5 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 5);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 5, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 5, (leString*)&string_str6);
    Home_KeysRow1_cell_0_5->fn->setString(Home_KeysRow1_cell_0_5, (leString*)&string_str6);
    Home_KeysRow1_cell_0_5->fn->setPressedImage(Home_KeysRow1_cell_0_5, &Btn1_Pressed);
    Home_KeysRow1_cell_0_5->fn->setReleasedImage(Home_KeysRow1_cell_0_5, &Btn1);
    Home_KeysRow1_cell_0_5->fn->setBackgroundType(Home_KeysRow1_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_5->fn->setBorderType(Home_KeysRow1_cell_0_5, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_5->fn->setImagePosition(Home_KeysRow1_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_6 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 6);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 6, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 6, (leString*)&string_str7);
    Home_KeysRow1_cell_0_6->fn->setString(Home_KeysRow1_cell_0_6, (leString*)&string_str7);
    Home_KeysRow1_cell_0_6->fn->setPressedImage(Home_KeysRow1_cell_0_6, &Btn1_Pressed);
    Home_KeysRow1_cell_0_6->fn->setReleasedImage(Home_KeysRow1_cell_0_6, &Btn1);
    Home_KeysRow1_cell_0_6->fn->setBackgroundType(Home_KeysRow1_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_6->fn->setBorderType(Home_KeysRow1_cell_0_6, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_6->fn->setImagePosition(Home_KeysRow1_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_7 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 7);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 7, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 7, (leString*)&string_str8);
    Home_KeysRow1_cell_0_7->fn->setString(Home_KeysRow1_cell_0_7, (leString*)&string_str8);
    Home_KeysRow1_cell_0_7->fn->setPressedImage(Home_KeysRow1_cell_0_7, &Btn1_Pressed);
    Home_KeysRow1_cell_0_7->fn->setReleasedImage(Home_KeysRow1_cell_0_7, &Btn1);
    Home_KeysRow1_cell_0_7->fn->setBackgroundType(Home_KeysRow1_cell_0_7, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_7->fn->setBorderType(Home_KeysRow1_cell_0_7, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_7->fn->setImagePosition(Home_KeysRow1_cell_0_7, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_8 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 8);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 8, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 8, (leString*)&string_str9);
    Home_KeysRow1_cell_0_8->fn->setString(Home_KeysRow1_cell_0_8, (leString*)&string_str9);
    Home_KeysRow1_cell_0_8->fn->setPressedImage(Home_KeysRow1_cell_0_8, &Btn1_Pressed);
    Home_KeysRow1_cell_0_8->fn->setReleasedImage(Home_KeysRow1_cell_0_8, &Btn1);
    Home_KeysRow1_cell_0_8->fn->setBackgroundType(Home_KeysRow1_cell_0_8, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_8->fn->setBorderType(Home_KeysRow1_cell_0_8, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_8->fn->setImagePosition(Home_KeysRow1_cell_0_8, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow1_cell_0_9 = Home_KeysRow1->fn->getCellButton(Home_KeysRow1, 0, 9);
    Home_KeysRow1->fn->setKeyAction(Home_KeysRow1, 0, 9, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow1->fn->setKeyValue(Home_KeysRow1, 0, 9, (leString*)&string_str0);
    Home_KeysRow1_cell_0_9->fn->setString(Home_KeysRow1_cell_0_9, (leString*)&string_str0);
    Home_KeysRow1_cell_0_9->fn->setPressedImage(Home_KeysRow1_cell_0_9, &Btn1_Pressed);
    Home_KeysRow1_cell_0_9->fn->setReleasedImage(Home_KeysRow1_cell_0_9, &Btn1);
    Home_KeysRow1_cell_0_9->fn->setBackgroundType(Home_KeysRow1_cell_0_9, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow1_cell_0_9->fn->setBorderType(Home_KeysRow1_cell_0_9, LE_WIDGET_BORDER_NONE);
    Home_KeysRow1_cell_0_9->fn->setImagePosition(Home_KeysRow1_cell_0_9, LE_RELATIVE_POSITION_BEHIND);
    Home_KeysRow1->fn->setKeyClickEventCallback(Home_KeysRow1, event_Home_KeysRow1_OnKeyClick);
    Home_panel_Touch_Keyboard->fn->addChild(Home_panel_Touch_Keyboard, (leWidget*)Home_KeysRow1);

    Home_KeysRow2 = leKeyPadWidget_New(1, 10);
    Home_KeysRow2->fn->setPosition(Home_KeysRow2, 0, 60);
    Home_KeysRow2->fn->setSize(Home_KeysRow2, 774, 58);
    Home_KeysRow2->fn->setScheme(Home_KeysRow2, &text_gainsboro);
    Home_KeysRow2->fn->setBackgroundType(Home_KeysRow2, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2->fn->setBorderType(Home_KeysRow2, LE_WIDGET_BORDER_NONE);
    leButtonWidget* Home_KeysRow2_cell_0_0 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 0);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 0, (leString*)&string_strq);
    Home_KeysRow2_cell_0_0->fn->setString(Home_KeysRow2_cell_0_0, (leString*)&string_strq);
    Home_KeysRow2_cell_0_0->fn->setPressedImage(Home_KeysRow2_cell_0_0, &Btn1_Pressed);
    Home_KeysRow2_cell_0_0->fn->setReleasedImage(Home_KeysRow2_cell_0_0, &Btn1);
    Home_KeysRow2_cell_0_0->fn->setBackgroundType(Home_KeysRow2_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_0->fn->setBorderType(Home_KeysRow2_cell_0_0, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_0->fn->setImagePosition(Home_KeysRow2_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_1 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 1);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 1, (leString*)&string_strw);
    Home_KeysRow2_cell_0_1->fn->setString(Home_KeysRow2_cell_0_1, (leString*)&string_strw);
    Home_KeysRow2_cell_0_1->fn->setPressedImage(Home_KeysRow2_cell_0_1, &Btn1_Pressed);
    Home_KeysRow2_cell_0_1->fn->setReleasedImage(Home_KeysRow2_cell_0_1, &Btn1);
    Home_KeysRow2_cell_0_1->fn->setBackgroundType(Home_KeysRow2_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_1->fn->setBorderType(Home_KeysRow2_cell_0_1, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_1->fn->setImagePosition(Home_KeysRow2_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_2 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 2);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 2, (leString*)&string_stre);
    Home_KeysRow2_cell_0_2->fn->setString(Home_KeysRow2_cell_0_2, (leString*)&string_stre);
    Home_KeysRow2_cell_0_2->fn->setPressedImage(Home_KeysRow2_cell_0_2, &Btn1_Pressed);
    Home_KeysRow2_cell_0_2->fn->setReleasedImage(Home_KeysRow2_cell_0_2, &Btn1);
    Home_KeysRow2_cell_0_2->fn->setBackgroundType(Home_KeysRow2_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_2->fn->setBorderType(Home_KeysRow2_cell_0_2, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_2->fn->setImagePosition(Home_KeysRow2_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_3 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 3);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 3, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 3, (leString*)&string_strr);
    Home_KeysRow2_cell_0_3->fn->setString(Home_KeysRow2_cell_0_3, (leString*)&string_strr);
    Home_KeysRow2_cell_0_3->fn->setPressedImage(Home_KeysRow2_cell_0_3, &Btn1_Pressed);
    Home_KeysRow2_cell_0_3->fn->setReleasedImage(Home_KeysRow2_cell_0_3, &Btn1);
    Home_KeysRow2_cell_0_3->fn->setBackgroundType(Home_KeysRow2_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_3->fn->setBorderType(Home_KeysRow2_cell_0_3, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_3->fn->setImagePosition(Home_KeysRow2_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_4 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 4);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 4, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 4, (leString*)&string_strt);
    Home_KeysRow2_cell_0_4->fn->setString(Home_KeysRow2_cell_0_4, (leString*)&string_strt);
    Home_KeysRow2_cell_0_4->fn->setPressedImage(Home_KeysRow2_cell_0_4, &Btn1_Pressed);
    Home_KeysRow2_cell_0_4->fn->setReleasedImage(Home_KeysRow2_cell_0_4, &Btn1);
    Home_KeysRow2_cell_0_4->fn->setBackgroundType(Home_KeysRow2_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_4->fn->setBorderType(Home_KeysRow2_cell_0_4, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_4->fn->setImagePosition(Home_KeysRow2_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_5 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 5);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 5, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 5, (leString*)&string_stry);
    Home_KeysRow2_cell_0_5->fn->setString(Home_KeysRow2_cell_0_5, (leString*)&string_stry);
    Home_KeysRow2_cell_0_5->fn->setPressedImage(Home_KeysRow2_cell_0_5, &Btn1_Pressed);
    Home_KeysRow2_cell_0_5->fn->setReleasedImage(Home_KeysRow2_cell_0_5, &Btn1);
    Home_KeysRow2_cell_0_5->fn->setBackgroundType(Home_KeysRow2_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_5->fn->setBorderType(Home_KeysRow2_cell_0_5, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_5->fn->setImagePosition(Home_KeysRow2_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_6 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 6);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 6, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 6, (leString*)&string_stru);
    Home_KeysRow2_cell_0_6->fn->setString(Home_KeysRow2_cell_0_6, (leString*)&string_stru);
    Home_KeysRow2_cell_0_6->fn->setPressedImage(Home_KeysRow2_cell_0_6, &Btn1_Pressed);
    Home_KeysRow2_cell_0_6->fn->setReleasedImage(Home_KeysRow2_cell_0_6, &Btn1);
    Home_KeysRow2_cell_0_6->fn->setBackgroundType(Home_KeysRow2_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_6->fn->setBorderType(Home_KeysRow2_cell_0_6, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_6->fn->setImagePosition(Home_KeysRow2_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_7 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 7);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 7, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 7, (leString*)&string_stri);
    Home_KeysRow2_cell_0_7->fn->setString(Home_KeysRow2_cell_0_7, (leString*)&string_stri);
    Home_KeysRow2_cell_0_7->fn->setPressedImage(Home_KeysRow2_cell_0_7, &Btn1_Pressed);
    Home_KeysRow2_cell_0_7->fn->setReleasedImage(Home_KeysRow2_cell_0_7, &Btn1);
    Home_KeysRow2_cell_0_7->fn->setBackgroundType(Home_KeysRow2_cell_0_7, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_7->fn->setBorderType(Home_KeysRow2_cell_0_7, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_7->fn->setImagePosition(Home_KeysRow2_cell_0_7, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_8 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 8);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 8, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 8, (leString*)&string_stro);
    Home_KeysRow2_cell_0_8->fn->setString(Home_KeysRow2_cell_0_8, (leString*)&string_stro);
    Home_KeysRow2_cell_0_8->fn->setPressedImage(Home_KeysRow2_cell_0_8, &Btn1_Pressed);
    Home_KeysRow2_cell_0_8->fn->setReleasedImage(Home_KeysRow2_cell_0_8, &Btn1);
    Home_KeysRow2_cell_0_8->fn->setBackgroundType(Home_KeysRow2_cell_0_8, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_8->fn->setBorderType(Home_KeysRow2_cell_0_8, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_8->fn->setImagePosition(Home_KeysRow2_cell_0_8, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow2_cell_0_9 = Home_KeysRow2->fn->getCellButton(Home_KeysRow2, 0, 9);
    Home_KeysRow2->fn->setKeyAction(Home_KeysRow2, 0, 9, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow2->fn->setKeyValue(Home_KeysRow2, 0, 9, (leString*)&string_strp);
    Home_KeysRow2_cell_0_9->fn->setString(Home_KeysRow2_cell_0_9, (leString*)&string_strp);
    Home_KeysRow2_cell_0_9->fn->setPressedImage(Home_KeysRow2_cell_0_9, &Btn1_Pressed);
    Home_KeysRow2_cell_0_9->fn->setReleasedImage(Home_KeysRow2_cell_0_9, &Btn1);
    Home_KeysRow2_cell_0_9->fn->setBackgroundType(Home_KeysRow2_cell_0_9, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow2_cell_0_9->fn->setBorderType(Home_KeysRow2_cell_0_9, LE_WIDGET_BORDER_NONE);
    Home_KeysRow2_cell_0_9->fn->setImagePosition(Home_KeysRow2_cell_0_9, LE_RELATIVE_POSITION_BEHIND);
    Home_KeysRow2->fn->setKeyClickEventCallback(Home_KeysRow2, event_Home_KeysRow2_OnKeyClick);
    Home_panel_Touch_Keyboard->fn->addChild(Home_panel_Touch_Keyboard, (leWidget*)Home_KeysRow2);

    Home_KeysRow3 = leKeyPadWidget_New(1, 9);
    Home_KeysRow3->fn->setPosition(Home_KeysRow3, 15, 118);
    Home_KeysRow3->fn->setSize(Home_KeysRow3, 746, 62);
    Home_KeysRow3->fn->setScheme(Home_KeysRow3, &text_gainsboro);
    Home_KeysRow3->fn->setBackgroundType(Home_KeysRow3, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3->fn->setBorderType(Home_KeysRow3, LE_WIDGET_BORDER_NONE);
    leButtonWidget* Home_KeysRow3_cell_0_0 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 0);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 0, (leString*)&string_stra);
    Home_KeysRow3_cell_0_0->fn->setString(Home_KeysRow3_cell_0_0, (leString*)&string_stra);
    Home_KeysRow3_cell_0_0->fn->setPressedImage(Home_KeysRow3_cell_0_0, &Btn2_Pressed);
    Home_KeysRow3_cell_0_0->fn->setReleasedImage(Home_KeysRow3_cell_0_0, &Btn2);
    Home_KeysRow3_cell_0_0->fn->setBackgroundType(Home_KeysRow3_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_0->fn->setBorderType(Home_KeysRow3_cell_0_0, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_0->fn->setImagePosition(Home_KeysRow3_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_1 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 1);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 1, (leString*)&string_strs);
    Home_KeysRow3_cell_0_1->fn->setString(Home_KeysRow3_cell_0_1, (leString*)&string_strs);
    Home_KeysRow3_cell_0_1->fn->setPressedImage(Home_KeysRow3_cell_0_1, &Btn2_Pressed);
    Home_KeysRow3_cell_0_1->fn->setReleasedImage(Home_KeysRow3_cell_0_1, &Btn2);
    Home_KeysRow3_cell_0_1->fn->setBackgroundType(Home_KeysRow3_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_1->fn->setBorderType(Home_KeysRow3_cell_0_1, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_1->fn->setImagePosition(Home_KeysRow3_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_2 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 2);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 2, (leString*)&string_strd);
    Home_KeysRow3_cell_0_2->fn->setString(Home_KeysRow3_cell_0_2, (leString*)&string_strd);
    Home_KeysRow3_cell_0_2->fn->setPressedImage(Home_KeysRow3_cell_0_2, &Btn2_Pressed);
    Home_KeysRow3_cell_0_2->fn->setReleasedImage(Home_KeysRow3_cell_0_2, &Btn2);
    Home_KeysRow3_cell_0_2->fn->setBackgroundType(Home_KeysRow3_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_2->fn->setBorderType(Home_KeysRow3_cell_0_2, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_2->fn->setImagePosition(Home_KeysRow3_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_3 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 3);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 3, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 3, (leString*)&string_strf);
    Home_KeysRow3_cell_0_3->fn->setString(Home_KeysRow3_cell_0_3, (leString*)&string_strf);
    Home_KeysRow3_cell_0_3->fn->setPressedImage(Home_KeysRow3_cell_0_3, &Btn2_Pressed);
    Home_KeysRow3_cell_0_3->fn->setReleasedImage(Home_KeysRow3_cell_0_3, &Btn2);
    Home_KeysRow3_cell_0_3->fn->setBackgroundType(Home_KeysRow3_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_3->fn->setBorderType(Home_KeysRow3_cell_0_3, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_3->fn->setImagePosition(Home_KeysRow3_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_4 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 4);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 4, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 4, (leString*)&string_strg);
    Home_KeysRow3_cell_0_4->fn->setString(Home_KeysRow3_cell_0_4, (leString*)&string_strg);
    Home_KeysRow3_cell_0_4->fn->setPressedImage(Home_KeysRow3_cell_0_4, &Btn2_Pressed);
    Home_KeysRow3_cell_0_4->fn->setReleasedImage(Home_KeysRow3_cell_0_4, &Btn2);
    Home_KeysRow3_cell_0_4->fn->setBackgroundType(Home_KeysRow3_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_4->fn->setBorderType(Home_KeysRow3_cell_0_4, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_4->fn->setImagePosition(Home_KeysRow3_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_5 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 5);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 5, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 5, (leString*)&string_strh);
    Home_KeysRow3_cell_0_5->fn->setString(Home_KeysRow3_cell_0_5, (leString*)&string_strh);
    Home_KeysRow3_cell_0_5->fn->setPressedImage(Home_KeysRow3_cell_0_5, &Btn2_Pressed);
    Home_KeysRow3_cell_0_5->fn->setReleasedImage(Home_KeysRow3_cell_0_5, &Btn2);
    Home_KeysRow3_cell_0_5->fn->setBackgroundType(Home_KeysRow3_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_5->fn->setBorderType(Home_KeysRow3_cell_0_5, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_5->fn->setImagePosition(Home_KeysRow3_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_6 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 6);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 6, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 6, (leString*)&string_strj);
    Home_KeysRow3_cell_0_6->fn->setString(Home_KeysRow3_cell_0_6, (leString*)&string_strj);
    Home_KeysRow3_cell_0_6->fn->setPressedImage(Home_KeysRow3_cell_0_6, &Btn2_Pressed);
    Home_KeysRow3_cell_0_6->fn->setReleasedImage(Home_KeysRow3_cell_0_6, &Btn2);
    Home_KeysRow3_cell_0_6->fn->setBackgroundType(Home_KeysRow3_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_6->fn->setBorderType(Home_KeysRow3_cell_0_6, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_6->fn->setImagePosition(Home_KeysRow3_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_7 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 7);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 7, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 7, (leString*)&string_strk);
    Home_KeysRow3_cell_0_7->fn->setString(Home_KeysRow3_cell_0_7, (leString*)&string_strk);
    Home_KeysRow3_cell_0_7->fn->setPressedImage(Home_KeysRow3_cell_0_7, &Btn2_Pressed);
    Home_KeysRow3_cell_0_7->fn->setReleasedImage(Home_KeysRow3_cell_0_7, &Btn2);
    Home_KeysRow3_cell_0_7->fn->setBackgroundType(Home_KeysRow3_cell_0_7, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_7->fn->setBorderType(Home_KeysRow3_cell_0_7, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_7->fn->setImagePosition(Home_KeysRow3_cell_0_7, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow3_cell_0_8 = Home_KeysRow3->fn->getCellButton(Home_KeysRow3, 0, 8);
    Home_KeysRow3->fn->setKeyAction(Home_KeysRow3, 0, 8, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow3->fn->setKeyValue(Home_KeysRow3, 0, 8, (leString*)&string_strl);
    Home_KeysRow3_cell_0_8->fn->setString(Home_KeysRow3_cell_0_8, (leString*)&string_strl);
    Home_KeysRow3_cell_0_8->fn->setPressedImage(Home_KeysRow3_cell_0_8, &Btn2_Pressed);
    Home_KeysRow3_cell_0_8->fn->setReleasedImage(Home_KeysRow3_cell_0_8, &Btn2);
    Home_KeysRow3_cell_0_8->fn->setBackgroundType(Home_KeysRow3_cell_0_8, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow3_cell_0_8->fn->setBorderType(Home_KeysRow3_cell_0_8, LE_WIDGET_BORDER_NONE);
    Home_KeysRow3_cell_0_8->fn->setImagePosition(Home_KeysRow3_cell_0_8, LE_RELATIVE_POSITION_BEHIND);
    Home_KeysRow3->fn->setKeyClickEventCallback(Home_KeysRow3, event_Home_KeysRow3_OnKeyClick);
    Home_panel_Touch_Keyboard->fn->addChild(Home_panel_Touch_Keyboard, (leWidget*)Home_KeysRow3);

    Home_KeysRow4 = leKeyPadWidget_New(1, 8);
    Home_KeysRow4->fn->setPosition(Home_KeysRow4, 4, 175);
    Home_KeysRow4->fn->setSize(Home_KeysRow4, 767, 67);
    Home_KeysRow4->fn->setScheme(Home_KeysRow4, &text_gainsboro);
    Home_KeysRow4->fn->setBackgroundType(Home_KeysRow4, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4->fn->setBorderType(Home_KeysRow4, LE_WIDGET_BORDER_NONE);
    leButtonWidget* Home_KeysRow4_cell_0_0 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 0);
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 0, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow4->fn->setKeyValue(Home_KeysRow4, 0, 0, (leString*)&string_strz);
    Home_KeysRow4_cell_0_0->fn->setString(Home_KeysRow4_cell_0_0, (leString*)&string_strz);
    Home_KeysRow4_cell_0_0->fn->setPressedImage(Home_KeysRow4_cell_0_0, &Btn3_Pressed);
    Home_KeysRow4_cell_0_0->fn->setReleasedImage(Home_KeysRow4_cell_0_0, &Btn3);
    Home_KeysRow4_cell_0_0->fn->setBackgroundType(Home_KeysRow4_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_0->fn->setBorderType(Home_KeysRow4_cell_0_0, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4_cell_0_0->fn->setImagePosition(Home_KeysRow4_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow4_cell_0_1 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 1);
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 1, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow4->fn->setKeyValue(Home_KeysRow4, 0, 1, (leString*)&string_strx);
    Home_KeysRow4_cell_0_1->fn->setString(Home_KeysRow4_cell_0_1, (leString*)&string_strx);
    Home_KeysRow4_cell_0_1->fn->setPressedImage(Home_KeysRow4_cell_0_1, &Btn3_Pressed);
    Home_KeysRow4_cell_0_1->fn->setReleasedImage(Home_KeysRow4_cell_0_1, &Btn3);
    Home_KeysRow4_cell_0_1->fn->setBackgroundType(Home_KeysRow4_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_1->fn->setBorderType(Home_KeysRow4_cell_0_1, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4_cell_0_1->fn->setImagePosition(Home_KeysRow4_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow4_cell_0_2 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 2);
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 2, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow4->fn->setKeyValue(Home_KeysRow4, 0, 2, (leString*)&string_strc);
    Home_KeysRow4_cell_0_2->fn->setString(Home_KeysRow4_cell_0_2, (leString*)&string_strc);
    Home_KeysRow4_cell_0_2->fn->setPressedImage(Home_KeysRow4_cell_0_2, &Btn3_Pressed);
    Home_KeysRow4_cell_0_2->fn->setReleasedImage(Home_KeysRow4_cell_0_2, &Btn3);
    Home_KeysRow4_cell_0_2->fn->setBackgroundType(Home_KeysRow4_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_2->fn->setBorderType(Home_KeysRow4_cell_0_2, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4_cell_0_2->fn->setImagePosition(Home_KeysRow4_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow4_cell_0_3 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 3);
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 3, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow4->fn->setKeyValue(Home_KeysRow4, 0, 3, (leString*)&string_strv);
    Home_KeysRow4_cell_0_3->fn->setString(Home_KeysRow4_cell_0_3, (leString*)&string_strv);
    Home_KeysRow4_cell_0_3->fn->setPressedImage(Home_KeysRow4_cell_0_3, &Btn3_Pressed);
    Home_KeysRow4_cell_0_3->fn->setReleasedImage(Home_KeysRow4_cell_0_3, &Btn3);
    Home_KeysRow4_cell_0_3->fn->setBackgroundType(Home_KeysRow4_cell_0_3, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_3->fn->setBorderType(Home_KeysRow4_cell_0_3, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4_cell_0_3->fn->setImagePosition(Home_KeysRow4_cell_0_3, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow4_cell_0_4 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 4);
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 4, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow4->fn->setKeyValue(Home_KeysRow4, 0, 4, (leString*)&string_strb);
    Home_KeysRow4_cell_0_4->fn->setString(Home_KeysRow4_cell_0_4, (leString*)&string_strb);
    Home_KeysRow4_cell_0_4->fn->setPressedImage(Home_KeysRow4_cell_0_4, &Btn3_Pressed);
    Home_KeysRow4_cell_0_4->fn->setReleasedImage(Home_KeysRow4_cell_0_4, &Btn3);
    Home_KeysRow4_cell_0_4->fn->setBackgroundType(Home_KeysRow4_cell_0_4, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_4->fn->setBorderType(Home_KeysRow4_cell_0_4, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4_cell_0_4->fn->setImagePosition(Home_KeysRow4_cell_0_4, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow4_cell_0_5 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 5);
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 5, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow4->fn->setKeyValue(Home_KeysRow4, 0, 5, (leString*)&string_strn);
    Home_KeysRow4_cell_0_5->fn->setString(Home_KeysRow4_cell_0_5, (leString*)&string_strn);
    Home_KeysRow4_cell_0_5->fn->setPressedImage(Home_KeysRow4_cell_0_5, &Btn3_Pressed);
    Home_KeysRow4_cell_0_5->fn->setReleasedImage(Home_KeysRow4_cell_0_5, &Btn3);
    Home_KeysRow4_cell_0_5->fn->setBackgroundType(Home_KeysRow4_cell_0_5, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_5->fn->setBorderType(Home_KeysRow4_cell_0_5, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4_cell_0_5->fn->setImagePosition(Home_KeysRow4_cell_0_5, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow4_cell_0_6 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 6);
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 6, LE_KEYPAD_CELL_ACTION_APPEND);
    Home_KeysRow4->fn->setKeyValue(Home_KeysRow4, 0, 6, (leString*)&string_strm);
    Home_KeysRow4_cell_0_6->fn->setString(Home_KeysRow4_cell_0_6, (leString*)&string_strm);
    Home_KeysRow4_cell_0_6->fn->setPressedImage(Home_KeysRow4_cell_0_6, &Btn3_Pressed);
    Home_KeysRow4_cell_0_6->fn->setReleasedImage(Home_KeysRow4_cell_0_6, &Btn3);
    Home_KeysRow4_cell_0_6->fn->setBackgroundType(Home_KeysRow4_cell_0_6, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_6->fn->setBorderType(Home_KeysRow4_cell_0_6, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4_cell_0_6->fn->setImagePosition(Home_KeysRow4_cell_0_6, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Home_KeysRow4_cell_0_7 = Home_KeysRow4->fn->getCellButton(Home_KeysRow4, 0, 7);
    Home_KeysRow4_cell_0_7->fn->setPressedImage(Home_KeysRow4_cell_0_7, &Btn_BckSpc_Pressed);
    Home_KeysRow4_cell_0_7->fn->setReleasedImage(Home_KeysRow4_cell_0_7, &Btn_BckSpc);
    Home_KeysRow4_cell_0_7->fn->setBackgroundType(Home_KeysRow4_cell_0_7, LE_WIDGET_BACKGROUND_NONE);
    Home_KeysRow4_cell_0_7->fn->setBorderType(Home_KeysRow4_cell_0_7, LE_WIDGET_BORDER_NONE);
    Home_KeysRow4->fn->setKeyClickEventCallback(Home_KeysRow4, event_Home_KeysRow4_OnKeyClick);
    Home_panel_Touch_Keyboard->fn->addChild(Home_panel_Touch_Keyboard, (leWidget*)Home_KeysRow4);

    Home_panel_Row5 = leWidget_New();
    Home_panel_Row5->fn->setPosition(Home_panel_Row5, 0, 240);
    Home_panel_Row5->fn->setSize(Home_panel_Row5, 774, 56);
    Home_panel_Row5->fn->setBackgroundType(Home_panel_Row5, LE_WIDGET_BACKGROUND_NONE);
    Home_panel_Touch_Keyboard->fn->addChild(Home_panel_Touch_Keyboard, (leWidget*)Home_panel_Row5);

    Home_BtnKeyClear = leButtonWidget_New();
    Home_BtnKeyClear->fn->setPosition(Home_BtnKeyClear, 510, -3);
    Home_BtnKeyClear->fn->setSize(Home_BtnKeyClear, 98, 64);
    Home_BtnKeyClear->fn->setScheme(Home_BtnKeyClear, &text_lightgray);
    Home_BtnKeyClear->fn->setBackgroundType(Home_BtnKeyClear, LE_WIDGET_BACKGROUND_NONE);
    Home_BtnKeyClear->fn->setBorderType(Home_BtnKeyClear, LE_WIDGET_BORDER_NONE);
    Home_BtnKeyClear->fn->setString(Home_BtnKeyClear, (leString*)&string_str_clear);
    Home_BtnKeyClear->fn->setPressedImage(Home_BtnKeyClear, (leImage*)&Btn_Clear_Pressed);
    Home_BtnKeyClear->fn->setReleasedImage(Home_BtnKeyClear, (leImage*)&Btn_Clear);
    Home_BtnKeyClear->fn->setImagePosition(Home_BtnKeyClear, LE_RELATIVE_POSITION_BEHIND);
    Home_BtnKeyClear->fn->setReleasedEventCallback(Home_BtnKeyClear, event_Home_BtnKeyClear_OnReleased);
    Home_panel_Row5->fn->addChild(Home_panel_Row5, (leWidget*)Home_BtnKeyClear);

    Home_BtnKeyShift = leButtonWidget_New();
    Home_BtnKeyShift->fn->setPosition(Home_BtnKeyShift, -4, -2);
    Home_BtnKeyShift->fn->setSize(Home_BtnKeyShift, 105, 56);
    Home_BtnKeyShift->fn->setScheme(Home_BtnKeyShift, &text_lightgray);
    Home_BtnKeyShift->fn->setBackgroundType(Home_BtnKeyShift, LE_WIDGET_BACKGROUND_NONE);
    Home_BtnKeyShift->fn->setBorderType(Home_BtnKeyShift, LE_WIDGET_BORDER_NONE);
    Home_BtnKeyShift->fn->setToggleable(Home_BtnKeyShift, LE_TRUE);
    Home_BtnKeyShift->fn->setString(Home_BtnKeyShift, (leString*)&string_str_shift);
    Home_BtnKeyShift->fn->setPressedImage(Home_BtnKeyShift, (leImage*)&Btn_Shift_Pressed);
    Home_BtnKeyShift->fn->setReleasedImage(Home_BtnKeyShift, (leImage*)&Btn_Shift);
    Home_BtnKeyShift->fn->setImagePosition(Home_BtnKeyShift, LE_RELATIVE_POSITION_BEHIND);
    Home_BtnKeyShift->fn->setPressedEventCallback(Home_BtnKeyShift, event_Home_BtnKeyShift_OnPressed);
    Home_BtnKeyShift->fn->setReleasedEventCallback(Home_BtnKeyShift, event_Home_BtnKeyShift_OnReleased);
    Home_panel_Row5->fn->addChild(Home_panel_Row5, (leWidget*)Home_BtnKeyShift);

    Home_image_Container_38 = leImageWidget_New();
    Home_image_Container_38->fn->setPosition(Home_image_Container_38, 20, 24);
    Home_image_Container_38->fn->setSize(Home_image_Container_38, 11, 11);
    Home_image_Container_38->fn->setBackgroundType(Home_image_Container_38, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_38->fn->setBorderType(Home_image_Container_38, LE_WIDGET_BORDER_NONE);
    Home_image_Container_38->fn->setImage(Home_image_Container_38, (leImage*)&figmaImg_Container_38);
    Home_BtnKeyShift->fn->addChild(Home_BtnKeyShift, (leWidget*)Home_image_Container_38);

    Home_BtnKeySpace = leButtonWidget_New();
    Home_BtnKeySpace->fn->setPosition(Home_BtnKeySpace, 103, -2);
    Home_BtnKeySpace->fn->setSize(Home_BtnKeySpace, 406, 64);
    Home_BtnKeySpace->fn->setBackgroundType(Home_BtnKeySpace, LE_WIDGET_BACKGROUND_NONE);
    Home_BtnKeySpace->fn->setBorderType(Home_BtnKeySpace, LE_WIDGET_BORDER_NONE);
    Home_BtnKeySpace->fn->setPressedImage(Home_BtnKeySpace, (leImage*)&Btn_Spc_Pressed);
    Home_BtnKeySpace->fn->setReleasedImage(Home_BtnKeySpace, (leImage*)&Btn_Spc);
    Home_BtnKeySpace->fn->setReleasedEventCallback(Home_BtnKeySpace, event_Home_BtnKeySpace_OnReleased);
    Home_panel_Row5->fn->addChild(Home_panel_Row5, (leWidget*)Home_BtnKeySpace);

    Home_image_Button___Space_Bar = leImageWidget_New();
    Home_image_Button___Space_Bar->fn->setPosition(Home_image_Button___Space_Bar, 170, 24);
    Home_image_Button___Space_Bar->fn->setSize(Home_image_Button___Space_Bar, 60, 12);
    Home_image_Button___Space_Bar->fn->setBackgroundType(Home_image_Button___Space_Bar, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Button___Space_Bar->fn->setBorderType(Home_image_Button___Space_Bar, LE_WIDGET_BORDER_NONE);
    Home_image_Button___Space_Bar->fn->setImage(Home_image_Button___Space_Bar, (leImage*)&figmaImg_Button___Space_Bar);
    Home_BtnKeySpace->fn->addChild(Home_BtnKeySpace, (leWidget*)Home_image_Button___Space_Bar);

    Home_BtnKeyStart = leButtonWidget_New();
    Home_BtnKeyStart->fn->setPosition(Home_BtnKeyStart, 598, -12);
    Home_BtnKeyStart->fn->setSize(Home_BtnKeyStart, 192, 84);
    Home_BtnKeyStart->fn->setScheme(Home_BtnKeyStart, &text_white);
    Home_BtnKeyStart->fn->setBackgroundType(Home_BtnKeyStart, LE_WIDGET_BACKGROUND_NONE);
    Home_BtnKeyStart->fn->setBorderType(Home_BtnKeyStart, LE_WIDGET_BORDER_NONE);
    Home_BtnKeyStart->fn->setString(Home_BtnKeyStart, (leString*)&string_str_startcook);
    Home_BtnKeyStart->fn->setPressedImage(Home_BtnKeyStart, (leImage*)&Btn_Start_Pressed);
    Home_BtnKeyStart->fn->setReleasedImage(Home_BtnKeyStart, (leImage*)&Btn_Start);
    Home_BtnKeyStart->fn->setImagePosition(Home_BtnKeyStart, LE_RELATIVE_POSITION_BEHIND);
    Home_BtnKeyStart->fn->setReleasedEventCallback(Home_BtnKeyStart, event_Home_BtnKeyStart_OnReleased);
    Home_panel_Row5->fn->addChild(Home_panel_Row5, (leWidget*)Home_BtnKeyStart);

    Home_image_Container_39 = leImageWidget_New();
    Home_image_Container_39->fn->setPosition(Home_image_Container_39, 42, 35);
    Home_image_Container_39->fn->setSize(Home_image_Container_39, 11, 15);
    Home_image_Container_39->fn->setBackgroundType(Home_image_Container_39, LE_WIDGET_BACKGROUND_NONE);
    Home_image_Container_39->fn->setBorderType(Home_image_Container_39, LE_WIDGET_BORDER_NONE);
    Home_image_Container_39->fn->setImage(Home_image_Container_39, (leImage*)&figmaImg_Container_39);
    Home_BtnKeyStart->fn->addChild(Home_BtnKeyStart, (leWidget*)Home_image_Container_39);

    Home_SelectPanel = leImageWidget_New();
    Home_SelectPanel->fn->setPosition(Home_SelectPanel, 12, 132);
    Home_SelectPanel->fn->setSize(Home_SelectPanel, 774, 44);
    Home_SelectPanel->fn->setBackgroundType(Home_SelectPanel, LE_WIDGET_BACKGROUND_NONE);
    Home_SelectPanel->fn->setBorderType(Home_SelectPanel, LE_WIDGET_BORDER_NONE);
    Home_SelectPanel->fn->setImage(Home_SelectPanel, (leImage*)&SelectPanel);
    root0->fn->addChild(root0, (leWidget*)Home_SelectPanel);

    Home_Btn_Next = leButtonWidget_New();
    Home_Btn_Next->fn->setPosition(Home_Btn_Next, 733, 137);
    Home_Btn_Next->fn->setSize(Home_Btn_Next, 48, 32);
    Home_Btn_Next->fn->setBackgroundType(Home_Btn_Next, LE_WIDGET_BACKGROUND_NONE);
    Home_Btn_Next->fn->setBorderType(Home_Btn_Next, LE_WIDGET_BORDER_NONE);
    Home_Btn_Next->fn->setPressedImage(Home_Btn_Next, (leImage*)&Btn_Next);
    Home_Btn_Next->fn->setReleasedImage(Home_Btn_Next, (leImage*)&Btn_Next);
    root0->fn->addChild(root0, (leWidget*)Home_Btn_Next);

    Home_Btn_Prev = leButtonWidget_New();
    Home_Btn_Prev->fn->setPosition(Home_Btn_Prev, 681, 137);
    Home_Btn_Prev->fn->setSize(Home_Btn_Prev, 48, 32);
    Home_Btn_Prev->fn->setBackgroundType(Home_Btn_Prev, LE_WIDGET_BACKGROUND_NONE);
    Home_Btn_Prev->fn->setBorderType(Home_Btn_Prev, LE_WIDGET_BORDER_NONE);
    Home_Btn_Prev->fn->setPressedImage(Home_Btn_Prev, (leImage*)&Btn_Previous);
    Home_Btn_Prev->fn->setReleasedImage(Home_Btn_Prev, (leImage*)&Btn_Previous);
    root0->fn->addChild(root0, (leWidget*)Home_Btn_Prev);

    Home_Btn_Select = leButtonWidget_New();
    Home_Btn_Select->fn->setPosition(Home_Btn_Select, 28, 132);
    Home_Btn_Select->fn->setSize(Home_Btn_Select, 75, 41);
    Home_Btn_Select->fn->setBackgroundType(Home_Btn_Select, LE_WIDGET_BACKGROUND_NONE);
    Home_Btn_Select->fn->setBorderType(Home_Btn_Select, LE_WIDGET_BORDER_NONE);
    Home_Btn_Select->fn->setPressedImage(Home_Btn_Select, (leImage*)&Btn_Select);
    Home_Btn_Select->fn->setReleasedImage(Home_Btn_Select, (leImage*)&Btn_Select);
    root0->fn->addChild(root0, (leWidget*)Home_Btn_Select);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Home_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Home(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Home_OnUpdate(); // raise event
}

void screenHide_Home(void)
{
    Home_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Home_panel_Pinyin_Keyboard = NULL;
    Home_SelectPanel = NULL;
    Home_Btn_Next = NULL;
    Home_Btn_Prev = NULL;
    Home_Btn_Select = NULL;
    Home_ImageWidget_0 = NULL;
    Home_panel_TouchScreenMainContainer = NULL;
    Home_panel_TopSection = NULL;
    Home_panel_Touch_Keyboard = NULL;
    Home_panel_Status_Bar = NULL;
    Home_panel_Cooking_Mode = NULL;
    Home_panel_Active_Input_Field = NULL;
    Home_panel_Container = NULL;
    Home_panel_Container_3 = NULL;
    Home_panel_Overlay_Border = NULL;
    Home_panel_Container_0 = NULL;
    Home_panel_Container_1 = NULL;
    Home_ImageWidget_Zone = NULL;
    Home_image_Overlay_Border = NULL;
    Home_label_Text = NULL;
    Home_label_Text_0 = NULL;
    Home_panel_Container_2 = NULL;
    Home_label_Text_1 = NULL;
    Home_image_Container_2 = NULL;
    Home_panel_Container_4 = NULL;
    Home_panel_Container_7 = NULL;
    Home_panel_Container_8 = NULL;
    Home_panel_Container_5 = NULL;
    Home_panel_Container_6 = NULL;
    Home_image_Container_5 = NULL;
    Home_image_Container_6 = NULL;
    Home_label_Text_2 = NULL;
    Home_label_Text_3 = NULL;
    Home_panel_Button = NULL;
    Home_panel_Button_0 = NULL;
    Home_panel_Button_1 = NULL;
    Home_panel_Button_2 = NULL;
    Home_panel_Button_3 = NULL;
    Home_panel_Button_4 = NULL;
    Home_panel_Button_5 = NULL;
    Home_panel_Button_6 = NULL;
    Home_panel_Button_7 = NULL;
    Home_panel_Button_8 = NULL;
    Home_panel_Button_9 = NULL;
    Home_panel_Button_10 = NULL;
    Home_panel_Button_11 = NULL;
    Home_panel_Button_12 = NULL;
    Home_panel_Button_13 = NULL;
    Home_panel_Button_14 = NULL;
    Home_panel_Button_15 = NULL;
    Home_panel_Button_16 = NULL;
    Home_panel_Button_17 = NULL;
    Home_BtnKey_Select = NULL;
    Home_panel_Container_9 = NULL;
    Home_panel_Container_10 = NULL;
    Home_image_Container_9 = NULL;
    Home_label_Text_4 = NULL;
    Home_panel_Container_11 = NULL;
    Home_panel_Container_12 = NULL;
    Home_image_Container_11 = NULL;
    Home_label_Text_5 = NULL;
    Home_panel_Container_13 = NULL;
    Home_panel_Container_14 = NULL;
    Home_image_Container_13 = NULL;
    Home_label_Text_6 = NULL;
    Home_panel_Container_15 = NULL;
    Home_panel_Container_16 = NULL;
    Home_image_Container_15 = NULL;
    Home_label_Text_7 = NULL;
    Home_panel_Container_17 = NULL;
    Home_panel_Container_18 = NULL;
    Home_image_Container_17 = NULL;
    Home_label_Text_8 = NULL;
    Home_panel_Container_19 = NULL;
    Home_panel_Container_20 = NULL;
    Home_image_Container_19 = NULL;
    Home_label_Text_9 = NULL;
    Home_panel_Container_21 = NULL;
    Home_panel_Container_22 = NULL;
    Home_image_Container_21 = NULL;
    Home_label_Text_10 = NULL;
    Home_panel_Container_23 = NULL;
    Home_panel_Container_24 = NULL;
    Home_image_Container_23 = NULL;
    Home_label_Text_11 = NULL;
    Home_panel_Container_25 = NULL;
    Home_panel_Container_26 = NULL;
    Home_image_Container_25 = NULL;
    Home_label_Text_12 = NULL;
    Home_panel_Container_27 = NULL;
    Home_panel_Container_28 = NULL;
    Home_image_Container_27 = NULL;
    Home_label_Text_13 = NULL;
    Home_ImageWidget_Input = NULL;
    Home_panel_Input_Box = NULL;
    Home_image_Container_30 = NULL;
    Home_label_Text_14 = NULL;
    Home_TextFieldWidget_Input = NULL;
    Home_Btn_ClearInput = NULL;
    Home_panel_Quick_Preset___Heat_Zone_Status_Widget = NULL;
    Home_ButtonWidget_HeatZone = NULL;
    Home_panel_Container_33 = NULL;
    Home_panel_Overlay_Border_0 = NULL;
    Home_panel_Container_34 = NULL;
    Home_panel_Container_35 = NULL;
    Home_label_Text_15 = NULL;
    Home_label_Text_16 = NULL;
    Home_ImageWidget_Temp = NULL;
    Home_panel_Container_36 = NULL;
    Home_image_Container_36 = NULL;
    Home_KeysRow1 = NULL;
    Home_KeysRow2 = NULL;
    Home_KeysRow3 = NULL;
    Home_KeysRow4 = NULL;
    Home_panel_Row5 = NULL;
    Home_BtnKeyClear = NULL;
    Home_BtnKeyShift = NULL;
    Home_BtnKeySpace = NULL;
    Home_BtnKeyStart = NULL;
    Home_image_Container_38 = NULL;
    Home_image_Button___Space_Bar = NULL;
    Home_image_Container_39 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Home(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Home(uint32_t lyrIdx)
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

