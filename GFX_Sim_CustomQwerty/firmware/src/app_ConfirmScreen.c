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

/* Number of keys per row */
#define NUM_KEYS_ROW1 10
#define NUM_KEYS_ROW2 9
#define NUM_KEYS_ROW3 9

#define MAX_GUEST_NAME_LENGTH 128
#define MAX_CONF_NUM_LENGTH 128

/* The last name and confirmation number to match */
#define LASTNAME "mchp"
#define CONFNUM "1234"

/* Application screen states */
typedef enum
{
    CONF_RUN,
    CONF_RESULT,
} CONF_SCRN_STATE_t;

/* Application button events */
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

/* keyboard config types */
typedef enum
{
    KEYBRD_SHIFT,
    KEYBRD_NORM,
    KEYBRD_NUM,
    KEYBRD_MAX_CONFIGS
} CONF_SCRN_KEYBRD_CONF_t;

/* keyboard config struct */
typedef struct
{
    leTableString * text[KEYBRD_MAX_CONFIGS];
} KEY_CONFIG_t;

/* chars used for first row keys for each config (shift, normal, numbers/symbols) */
KEY_CONFIG_t keyPadRow1[NUM_KEYS_ROW1] = 
{
    {&string_strQ, &string_strq, &string_str1}, /* row 1, key 1 */
    {&string_strW, &string_strw, &string_str2}, /* row 1, key 2 */
    {&string_strE, &string_stre, &string_str3}, /* row 1, key 3 */
    {&string_strR, &string_strr, &string_str4}, /* row 1, key 4 */
    {&string_strT, &string_strt, &string_str5}, /* row 1, key 5 */
    {&string_strY, &string_stry, &string_str6}, /* row 1, key 6 */
    {&string_strU, &string_stru, &string_str7}, /* row 1, key 7 */
    {&string_strI, &string_stri, &string_str8}, /* row 1, key 8 */ 
    {&string_strO, &string_stro, &string_str9}, /* row 1, key 9 */
    {&string_strP, &string_strp, &string_str0}, /* row 1, key 10 */
};

/* chars used for 2nd row keys for each config (shift, normal, numbers/symbols) */
KEY_CONFIG_t keyPadRow2[NUM_KEYS_ROW2] = 
{
    {&string_strA, &string_stra, &string_strat}, /* row 2, key 1 */
    {&string_strS, &string_strs, &string_strpnd}, /* row 2, key 2 */
    {&string_strD, &string_strd, &string_strdol}, /* row 2, key 3 */
    {&string_strF, &string_strf, &string_strpct}, /* row 2, key 4 */
    {&string_strG, &string_strg, &string_stramp}, /* row 2, key 5 */
    {&string_strH, &string_strh, &string_strhyph}, /* row 2, key 6 */
    {&string_strJ, &string_strj, &string_strplus}, /* row 2, key 7 */
    {&string_strK, &string_strk, &string_stroppar}, /* row 2, key 8 */
    {&string_strL, &string_strl, &string_strclpar}, /* row 2, key 9 */
};

/* chars used for 3rd row keys for each config (shift, normal, numbers/symbols) */
KEY_CONFIG_t keyPadRow3[NUM_KEYS_ROW3] = 
{
    {&string_strZ, &string_strz, &string_strslash}, /* row 3, key 1 */
    {&string_strX, &string_strx, &string_streq}, /* row 3, key 2 */
    {&string_strC, &string_strc, &string_strstar}, /* row 3, key 3 */
    {&string_strV, &string_strv, &string_strquot}, /* row 3, key 4 */
    {&string_strB, &string_strb, &string_strapos}, /* row 3, key 5 */
    {&string_strN, &string_strn, &string_strcol}, /* row 3, key 6 */
    {&string_strM, &string_strm, &string_strsemi}, /* row 3, key 7 */
    {&string_strexc, &string_strexc, &string_strbar},  /* row 3, key 8 */
    {&string_strqs, &string_strqs, &string_strbslash}, /* row 3, key 9 */
};

/* current screen state */
static CONF_SCRN_STATE_t confScreenState;

