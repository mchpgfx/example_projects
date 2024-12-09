// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C)  Microchip Technology Inc. and its subsidiaries.
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
// DOM-IGNORE-END
#include <stdbool.h>
#include <stdio.h>

#include "gfx/legato/generated/le_gen_init.h"

#define NUM_KEYS_ROW1 10
#define NUM_KEYS_ROW2 9
#define NUM_KEYS_ROW3 9

#define MAX_GUEST_NAME_LENGTH 128
#define MAX_CONF_NUM_LENGTH 128

#define LASTNAME "mchp"
#define CONFNUM "1234"



typedef enum
{
    CONF_INIT,
    CONF_RUN,
    CONF_RESULT,
} CONF_SCRN_STATE_t;

typedef enum
{
    CONF_EVT_NONE,
    CONF_EVT_BACK,
    CONF_EVT_KEYBRD_SHIFT,
    CONF_EVT_KEYBRD_NUM,
    CONF_EVT_KEYBRD_ALPHA,
    CONF_EVT_KEYBRD_ENTER,
    CONF_EVT_KEYBRD_CONTINUE,
} CONF_SCRN_EVENT_t;

typedef enum
{
    KEYBRD_SHIFT,
    KEYBRD_NORM,
    KEYBRD_NUM,
    KEYBRD_MAX_CONFIGS
} CONF_SCRN_KEYBRD_CONF_t;

typedef struct
{
    leTableString * text[KEYBRD_MAX_CONFIGS];
} KEY_CONFIG_t;

KEY_CONFIG_t keyPadRow1[NUM_KEYS_ROW1] = 
{
    {&string_strQ, &string_strq, &string_str1}, {&string_strW, &string_strw, &string_str2}, 
    {&string_strE, &string_stre, &string_str3}, {&string_strR, &string_strr, &string_str4}, 
    {&string_strT, &string_strt, &string_str5}, {&string_strY, &string_stry, &string_str6},
    {&string_strU, &string_stru, &string_str7}, {&string_strI, &string_stri, &string_str8}, 
    {&string_strO, &string_stro, &string_str9}, {&string_strP, &string_strp, &string_str0},
};

KEY_CONFIG_t keyPadRow2[NUM_KEYS_ROW2] = 
{
    {&string_strA, &string_stra, &string_strat}, {&string_strS, &string_strs, &string_strpnd}, 
    {&string_strD, &string_strd, &string_strdol}, {&string_strF, &string_strf, &string_strpct}, 
    {&string_strG, &string_strg, &string_stramp}, {&string_strH, &string_strh, &string_strhyph},
    {&string_strJ, &string_strj, &string_strplus}, {&string_strK, &string_strk, &string_stroppar},
    {&string_strL, &string_strl, &string_strclpar},
};

KEY_CONFIG_t keyPadRow3[NUM_KEYS_ROW3] = 
{
    {&string_strZ, &string_strz, &string_strslash}, {&string_strX, &string_strx, &string_streq},
    {&string_strC, &string_strc, &string_strstar}, {&string_strV, &string_strv, &string_strquot}, 
    {&string_strB, &string_strb, &string_strapos}, {&string_strN, &string_strn, &string_strcol},
    {&string_strM, &string_strm, &string_strsemi}, {&string_strexc, &string_strexc, &string_strbar}, 
    {&string_strqs, &string_strqs, &string_strbslash},
};

static CONF_SCRN_STATE_t confScreenState;
static CONF_SCRN_EVENT_t confScreenEvent;
static CONF_SCRN_KEYBRD_CONF_t confScreenKeypadConf;

char guestLastName[MAX_GUEST_NAME_LENGTH]; 
char guestConfNum[MAX_CONF_NUM_LENGTH]; 

