#ifndef LE_GEN_SCREEN_SCREEN1_H
#define LE_GEN_SCREEN_SCREEN1_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Screen1_Panel_0;
extern leKeyPadWidget* Screen1_KeyPadWidget_0;
extern leTextFieldWidget* Screen1_TextFieldWidget_0;
extern leButtonWidget* Screen1_OkButton;
extern leLabelWidget* Screen1_NewCode;
extern leButtonWidget* Screen1_SetDefaultButton;
extern leLabelWidget* Screen1_LabelWidget_0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen1_KeyPadWidget_0_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Screen1_OkButton_OnPressed(leButtonWidget* btn);
void event_Screen1_SetDefaultButton_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Screen1(void); // called when Legato is initialized
leResult screenShow_Screen1(void); // called when screen is shown
void screenHide_Screen1(void); // called when screen is hidden
void screenDestroy_Screen1(void); // called when Legato is destroyed
void screenUpdate_Screen1(void); // called when Legato is updating

leWidget* screenGetRoot_Screen1(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Screen1_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREEN1_H