/* current screen event */
static CONF_SCRN_EVENT_t confScreenEvent;

/* current keypad configuration */
static CONF_SCRN_KEYBRD_CONF_t confScreenKeypadConf;

/* previous keypad configuration */
static CONF_SCRN_KEYBRD_CONF_t prevConfScreenKeypadConf;

/* guest last name in C-type string */
static char guestLastName[MAX_GUEST_NAME_LENGTH]; 

/* guest confirmation number in C-type string */
static char guestConfNum[MAX_CONF_NUM_LENGTH]; 

/* 
 * Checks leString last name and confirmation number to expected values 
 * returns 0 on success, -1 on fail
 */
static int APP_GUI_GetGuestDetails(const leString * lastName, const leString * confNum)
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

/*
 * Sets the current screen event.
 */
static void ConfScreen_SetEvent(CONF_SCRN_EVENT_t event)
{
    confScreenEvent = event;
}

/*
 * Sets the current keyboard configuration
 */
static void ConfScreen_SetKeyboardConfig(CONF_SCRN_KEYBRD_CONF_t conf)
{
    unsigned int i;
                    
    /* configures the keys for first row keypad based on keyboard configuration */
    for (i = 0; i < NUM_KEYS_ROW1; i++)
    {
        /* get the cell/key at specific index */
        leButtonWidget * cell = LastNameConfScreen_keysRow1->fn->getCellButton(LastNameConfScreen_keysRow1, 0, i);
        
        /* set the string for the cell/key (what's shown on the GUI) */
        cell->fn->setString(cell, (leString *) keyPadRow1[i].text[conf]);

        /* sets the edit string for the key/cell (what's appended to text field */
        LastNameConfScreen_keysRow1->fn->setKeyValue(LastNameConfScreen_keysRow1, 0, i, (leString *) keyPadRow1[i].text[conf]);
    }   

    /* configures the keys for second row keypad based on keyboard configuration */
    for (i = 0; i < NUM_KEYS_ROW2; i++)
    {
        /* get the cell/key at specific index */
        leButtonWidget * cell = LastNameConfScreen_keysRow2->fn->getCellButton(LastNameConfScreen_keysRow2, 0, i);
        
        /* set the string for the cell/key (what's shown on the GUI) */
        cell->fn->setString(cell, (leString *) keyPadRow2[i].text[conf]);

        LastNameConfScreen_keysRow2->fn->setKeyValue(LastNameConfScreen_keysRow2, 0, i, (leString *) keyPadRow2[i].text[conf]);
    }

    /* configures the keys for third row keypad based on keyboard configuration */
    for (i = 0; i < NUM_KEYS_ROW3; i++)
    {
        /* get the cell/key at specific index */
        leButtonWidget * cell = LastNameConfScreen_keysRow3->fn->getCellButton(LastNameConfScreen_keysRow3, 0, i);
        
        /* set the string for the cell/key (what's shown on the GUI) */
        cell->fn->setString(cell, (leString *) keyPadRow3[i].text[conf]);

        /* sets the edit string for the key/cell (what's appended to text field */
        LastNameConfScreen_keysRow3->fn->setKeyValue(LastNameConfScreen_keysRow3, 0, i, (leString *) keyPadRow3[i].text[conf]);
    }
}

void LastNameConfScreen_OnShow(void)
{
    /* set default screen state at screen init */
    confScreenState = CONF_RUN;
    
    /* set default keyboard configuration at screen init */
    confScreenKeypadConf = KEYBRD_NORM;
    
    /* hide the keyboard off frame */
    LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 800);
}

void LastNameConfScreen_OnHide(void)
{
    /* nothing to do at screen hide */
}

