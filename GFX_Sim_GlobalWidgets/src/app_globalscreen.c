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
#include <stdio.h>

#include "gfx/legato/generated/le_gen_init.h"

/* Size of string */
#define APP_FIXED_STR_SIZE 8

/* Fixed String */
static leFixedString appFixedStrStatic;
static leChar appFixedStrStatBuff[APP_FIXED_STR_SIZE] = {0};

/* Helper function that increments the screen transition count and label */
static void app_IncrementScreenCount(void)
{
    /* Screen transition count*/
    static uint32_t counter = 1;
    
    /* Local c char buffer */
    char cStrBuff[APP_FIXED_STR_SIZE];
    
    /* Convert the counter to c-char array */
    snprintf(cStrBuff, APP_FIXED_STR_SIZE, "%lu", counter++);
    
    /* Convert c-char array to fixed string */
    leFixedString_Constructor(&appFixedStrStatic, appFixedStrStatBuff, APP_FIXED_STR_SIZE);
    appFixedStrStatic.fn->setFont(&appFixedStrStatic, (leFont*) &Font0);
    appFixedStrStatic.fn->setFromCStr(&appFixedStrStatic, cStrBuff);
    
    /* Update the screen count label in the global banner */
    GlobalScreen_lblCount->fn->setString(GlobalScreen_lblCount, (leString *) &appFixedStrStatic); 
}

/* Callback function for Screen0 button in banner */
void event_GlobalScreen_btnScreen0_OnReleased(leButtonWidget* btn)
{
    app_IncrementScreenCount();
    
    legato_showScreen(screenID_Screen0);
}

/* Callback function for Screen1 button in global banner */
void event_GlobalScreen_btnScreen1_OnReleased(leButtonWidget* btn)
{
    app_IncrementScreenCount();
    
    legato_showScreen(screenID_Screen1);
}

/* Callback function for Screen2 button in global banner */
void event_GlobalScreen_btnScreen2_OnReleased(leButtonWidget* btn)
{
    app_IncrementScreenCount();
    
    legato_showScreen(screenID_Screen2);
}
