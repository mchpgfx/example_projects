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
extern leImageWidget* Screen0_ImageWidget1;
extern leRectangleWidget* Screen0_RectangleWidget_0;
extern leLabelWidget* Screen0_LabelWidget_scene0;
extern leImageWidget* Screen0_ImageWidget_batteryLevel;
extern leLabelWidget* Screen0_LabelWidget_percent;
extern leWidget* Screen0_PanelWidget_battery;
extern leRectangleWidget* Screen0_RectangleWidget_7;
extern leLabelWidget* Screen0_LabelWidget_15;
extern leLabelWidget* Screen0_LabelWidget_rtime;
extern leWidget* Screen0_PanelWidget_0;
extern leButtonWidget* Screen0_ButtonWidget_0;
extern leImageWidget* Screen0_ImageWidget_logo_animate;
extern leImageWidget* Screen0_ImageWidget_2;
extern leImageWidget* Screen0_ImageWidget_3;
extern leLabelWidget* Screen0_LabelWidget_0;
extern leLabelWidget* Screen0_LabelWidget_1;
extern leLabelWidget* Screen0_LabelWidget_2;
extern leLabelWidget* Screen0_LabelWidget_3;
extern leLabelWidget* Screen0_LabelWidget_4;
extern leLabelWidget* Screen0_LabelWidget_5;
extern leLabelWidget* Screen0_LabelWidget_6;
extern leLabelWidget* Screen0_LabelWidget_7;
extern leLabelWidget* Screen0_LabelWidget_8;
extern leLabelWidget* Screen0_LabelWidget_9;
extern leLabelWidget* Screen0_LabelWidget_10;
extern leLabelWidget* Screen0_LabelWidget_11;
extern leLabelWidget* Screen0_LabelWidget_12;
extern leLabelWidget* Screen0_LabelWidget_13;
extern leRectangleWidget* Screen0_RectangleWidget_1;
extern leRectangleWidget* Screen0_RectangleWidget_2;
extern leRectangleWidget* Screen0_RectangleWidget_3;
extern leRectangleWidget* Screen0_RectangleWidget_4;
extern leRectangleWidget* Screen0_RectangleWidget_5;
extern leButtonWidget* Screen0_ButtonWidget_plus;
extern leButtonWidget* Screen0_ButtonWidget_minus;
extern leLabelWidget* Screen0_rtc_label;
extern leImageSequenceWidget* Screen0_ImageSequenceWidget_0;
extern leRectangleWidget* Screen0_RectangleWidget_6;
extern leLabelWidget* Screen0_LabelWidget_14;
extern leButtonWidget* Screen0_ButtonWidget_scene1;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_ButtonWidget_0_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_plus_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_minus_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_scene1_OnReleased(leButtonWidget* btn);

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
