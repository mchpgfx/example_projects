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
extern leImageWidget* Screen0_ImageWidget_0;
extern leCircularSliderWidget* Screen0_CircularSliderWidget_0;
extern leLabelWidget* Screen0_LabelSliderVal;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_CircularSliderWidget_0_OnValueChanged(leCircularSliderWidget* sld, int32_t val);
void event_Screen0_CircularSliderWidget_0_OnPressed(leCircularSliderWidget* sld, int32_t val);
void event_Screen0_CircularSliderWidget_0_OnReleased(leCircularSliderWidget* sld, int32_t val);

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