int APP_GUI_GetGuestDetails(const leString * lastName, const leString * confNum)
{
    uint32_t nameLength = lastName->fn->length(lastName);
    uint32_t confLength = confNum->fn->length(confNum);
    uint32_t i;
    
    /* empty strings */
    if (nameLength == 0 || confLength == 0)
    {
        return -1;
    }
    
    //convert leString to char array
    //direct char cast support ASCII chars only
    for (i = 0; i < nameLength && i < MAX_GUEST_NAME_LENGTH - 1; i++)
    {
        guestLastName[i] = (char) (lastName->fn->charAt(lastName, i));
    }

    guestLastName[i] = '\0';
    
    for (i = 0; i < nameLength && i < MAX_GUEST_NAME_LENGTH - 1; i++)
    {
        guestConfNum[i] = (char) (confNum->fn->charAt(confNum, i));
    }

    guestConfNum[i] = '\0';
    
    printf("name is %s \r\n", guestLastName);
    printf("conf is %s \r\n", guestConfNum);
    
    if (strcmp(LASTNAME, guestLastName) == 0 && 
        strcmp(CONFNUM, guestConfNum) == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void ConfScreen_SetEvent(CONF_SCRN_EVENT_t event)
{
    confScreenEvent = event;
}

void ConfScreen_SetKeyboardConfig(CONF_SCRN_KEYBRD_CONF_t conf)
{
    unsigned int i;
                    
    for (i = 0; i < NUM_KEYS_ROW1; i++)
    {
        leButtonWidget * cell = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, i);
        cell->fn->setString(cell, (leString *) keyPadRow1[i].text[conf]);

        LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, i, (leString *) keyPadRow1[i].text[conf]);
    }   

    for (i = 0; i < NUM_KEYS_ROW2; i++)
    {
        leButtonWidget * cell = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, i);
        cell->fn->setString(cell, (leString *) keyPadRow2[i].text[conf]);

        LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, i, (leString *) keyPadRow2[i].text[conf]);
    }

    for (i = 0; i < NUM_KEYS_ROW3; i++)
    {
        leButtonWidget * cell = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, i);
        cell->fn->setString(cell, (leString *) keyPadRow3[i].text[conf]);

        LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, i, (leString *) keyPadRow3[i].text[conf]);
    }
}

void LastNameConfScreen_OnShow(void)
{
    confScreenState = CONF_INIT;
    confScreenKeypadConf = KEYBRD_NORM;
    
    LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 800);
}

void LastNameConfScreen_OnHide(void)
{
    
}

