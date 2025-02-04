/*******************************************************************************
* Copyright (C) 2025 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
#include "gfx/legato/generated/le_gen_init.h"

#define SCREEN_LAYER_IDX 0

static leWidget * root0;

/* Called when Screen 0 is to be shown. 
 * 
 * Here the parent panel widget for the global menu banner is added 
 * to the screen's root widget so that it is displayed on the screen. 
 */
void Screen2_OnShow(void) // called when this screen is show
{
    /* Get the screen's root widget for layer 0 */
    leLayerState* layerState = leGetLayerState(SCREEN_LAYER_IDX);
    root0 = &layerState->root;
    
    /* Add the banner's parent panel widget as child to the 
     * screen's root widget*/    
    root0->fn->addChild(root0, (leWidget*)GlobalScreen_pnlMenu);
}

/* Called when Screen 2 is to be hidden or destroyed
 * 
 * Here, the parent panel widget for the global menu banner is removed 
 * from the screen's root widget children tree so that it is not destroyed.
 */
void Screen2_OnHide(void)
{
    root0->fn->removeChild(root0, (leWidget*)GlobalScreen_pnlMenu);
}