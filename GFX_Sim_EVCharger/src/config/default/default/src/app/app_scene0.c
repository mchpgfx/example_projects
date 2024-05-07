#include "definitions.h"

/* Task 2: Managing Events */
/* Add Event handler for ButtonWidget1: Launch Scene1 using ShowScene1() */
void event_Screen0_ButtonWidget_0_OnReleased(leButtonWidget* btn)
{
    ShowScene1();
}

void ShowScene0(void)
{
    if(getScreen() == DEMO_SCREEN1)
    {
        setScreen(DEMO_SCREEN0);
        Screen0_RectangleWidget_6->fn->setVisible(Screen0_RectangleWidget_6, LE_FALSE);
        Screen0_LabelWidget_14->fn->setVisible(Screen0_LabelWidget_14, LE_FALSE);
        Screen0_ButtonWidget_scene1->fn->setEnabled(Screen0_ButtonWidget_scene1, LE_FALSE);
        Screen0_ButtonWidget_plus->fn->setEnabled(Screen0_ButtonWidget_plus, LE_FALSE);
        Screen0_ButtonWidget_minus->fn->setEnabled(Screen0_ButtonWidget_minus, LE_FALSE);
        Screen0_ButtonWidget_0->fn->setEnabled(Screen0_ButtonWidget_0, LE_TRUE);

    }
    gfxcShowCanvas(LAYER_0_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_0_CANVAS_ID);
    gfxcHideCanvas(LAYER_1_CANVAS_ID); 
    gfxcCanvasUpdate(LAYER_1_CANVAS_ID);
   
}