void LastNameConfScreen_OnUpdate(void)
{
    switch(confScreenState)
    {
        case CONF_INIT:
        {
            confScreenState = CONF_RUN;
            break;
        }
        case CONF_RUN:
        {
            switch(confScreenEvent)
            {
                case CONF_EVT_KEYBRD_SHIFT:
                {
                    if (confScreenKeypadConf == KEYBRD_NORM)
                    {
                        confScreenKeypadConf = KEYBRD_SHIFT;
                        LastNameConfScreen_keyShiftRight->fn->setReleasedImage(LastNameConfScreen_keyShiftRight, 
                            (leImage*)&ShiftKeyPressed);
                        LastNameConfScreen_keyShiftLeft->fn->setReleasedImage(LastNameConfScreen_keyShiftLeft, 
                            (leImage*)&ShiftKeyPressed);
                        
                        ConfScreen_SetKeyboardConfig(confScreenKeypadConf);                        
                    }
                    else if (confScreenKeypadConf == KEYBRD_SHIFT)
                    {
                        confScreenKeypadConf = KEYBRD_NORM;
                        
                        LastNameConfScreen_keyShiftRight->fn->setReleasedImage(LastNameConfScreen_keyShiftRight, 
                            (leImage*)&ShiftKey);
                        LastNameConfScreen_keyShiftLeft->fn->setReleasedImage(LastNameConfScreen_keyShiftLeft, 
                            (leImage*)&ShiftKey);
                        
                        ConfScreen_SetKeyboardConfig(confScreenKeypadConf);
                    }
                    
                    break;
                }
                case CONF_EVT_KEYBRD_NUM: 
                {
                    static CONF_SCRN_KEYBRD_CONF_t prevConfScreenKeypadConf;
                    
                    if (confScreenKeypadConf == KEYBRD_NORM || confScreenKeypadConf == KEYBRD_SHIFT)
                    {
                        prevConfScreenKeypadConf = confScreenKeypadConf;
                        
                        confScreenKeypadConf = KEYBRD_NUM;
                        
                        LastNameConfScreen_keyNumLeft->fn->setString(LastNameConfScreen_keyNumLeft, 
                            (leString *) &string_strabc);
                        LastNameConfScreen_keyNumRight->fn->setString(LastNameConfScreen_keyNumRight, 
                            (leString *) &string_strabc);
                        
                        ConfScreen_SetKeyboardConfig(confScreenKeypadConf);
                    }
                    else if (confScreenKeypadConf == KEYBRD_NUM)
                    {
                        confScreenKeypadConf = prevConfScreenKeypadConf;
                        
                        LastNameConfScreen_keyNumLeft->fn->setString(LastNameConfScreen_keyNumLeft, 
                            (leString *) &string_strNum);
                        LastNameConfScreen_keyNumRight->fn->setString(LastNameConfScreen_keyNumRight, 
                            (leString *) &string_strNum);
                        
                        ConfScreen_SetKeyboardConfig(confScreenKeypadConf);
                    }
                    
                    break;                    
                    
                }
                case CONF_EVT_KEYBRD_ENTER:
                {
                    LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 800);
                    break;
                }
                case CONF_EVT_KEYBRD_CONTINUE:
                {
                    //get last name and conf number for textfields
                    const leString * nameTextFieldStr = LastNameConfScreen_txtFieldLastName->fn->getString(LastNameConfScreen_txtFieldLastName);
                    const leString * confTextFieldStr = LastNameConfScreen_txtFieldConfNum->fn->getString(LastNameConfScreen_txtFieldConfNum);
                    
                    if (APP_GUI_GetGuestDetails(nameTextFieldStr, confTextFieldStr) == 0)
                    {
                        LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlSuccess, 380, 300);
                        
                    }
                    else
                    {
                        LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlError, 380, 300);
                    }
                    
                    confScreenState = CONF_RESULT;
                    
                    LastNameConfScreen_btnContinue->fn->setVisible(LastNameConfScreen_btnContinue, LE_FALSE);

                    break;
                }
                default:
                    break;
            }
            
            confScreenEvent = CONF_EVT_NONE;
            
            break;
        }
        case CONF_RESULT:
        {
            switch(confScreenEvent)
            {
                case CONF_EVT_BACK:
                {
                    LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlError, -540, 300);
                    LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlSuccess, -540, 300);

                    LastNameConfScreen_txtFieldLastName->fn->setHintString(LastNameConfScreen_txtFieldLastName, (leString*)&string_strEnterName);
                    LastNameConfScreen_txtFieldConfNum->fn->setHintString(LastNameConfScreen_txtFieldConfNum, (leString*)&string_strEnterConf);
                    
                    LastNameConfScreen_btnContinue->fn->setVisible(LastNameConfScreen_btnContinue, LE_TRUE);
                    
                    confScreenState = CONF_RUN;
                    
                    break;
                }
                default:
                    break;
            }
            
            confScreenEvent = CONF_EVT_NONE;
                        
            break;
        }
        default:
            break;
    }
}

void event_LastNameConfScreen_btnBack_OnReleased(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_BACK);
}

void event_LastNameConfScreen_btnContinue_OnReleased(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_CONTINUE);
}

void event_LastNameConfScreen_keyShiftLeft_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_SHIFT);
}

void event_LastNameConfScreen_keyShiftRight_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_SHIFT);
}

void event_LastNameConfScreen_keyEnter_OnReleased(leButtonWidget* btn)
{
   ConfScreen_SetEvent(CONF_EVT_KEYBRD_ENTER);
}

void event_LastNameConfScreen_keyNumLeft_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_NUM);
}

void event_LastNameConfScreen_keyNumRight_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_NUM);
}

void event_LastNameConfScreen_btnErrorBack_OnReleased(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_BACK);
}

void event_LastNameConfScreen_btnSuccessOk_OnReleased(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_BACK);
}

void event_LastNameConfScreen_txtFieldLastName_OnFocusChanged(leTextFieldWidget* btn, leBool state)
{
    if (state == LE_TRUE)
    {
        LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 440);
    }
}

void event_LastNameConfScreen_txtFieldConfNum_OnFocusChanged(leTextFieldWidget* btn, leBool state)
{
    if (state == LE_TRUE)
    {
        LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 440);
    }
}