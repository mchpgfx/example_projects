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
extern leImageWidget* Screen1_ImageWidget_0;
extern leButtonWidget* Screen1_ButtonWidget_0;
extern leLabelWidget* Screen1_LabelWidget_0;
extern leButtonWidget* Screen1_ButtonWidget_1;
extern leLabelWidget* Screen1_HourLabel;
extern leLabelWidget* Screen1_MinuteLabel;
extern leLabelWidget* Screen1_SecondLabel;
extern leLabelWidget* Screen1_ColonLabel_1;
extern leLabelWidget* Screen1_ColonLabel_2;
extern leLabelWidget* Screen1_ColonLabel_3;
extern leLabelWidget* Screen1_TenthsecondLabel;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen1_ButtonWidget_0_OnPressed(leButtonWidget* btn);
void event_Screen1_ButtonWidget_1_OnPressed(leButtonWidget* btn);

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
void Screen1_OnHide(void); // called when this screen is hidden
void Screen1_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREEN1_H
