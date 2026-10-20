#ifndef LE_GEN_SCREEN_HOME_H
#define LE_GEN_SCREEN_HOME_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Home_panel_Pinyin_Keyboard;
extern leImageWidget* Home_SelectPanel;
extern leButtonWidget* Home_Btn_Next;
extern leButtonWidget* Home_Btn_Prev;
extern leButtonWidget* Home_Btn_Select;
extern leImageWidget* Home_ImageWidget_0;
extern leWidget* Home_panel_TouchScreenMainContainer;
extern leWidget* Home_panel_TopSection;
extern leWidget* Home_panel_Touch_Keyboard;
extern leWidget* Home_panel_Status_Bar;
extern leWidget* Home_panel_Cooking_Mode;
extern leWidget* Home_panel_Active_Input_Field;
extern leWidget* Home_panel_Container;
extern leWidget* Home_panel_Container_3;
extern leWidget* Home_panel_Overlay_Border;
extern leWidget* Home_panel_Container_0;
extern leWidget* Home_panel_Container_1;
extern leImageWidget* Home_ImageWidget_Zone;
extern leImageWidget* Home_image_Overlay_Border;
extern leLabelWidget* Home_label_Text;
extern leLabelWidget* Home_label_Text_0;
extern leWidget* Home_panel_Container_2;
extern leLabelWidget* Home_label_Text_1;
extern leImageWidget* Home_image_Container_2;
extern leWidget* Home_panel_Container_4;
extern leWidget* Home_panel_Container_7;
extern leWidget* Home_panel_Container_8;
extern leWidget* Home_panel_Container_5;
extern leWidget* Home_panel_Container_6;
extern leImageWidget* Home_image_Container_5;
extern leImageWidget* Home_image_Container_6;
extern leLabelWidget* Home_label_Text_2;
extern leLabelWidget* Home_label_Text_3;
extern leWidget* Home_panel_Button;
extern leWidget* Home_panel_Button_0;
extern leWidget* Home_panel_Button_1;
extern leWidget* Home_panel_Button_2;
extern leWidget* Home_panel_Button_3;
extern leWidget* Home_panel_Button_4;
extern leWidget* Home_panel_Button_5;
extern leWidget* Home_panel_Button_6;
extern leWidget* Home_panel_Button_7;
extern leWidget* Home_panel_Button_8;
extern leWidget* Home_panel_Button_9;
extern leWidget* Home_panel_Button_10;
extern leWidget* Home_panel_Button_11;
extern leWidget* Home_panel_Button_12;
extern leWidget* Home_panel_Button_13;
extern leWidget* Home_panel_Button_14;
extern leWidget* Home_panel_Button_15;
extern leWidget* Home_panel_Button_16;
extern leWidget* Home_panel_Button_17;
extern leButtonWidget* Home_BtnKey_Select;
extern leWidget* Home_panel_Container_9;
extern leWidget* Home_panel_Container_10;
extern leImageWidget* Home_image_Container_9;
extern leLabelWidget* Home_label_Text_4;
extern leWidget* Home_panel_Container_11;
extern leWidget* Home_panel_Container_12;
extern leImageWidget* Home_image_Container_11;
extern leLabelWidget* Home_label_Text_5;
extern leWidget* Home_panel_Container_13;
extern leWidget* Home_panel_Container_14;
extern leImageWidget* Home_image_Container_13;
extern leLabelWidget* Home_label_Text_6;
extern leWidget* Home_panel_Container_15;
extern leWidget* Home_panel_Container_16;
extern leImageWidget* Home_image_Container_15;
extern leLabelWidget* Home_label_Text_7;
extern leWidget* Home_panel_Container_17;
extern leWidget* Home_panel_Container_18;
extern leImageWidget* Home_image_Container_17;
extern leLabelWidget* Home_label_Text_8;
extern leWidget* Home_panel_Container_19;
extern leWidget* Home_panel_Container_20;
extern leImageWidget* Home_image_Container_19;
extern leLabelWidget* Home_label_Text_9;
extern leWidget* Home_panel_Container_21;
extern leWidget* Home_panel_Container_22;
extern leImageWidget* Home_image_Container_21;
extern leLabelWidget* Home_label_Text_10;
extern leWidget* Home_panel_Container_23;
extern leWidget* Home_panel_Container_24;
extern leImageWidget* Home_image_Container_23;
extern leLabelWidget* Home_label_Text_11;
extern leWidget* Home_panel_Container_25;
extern leWidget* Home_panel_Container_26;
extern leImageWidget* Home_image_Container_25;
extern leLabelWidget* Home_label_Text_12;
extern leWidget* Home_panel_Container_27;
extern leWidget* Home_panel_Container_28;
extern leImageWidget* Home_image_Container_27;
extern leLabelWidget* Home_label_Text_13;
extern leImageWidget* Home_ImageWidget_Input;
extern leWidget* Home_panel_Input_Box;
extern leImageWidget* Home_image_Container_30;
extern leLabelWidget* Home_label_Text_14;
extern leTextFieldWidget* Home_TextFieldWidget_Input;
extern leButtonWidget* Home_Btn_ClearInput;
extern leWidget* Home_panel_Quick_Preset___Heat_Zone_Status_Widget;
extern leButtonWidget* Home_ButtonWidget_HeatZone;
extern leWidget* Home_panel_Container_33;
extern leWidget* Home_panel_Overlay_Border_0;
extern leWidget* Home_panel_Container_34;
extern leWidget* Home_panel_Container_35;
extern leLabelWidget* Home_label_Text_15;
extern leLabelWidget* Home_label_Text_16;
extern leImageWidget* Home_ImageWidget_Temp;
extern leWidget* Home_panel_Container_36;
extern leImageWidget* Home_image_Container_36;
extern leKeyPadWidget* Home_KeysRow1;
extern leKeyPadWidget* Home_KeysRow2;
extern leKeyPadWidget* Home_KeysRow3;
extern leKeyPadWidget* Home_KeysRow4;
extern leWidget* Home_panel_Row5;
extern leButtonWidget* Home_BtnKeyClear;
extern leButtonWidget* Home_BtnKeyShift;
extern leButtonWidget* Home_BtnKeySpace;
extern leButtonWidget* Home_BtnKeyStart;
extern leImageWidget* Home_image_Container_38;
extern leImageWidget* Home_image_Button___Space_Bar;
extern leImageWidget* Home_image_Container_39;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Home_Btn_ClearInput_OnReleased(leButtonWidget* btn);
void event_Home_KeysRow1_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Home_KeysRow2_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Home_KeysRow3_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Home_KeysRow4_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Home_BtnKeyClear_OnReleased(leButtonWidget* btn);
void event_Home_BtnKeyShift_OnPressed(leButtonWidget* btn);
void event_Home_BtnKeyShift_OnReleased(leButtonWidget* btn);
void event_Home_BtnKeySpace_OnReleased(leButtonWidget* btn);
void event_Home_BtnKeyStart_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Home(void); // called when Legato is initialized
leResult screenShow_Home(void); // called when screen is shown
void screenHide_Home(void); // called when screen is hidden
void screenDestroy_Home(void); // called when Legato is destroyed
void screenUpdate_Home(void); // called when Legato is updating

leWidget* screenGetRoot_Home(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Home_OnShow(void); // called when this screen is shown
void Home_OnHide(void); // called when this screen is hidden
void Home_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_HOME_H
