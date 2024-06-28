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
extern leLabelWidget* Screen0_LabelWidget_0;
extern leButtonWidget* Screen0_Screen1Button;
extern leButtonWidget* Screen0_Screen2Button;
extern leButtonWidget* Screen0_Screen3Button;
extern leButtonWidget* Screen0_Screen4Button;
extern leButtonWidget* Screen0_PopUp;
extern leWidget* Screen0_BackgroundPanel_1;
extern leButtonWidget* Screen0_HomeButton;
extern leButtonWidget* Screen0_ButtonWidget_0_0_0;
extern leWidget* Screen0_BackgroundPanel_2;
extern leButtonWidget* Screen0_HomeButton_0;
extern leButtonWidget* Screen0_ButtonWidget_0_0;
extern leWidget* Screen0_BackgroundPanel_3;
extern leButtonWidget* Screen0_HomeButton_1;
extern leButtonWidget* Screen0_ButtonWidget_0_1;
extern leWidget* Screen0_BackgroundPanel_4;
extern leButtonWidget* Screen0_HomeButton_2;
extern leButtonWidget* Screen0_ButtonWidget_0_2;
extern leWidget* Screen0_PopUpPanel;
extern leLabelWidget* Screen0_LabelWidget_1;
extern leButtonWidget* Screen0_BackButton;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_Screen1Button_OnReleased(leButtonWidget* btn);
void event_Screen0_Screen2Button_OnReleased(leButtonWidget* btn);
void event_Screen0_Screen3Button_OnReleased(leButtonWidget* btn);
void event_Screen0_Screen4Button_OnReleased(leButtonWidget* btn);
void event_Screen0_PopUp_OnReleased(leButtonWidget* btn);
void event_Screen0_HomeButton_OnReleased(leButtonWidget* btn);
void event_Screen0_HomeButton_0_OnReleased(leButtonWidget* btn);
void event_Screen0_HomeButton_1_OnReleased(leButtonWidget* btn);
void event_Screen0_HomeButton_2_OnReleased(leButtonWidget* btn);
void event_Screen0_BackButton_OnReleased(leButtonWidget* btn);

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
void Screen0_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREEN0_H
