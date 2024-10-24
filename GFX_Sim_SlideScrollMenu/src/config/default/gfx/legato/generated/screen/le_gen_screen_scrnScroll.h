#ifndef LE_GEN_SCREEN_SCRNSCROLL_H
#define LE_GEN_SCREEN_SCRNSCROLL_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* scrnScroll_BackgroundPanel;
extern leWidget* scrnScroll_pnlSlideMenu;
extern leWidget* scrnScroll_pnlEventFilter;
extern leLabelWidget* scrnScroll_lblItemSelected;
extern leLabelWidget* scrnScroll_LabelWidget_0;
extern leLabelWidget* scrnScroll_lblItemA;
extern leLabelWidget* scrnScroll_lblItemB;
extern leLabelWidget* scrnScroll_lblItemC;
extern leLabelWidget* scrnScroll_lblItemD;
extern leLabelWidget* scrnScroll_lblItemE;
extern leLabelWidget* scrnScroll_lblItemF;
extern leLabelWidget* scrnScroll_lblItemG;
extern leLabelWidget* scrnScroll_lblItemH;
extern leLabelWidget* scrnScroll_lblItemI;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_scrnScroll(void); // called when Legato is initialized
leResult screenShow_scrnScroll(void); // called when screen is shown
void screenHide_scrnScroll(void); // called when screen is hidden
void screenDestroy_scrnScroll(void); // called when Legato is destroyed
void screenUpdate_scrnScroll(void); // called when Legato is updating

leWidget* screenGetRoot_scrnScroll(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void scrnScroll_OnShow(void); // called when this screen is shown
void scrnScroll_OnHide(void); // called when this screen is hidden
void scrnScroll_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCRNSCROLL_H
