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
extern leWidget* Screen0_PanelWidget_0;
extern leButtonWidget* Screen0_ButtonWidget_0;
extern leButtonWidget* Screen0_ButtonWidget_0_0;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_0;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_0_0;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_0_0_0;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_0_1;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_1;
extern leWidget* Screen0_PanelWidget_0_0;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_0_2;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_0_0_1;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_1_2;
extern leLabelWidget* Screen0_LabelWidget_0;
extern leLabelWidget* Screen0_LabelWidget_0_0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_ButtonWidget_0_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_0_0_OnReleased(leButtonWidget* btn);

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