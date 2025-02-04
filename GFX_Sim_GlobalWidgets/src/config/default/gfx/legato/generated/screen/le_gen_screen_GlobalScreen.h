#ifndef LE_GEN_SCREEN_GLOBALSCREEN_H
#define LE_GEN_SCREEN_GLOBALSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* GlobalScreen_BackgroundPanel;
extern leWidget* GlobalScreen_pnlMenu;
extern leLabelWidget* GlobalScreen_lblCount;
extern leButtonWidget* GlobalScreen_btnScreen0;
extern leButtonWidget* GlobalScreen_btnScreen1;
extern leButtonWidget* GlobalScreen_btnScreen2;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_GlobalScreen_btnScreen0_OnReleased(leButtonWidget* btn);
void event_GlobalScreen_btnScreen1_OnReleased(leButtonWidget* btn);
void event_GlobalScreen_btnScreen2_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_GlobalScreen(void); // called when Legato is initialized
leResult screenShow_GlobalScreen(void); // called when screen is shown
void screenHide_GlobalScreen(void); // called when screen is hidden
void screenDestroy_GlobalScreen(void); // called when Legato is destroyed
void screenUpdate_GlobalScreen(void); // called when Legato is updating

leWidget* screenGetRoot_GlobalScreen(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_GLOBALSCREEN_H
