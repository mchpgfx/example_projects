#ifndef LE_GEN_SCREEN_LOGO_SCREEN_H
#define LE_GEN_SCREEN_LOGO_SCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Logo_Screen_BackgroundPanel;
extern leKeyPadWidget* Logo_Screen_KeyPadWidget;
extern leImageWidget* Logo_Screen_ImageWidget_Logo_1;
extern leImageWidget* Logo_Screen_ImageWidget_Logo_4;
extern leImageWidget* Logo_Screen_ImageWidget_Logo_6;
extern leImageWidget* Logo_Screen_ImageWidget_Logo_5;
extern leImageWidget* Logo_Screen_ImageWidget_Logo_2;
extern leImageWidget* Logo_Screen_ImageWidget_Logo_3;
extern leLabelWidget* Logo_Screen_LabelWidget_KeyPress;
extern leButtonWidget* Logo_Screen_ButtonWidget_TicTacToe;
extern leTextFieldWidget* Logo_Screen_TextFieldWidget;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Logo_Screen_KeyPadWidget_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Logo_Screen_ButtonWidget_TicTacToe_OnPressed(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Logo_Screen(void); // called when Legato is initialized
leResult screenShow_Logo_Screen(void); // called when screen is shown
void screenHide_Logo_Screen(void); // called when screen is hidden
void screenDestroy_Logo_Screen(void); // called when Legato is destroyed
void screenUpdate_Logo_Screen(void); // called when Legato is updating

leWidget* screenGetRoot_Logo_Screen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Logo_Screen_OnShow(void); // called when this screen is shown
void Logo_Screen_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_LOGO_SCREEN_H
