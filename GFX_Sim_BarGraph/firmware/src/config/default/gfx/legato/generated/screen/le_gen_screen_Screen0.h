#ifndef LE_GEN_SCREEN_SCREEN0_H
#define LE_GEN_SCREEN_SCREEN0_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Screen0_BackgroundPanel;
extern leBarGraphWidget* Screen0_BarGraphWidget_0;
extern leCheckBoxWidget* Screen0_CheckBoxWidget_0;
extern leCheckBoxWidget* Screen0_CheckBoxWidget_1;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_CheckBoxWidget_0_OnChecked(leCheckBoxWidget* btn);
void event_Screen0_CheckBoxWidget_0_OnUnchecked(leCheckBoxWidget* btn);
void event_Screen0_CheckBoxWidget_1_OnChecked(leCheckBoxWidget* btn);
void event_Screen0_CheckBoxWidget_1_OnUnchecked(leCheckBoxWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Screen0(void); // called when Legato is initialized
leResult screenShow_Screen0(void); // called when screen is shown
void screenHide_Screen0(void); // called when screen is hidden
void screenDestroy_Screen0(void); // called when Legato is destroyed
void screenUpdate_Screen0(void); // called when Legato is updating

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREEN0_H