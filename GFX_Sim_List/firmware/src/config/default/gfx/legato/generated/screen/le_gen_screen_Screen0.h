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
extern leLabelWidget* Screen0_StaticLabelWidget;
extern leTextFieldWidget* Screen0_TextFieldWidgetDummy;
extern leListWidget* Screen0_ListWidget_Static;
extern leButtonWidget* Screen0_ButtonWidget_List1;
extern leLabelWidget* Screen0_LabelWidget_StaticSel;
extern leLabelWidget* Screen0_DynamiLabelWidget;
extern leButtonWidget* Screen0_ButtonWidget_List2;
extern leLabelWidget* Screen0_LabelWidget_DynamicSel;
extern leTextFieldWidget* Screen0_TextFieldWidgetDyn;
extern leListWidget* Screen0_ListWidget_Dynamic;
extern leButtonWidget* Screen0_ButtonWidget_AddL2;
extern leButtonWidget* Screen0_ButtonWidget_ClearL2;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_ListWidget_Static_OnSelectionChanged(leListWidget* wgt, uint32_t idx, leBool selected);
void event_Screen0_ButtonWidget_List1_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_List2_OnReleased(leButtonWidget* btn);
void event_Screen0_ListWidget_Dynamic_OnSelectionChanged(leListWidget* wgt, uint32_t idx, leBool selected);
void event_Screen0_ButtonWidget_AddL2_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_ClearL2_OnReleased(leButtonWidget* btn);

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