void LastNameConfScreen_OnUpdate(void)
{
    switch(confScreenState)
    {
        /* running */
        case CONF_RUN:
        {
            /* check for screen events */
            switch(confScreenEvent)
            {
                /* If shift button is pressed */
                case CONF_EVT_KEYBRD_SHIFT:
                {
                    /* if keyboard is in normal mode (not shifted), set to shift keys */
                    if (confScreenKeypadConf == KEYBRD_NORM)
                    {
                        /* Configuration keys to shift */
                        ConfScreen_SetKeyboardConfig(KEYBRD_SHIFT);
                        
                        /* set current keypad state to shifted */
                        confScreenKeypadConf = KEYBRD_SHIFT;
                        
                        /* update the shift button images */
                        LastNameConfScreen_keyShiftRight->fn->setReleasedImage(LastNameConfScreen_keyShiftRight, 
                            (leImage*)&ShiftKeyPressed);
                        LastNameConfScreen_keyShiftLeft->fn->setReleasedImage(LastNameConfScreen_keyShiftLeft, 
                            (leImage*)&ShiftKeyPressed);
                    }
                    /* if keyboard are shifted, set to normal keys */
                    else if (confScreenKeypadConf == KEYBRD_SHIFT)
                    {
                        /* Configuration keys to normal */
                        ConfScreen_SetKeyboardConfig(KEYBRD_NORM);
                        
                        /* set current keypad state to normal */
                        confScreenKeypadConf = KEYBRD_NORM;
                        
                        /* update the shift button images */
                        LastNameConfScreen_keyShiftRight->fn->setReleasedImage(LastNameConfScreen_keyShiftRight, 
                            (leImage*)&ShiftKey);
                        LastNameConfScreen_keyShiftLeft->fn->setReleasedImage(LastNameConfScreen_keyShiftLeft, 
                            (leImage*)&ShiftKey);
                    }
                    
                    break;
                }
                /* If number button is pressed */
                case CONF_EVT_KEYBRD_NUM: 
                {
                    /* if keyboard is not numeric (normal or shift), set to numeric */
                    if (confScreenKeypadConf == KEYBRD_NORM || confScreenKeypadConf == KEYBRD_SHIFT)
                    {
                        /* Save current key config to restore later */
                        prevConfScreenKeypadConf = confScreenKeypadConf;
                        
                        /* Set keyboard config to numeric */
                        ConfScreen_SetKeyboardConfig(KEYBRD_NUM);
                        
                        /* set keypad state to numeric */
                        confScreenKeypadConf = KEYBRD_NUM;
                        
                        /* update the numeric/alpha button images */
                        LastNameConfScreen_keyNumLeft->fn->setString(LastNameConfScreen_keyNumLeft, 
                            (leString *) &string_strabc);
                        LastNameConfScreen_keyNumRight->fn->setString(LastNameConfScreen_keyNumRight, 
                            (leString *) &string_strabc);
                    }
                    /* if keyboard is already numeric, set to alpha */
                    else if (confScreenKeypadConf == KEYBRD_NUM)
                    {
                        /* Save current key config to restore later */
                        confScreenKeypadConf = prevConfScreenKeypadConf;

                        /* Set keyboard config to alpha */
                        ConfScreen_SetKeyboardConfig(confScreenKeypadConf);

                        /* update the numeric/alpha button images */
                        LastNameConfScreen_keyNumLeft->fn->setString(LastNameConfScreen_keyNumLeft, 
                            (leString *) &string_strNum);
                        LastNameConfScreen_keyNumRight->fn->setString(LastNameConfScreen_keyNumRight, 
                            (leString *) &string_strNum);
                    }
                    
                    break;                    
                    
                }
                /* Enter button is pressed */
                case CONF_EVT_KEYBRD_ENTER:
                {
                    /* If lastname textfield widget is being edited, switch to confirmation number textfield widget */
                    if (leGetEditWidget() == (leEditWidget*) LastNameConfScreen_txtFieldLastName)
                    {
                        LastNameConfScreen_txtFieldConfNum->fn->setFocus(LastNameConfScreen_txtFieldConfNum);
                    }
                    /* if not, hide the keyboard */
                    else 
                    {
                        LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 800);
                    }
                    
                    break;
                }
                /* Enter button is pressed, compare the entries */
                case CONF_EVT_KEYBRD_CONTINUE:
                {
                    //get last name and conf number for textfields
                    const leString * nameTextFieldStr = LastNameConfScreen_txtFieldLastName->fn->getString(LastNameConfScreen_txtFieldLastName);
                    const leString * confTextFieldStr = LastNameConfScreen_txtFieldConfNum->fn->getString(LastNameConfScreen_txtFieldConfNum);
                    
                    /* Call API to compare */
                    if (APP_GUI_GetGuestDetails(nameTextFieldStr, confTextFieldStr) == 0)
                    {
                        /* if matching, show success dialog box */
                        LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlSuccess, 380, 300);
                        
                    }
                    else
                    {
                        /* if not matching, show failed dialog box */
                        LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlError, 380, 300);
                    }
                    
                    /* change application state */
                    confScreenState = CONF_RESULT;
                    
                    /* hide the continue button so it cannot be pressed while dialog box is active */
                    LastNameConfScreen_btnContinue->fn->setVisible(LastNameConfScreen_btnContinue, LE_FALSE);

                    break;
                }
                default:
                    break;
            }
            
            /* clear screen events */
            confScreenEvent = CONF_EVT_NONE;
            
            break;
        }
        /* showing result (success, fail dialog box) */
        case CONF_RESULT:
        {
            /* check for screen events */
            switch(confScreenEvent)
            {
                /* Ok button is pressed */
                case CONF_EVT_BACK:
                {
                    /* hide the dialog boxes */
                    LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlError, -540, 300);
                    LastNameConfScreen_pnlError->fn->setPosition(LastNameConfScreen_pnlSuccess, -540, 300);

                    /* clear the textfield widgets */
                    LastNameConfScreen_txtFieldLastName->fn->setString(LastNameConfScreen_txtFieldLastName, NULL);
                    LastNameConfScreen_txtFieldConfNum->fn->setString(LastNameConfScreen_txtFieldConfNum, NULL);
                    
                    /* clear edit focus */
                    leSetEditWidget(NULL);
                    
                    /* Show the continue button */
                    LastNameConfScreen_btnContinue->fn->setVisible(LastNameConfScreen_btnContinue, LE_TRUE);
                    
                    /* go back to running state */
                    confScreenState = CONF_RUN;
                    
                    break;
                }
                default:
                    break;
            }
            
            /* Clear event */
            confScreenEvent = CONF_EVT_NONE;
                        
            break;
        }
        default:
            break;
    }
}

