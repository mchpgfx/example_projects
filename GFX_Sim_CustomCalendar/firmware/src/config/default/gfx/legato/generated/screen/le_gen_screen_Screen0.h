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
extern leButtonWidget* Screen0_btnSetDate;
extern leImageWidget* Screen0_imgMGS;
extern leWidget* Screen0_pnlCalendarDialog;
extern leWidget* Screen0_pnlCalendar;
extern leButtonWidget* Screen0_btnClose;
extern leKeyPadWidget* Screen0_keyCalendar;
extern leButtonWidget* Screen0_btnPrevYear;
extern leButtonWidget* Screen0_btnPrevMonth;
extern leButtonWidget* Screen0_btnNextYear;
extern leButtonWidget* Screen0_btnNextMonth;
extern leLabelWidget* Screen0_lblMonth;
extern leLabelWidget* Screen0_lblYear;
extern leLabelWidget* Screen0_lblMon;
extern leLabelWidget* Screen0_lblSun;
extern leLabelWidget* Screen0_lblTue;
extern leLabelWidget* Screen0_lblWed;
extern leLabelWidget* Screen0_lblThu;
extern leLabelWidget* Screen0_lblFri;
extern leLabelWidget* Screen0_lblSat;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_btnSetDate_OnReleased(leButtonWidget* btn);
void event_Screen0_btnClose_OnReleased(leButtonWidget* btn);
void event_Screen0_keyCalendar_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Screen0_btnPrevYear_OnReleased(leButtonWidget* btn);
void event_Screen0_btnPrevMonth_OnReleased(leButtonWidget* btn);
void event_Screen0_btnNextYear_OnReleased(leButtonWidget* btn);
void event_Screen0_btnNextMonth_OnReleased(leButtonWidget* btn);

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
