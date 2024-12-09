#ifndef LE_GEN_SCREEN_LASTNAMECONFSCREEN_H
#define LE_GEN_SCREEN_LASTNAMECONFSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* LastNameConfScreen_BackgroundPanel;
extern leLabelWidget* LastNameConfScreen_LabelWidget_0;
extern leTextFieldWidget* LastNameConfScreen_txtFieldLastName;
extern leTextFieldWidget* LastNameConfScreen_txtFieldConfNum;
extern leLabelWidget* LastNameConfScreen_LabelWidget_1;
extern leImageWidget* LastNameConfScreen_imgMGS;
extern leImageWidget* LastNameConfScreen_ImageWidget_1_0;
extern leButtonWidget* LastNameConfScreen_btnContinue;
extern leLabelWidget* LastNameConfScreen_LabelWidget_3;
extern leLabelWidget* LastNameConfScreen_LabelWidget_3_0;
extern leWidget* LastNameConfScreen_pnlKeyboard;
extern leWidget* LastNameConfScreen_pnlError;
extern leWidget* LastNameConfScreen_pnlSuccess;
extern leWidget* LastNameConfScreen_PanelWidget_0_0;
extern leKeyPadWidget* LastNameConfScreen_keysRow1;
extern leKeyPadWidget* LastNameConfScreen_keysRow2;
extern leKeyPadWidget* LastNameConfScreen_keysRow3;
extern leKeyPadWidget* LastNameConfScreen_keysBtmLeft;
extern leKeyPadWidget* LastNameConfScreen_keysBtmRight;
extern leKeyPadWidget* LastNameConfScreen_keySpace;
extern leButtonWidget* LastNameConfScreen_keyShiftLeft;
extern leButtonWidget* LastNameConfScreen_keyShiftRight;
extern leButtonWidget* LastNameConfScreen_keyEnter;
extern leButtonWidget* LastNameConfScreen_keyNumLeft;
extern leButtonWidget* LastNameConfScreen_keyNumRight;
extern leLabelWidget* LastNameConfScreen_LabelWidget_2;
extern leLabelWidget* LastNameConfScreen_LabelWidget_4;
extern leButtonWidget* LastNameConfScreen_btnErrorBack;
extern leLabelWidget* LastNameConfScreen_LabelWidget_2_0;
extern leLabelWidget* LastNameConfScreen_LabelWidget_4_0;
extern leButtonWidget* LastNameConfScreen_btnSuccessOk;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_LastNameConfScreen_txtFieldLastName_OnFocusChanged(leTextFieldWidget* btn, leBool state);
void event_LastNameConfScreen_txtFieldConfNum_OnFocusChanged(leTextFieldWidget* btn, leBool state);
void event_LastNameConfScreen_btnContinue_OnReleased(leButtonWidget* btn);
void event_LastNameConfScreen_keyShiftLeft_OnPressed(leButtonWidget* btn);
void event_LastNameConfScreen_keyShiftRight_OnPressed(leButtonWidget* btn);
void event_LastNameConfScreen_keyEnter_OnReleased(leButtonWidget* btn);
void event_LastNameConfScreen_keyNumLeft_OnPressed(leButtonWidget* btn);
void event_LastNameConfScreen_keyNumRight_OnPressed(leButtonWidget* btn);
void event_LastNameConfScreen_btnErrorBack_OnReleased(leButtonWidget* btn);
void event_LastNameConfScreen_btnSuccessOk_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_LastNameConfScreen(void); // called when Legato is initialized
leResult screenShow_LastNameConfScreen(void); // called when screen is shown
void screenHide_LastNameConfScreen(void); // called when screen is hidden
void screenDestroy_LastNameConfScreen(void); // called when Legato is destroyed
void screenUpdate_LastNameConfScreen(void); // called when Legato is updating

leWidget* screenGetRoot_LastNameConfScreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void LastNameConfScreen_OnShow(void); // called when this screen is shown
void LastNameConfScreen_OnHide(void); // called when this screen is hidden
void LastNameConfScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_LASTNAMECONFSCREEN_H
