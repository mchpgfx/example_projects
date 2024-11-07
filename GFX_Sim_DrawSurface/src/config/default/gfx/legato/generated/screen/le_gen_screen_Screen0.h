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
extern leDrawSurfaceWidget* Screen0_DrawSurfaceWidget_0;
extern leButtonWidget* Screen0_ButtonWidget_Red;
extern leButtonWidget* Screen0_ButtonWidget_Orange;
extern leButtonWidget* Screen0_ButtonWidget_Yellow;
extern leButtonWidget* Screen0_ButtonWidget_Green;
extern leButtonWidget* Screen0_ButtonWidget_Blue;
extern leButtonWidget* Screen0_ButtonWidget_Indigo;
extern leButtonWidget* Screen0_ButtonWidget_Violet;
extern leLabelWidget* Screen0_LabelWidget_0;
extern leSliderWidget* Screen0_SliderWidget_0;
extern leButtonWidget* Screen0_ButtonWidget_Random;
extern leButtonWidget* Screen0_ButtonWidget_Erase;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
leBool event_Screen0_DrawSurfaceWidget_0_OnDraw(leDrawSurfaceWidget* sfc, leRect* bounds);
void event_Screen0_ButtonWidget_Red_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Orange_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Yellow_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Green_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Blue_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Indigo_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Violet_OnReleased(leButtonWidget* btn);
void event_Screen0_SliderWidget_0_OnValueChanged(leSliderWidget* scr);
void event_Screen0_ButtonWidget_Random_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Erase_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Screen0(void); // called when Legato is initialized
leResult screenShow_Screen0(void); // called when screen is shown
void screenHide_Screen0(void); // called when screen is hidden
void screenDestroy_Screen0(void); // called when Legato is destroyed
void screenUpdate_Screen0(void); // called when Legato is updating

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Screen0_OnShow(void); // called when this screen is shown
void Screen0_OnHide(void); // called when this screen is hidden
void Screen0_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREEN0_H