/* continue button released event handler */
void event_LastNameConfScreen_btnContinue_OnReleased(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_CONTINUE);
}

/* left shift button pressed event handler */
void event_LastNameConfScreen_keyShiftLeft_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_SHIFT);
}

/* right shift button pressed event handler */
void event_LastNameConfScreen_keyShiftRight_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_SHIFT);
}

/* enter button pressed event handler */
void event_LastNameConfScreen_keyEnter_OnReleased(leButtonWidget* btn)
{
   ConfScreen_SetEvent(CONF_EVT_KEYBRD_ENTER);
}

/* left num key pressed event handler */
void event_LastNameConfScreen_keyNumLeft_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_NUM);
}

/* right num key pressed event handler */
void event_LastNameConfScreen_keyNumRight_OnPressed(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_KEYBRD_NUM);
}

/* right num key pressed event handler */
void event_LastNameConfScreen_btnErrorBack_OnReleased(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_BACK);
}

/* Ok/back button released event handler */
void event_LastNameConfScreen_btnSuccessOk_OnReleased(leButtonWidget* btn)
{
    ConfScreen_SetEvent(CONF_EVT_BACK);
}

/* last name text field widget focused event handler */
void event_LastNameConfScreen_txtFieldLastName_OnFocusChanged(leTextFieldWidget* btn, leBool state)
{
    /* if text field widget is selected, show the keyboard panel */
    if (state == LE_TRUE)
    {
        /* Show the keyboard by setting position in frame */
        LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 440);
    }
}

/* conf number text field widget focused event handler */
void event_LastNameConfScreen_txtFieldConfNum_OnFocusChanged(leTextFieldWidget* btn, leBool state)
{
    /* if text field widget is selected, show the keyboard panel */
    if (state == LE_TRUE)
    {
        /* Show the keyboard by setting position in frame */
        LastNameConfScreen_pnlKeyboard->fn->setY(LastNameConfScreen_pnlKeyboard, 440);
    }
}