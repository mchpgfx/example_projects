#include "definitions.h"

void event_Screen0_ScanButton_OnReleased(leButtonWidget* btn)
{
    //Show scanning dialog box
    Screen0_ScanningDialogBox->fn->setVisible(Screen0_ScanningDialogBox, LE_TRUE);
}

void event_Screen0_CancelButton_OnReleased(leButtonWidget* btn)
{
    //Hide scanning dialog box
    Screen0_ScanningDialogBox->fn->setVisible(Screen0_ScanningDialogBox, LE_FALSE);
    
    //Show Stopped Dialog Box
    Screen0_StoppedDialogBox->fn->setX(Screen0_StoppedDialogBox, 128);
}

void event_Screen0_OkButton_OnReleased(leButtonWidget* btn)
{
    //Hide Stopped Dialog Box
    Screen0_StoppedDialogBox->fn->setX(Screen0_StoppedDialogBox, 480);
}

void Screen0_OnShow(void)
{
    //Hide the dialog boxes when screen is first shown
    Screen0_ScanningDialogBox->fn->setVisible(Screen0_ScanningDialogBox, LE_FALSE);
    Screen0_StoppedDialogBox->fn->setX(Screen0_StoppedDialogBox, 480);
}
