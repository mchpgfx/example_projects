#ifndef LE_GEN_SCREEN_GAME_SCREEN_H
#define LE_GEN_SCREEN_GAME_SCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Game_Screen_Panel_0;
extern leKeyPadWidget* Game_Screen_KeyPadWidget;
extern leButtonWidget* Game_Screen_ButtonWidget_Logo;
extern leLabelWidget* Game_Screen_LabelWidget_Player;
extern leLabelWidget* Game_Screen_LabelWidget_Winner;
extern leButtonWidget* Game_Screen_ButtonWidget_Game_Rst;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Game_Screen_KeyPadWidget_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Game_Screen_ButtonWidget_Logo_OnPressed(leButtonWidget* btn);
void event_Game_Screen_ButtonWidget_Game_Rst_OnPressed(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Game_Screen(void); // called when Legato is initialized
leResult screenShow_Game_Screen(void); // called when screen is shown
void screenHide_Game_Screen(void); // called when screen is hidden
void screenDestroy_Game_Screen(void); // called when Legato is destroyed
void screenUpdate_Game_Screen(void); // called when Legato is updating

leWidget* screenGetRoot_Game_Screen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Game_Screen_OnShow(void); // called when this screen is shown
void Game_Screen_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_GAME_SCREEN_H
