/*******************************************************************************
 Module for Microchip Legato Graphics Library

  Company:
    Microchip Technology Inc.

  File Name:
    le_gen_assets.h

  Summary:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.


  Description:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.

*******************************************************************************/


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

#ifndef LE_GEN_ASSETS_H
#define LE_GEN_ASSETS_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

#include "gfx/legato/legato.h"

extern const lePalette leGlobalPalette;

/*****************************************************************************
 * Legato Graphics Image Assets
 *****************************************************************************/
/*********************************
 * Legato Image Asset
 * Name:   mchpLogo_small
 * Size:   120x28 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage mchpLogo_small;

/*********************************
 * Legato Image Asset
 * Name:   MGS_40h
 * Size:   149x40 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage MGS_40h;

/*********************************
 * Legato Image Asset
 * Name:   BackspaceKey
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage BackspaceKey;

/*********************************
 * Legato Image Asset
 * Name:   BackspaceKeyPressed
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage BackspaceKeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   EnterKey
 * Size:   120x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage EnterKey;

/*********************************
 * Legato Image Asset
 * Name:   EnterKeyPressed
 * Size:   120x80 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage EnterKeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   Key
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage Key;

/*********************************
 * Legato Image Asset
 * Name:   KeyPressed
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage KeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   ShiftKey
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage ShiftKey;

/*********************************
 * Legato Image Asset
 * Name:   ShiftKeyPressed
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage ShiftKeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   spacekey
 * Size:   580x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage spacekey;

/*********************************
 * Legato Image Asset
 * Name:   spacekeypressed
 * Size:   580x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage spacekeypressed;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         Alata56
 * Height:       21
 * Baseline:     50
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  1
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Alata56;

/*********************************
 * Legato Font Asset
 * Name:         Alata40
 * Height:       21
 * Baseline:     36
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  14
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Alata40;

/*********************************
 * Legato Font Asset
 * Name:         Alata80
 * Height:       21
 * Baseline:     71
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  1
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Alata80;

/*********************************
 * Legato Font Asset
 * Name:         Lora32
 * Height:       20
 * Baseline:     27
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  12
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Lora32;

/*********************************
 * Legato Font Asset
 * Name:         Roboto
 * Height:       37
 * Baseline:     26
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  6
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Roboto;

/*********************************
 * Legato Font Asset
 * Name:         RobotoSmall
 * Height:       37
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  12
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont RobotoSmall;

/*********************************
 * Legato Font Asset
 * Name:         Lora24
 * Height:       20
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  1
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Lora24;

/*********************************
 * Legato Font Asset
 * Name:         Alata
 * Height:       21
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  3
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Alata;

/*********************************
 * Legato Font Asset
 * Name:         Lora14
 * Height:       20
 * Baseline:     12
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  12
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Lora14;

/*********************************
 * Legato Font Asset
 * Name:         NotoSans
 * Height:       21
 * Baseline:     9
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  1
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont NotoSans;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   103
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_strn    0
#define stringID_strE    1
#define stringID_str3    2
#define stringID_strf    3
#define stringID_strplus    4
#define stringID_strN    5
#define stringID_strEnterName    6
#define stringID_strqs    7
#define stringID_strPress    8
#define stringID_strpct    9
#define stringID_strQ    10
#define stringID_strF    11
#define stringID_strquot    12
#define stringID_stra    13
#define stringID_strI    14
#define stringID_strexc    15
#define stringID_str0    16
#define stringID_strO    17
#define stringID_str6    18
#define stringID_strB    19
#define stringID_strt    20
#define stringID_strx    21
#define stringID_str7    22
#define stringID_strv    23
#define stringID_strY    24
#define stringID_strp    25
#define stringID_strd    26
#define stringID_strC    27
#define stringID_strles    28
#define stringID_strz    29
#define stringID_strOk    30
#define stringID_strL    31
#define stringID_strat    32
#define stringID_strb    33
#define stringID_stry    34
#define stringID_strCma    35
#define stringID_stroppar    36
#define stringID_strJ    37
#define stringID_strLastName    38
#define stringID_strk    39
#define stringID_strWelcom    40
#define stringID_strEnter    41
#define stringID_strapos    42
#define stringID_strConfNum    43
#define stringID_strj    44
#define stringID_strA    45
#define stringID_strabc    46
#define stringID_strM    47
#define stringID_strK    48
#define stringID_strr    49
#define stringID_strNum    50
#define stringID_strNameSmall    51
#define stringID_strDot    52
#define stringID_strbar    53
#define stringID_strContinue    54
#define stringID_strclpar    55
#define stringID_strs    56
#define stringID_strSpace    57
#define stringID_stri    58
#define stringID_strV    59
#define stringID_strsemi    60
#define stringID_strP    61
#define stringID_str9    62
#define stringID_strhyph    63
#define stringID_strT    64
#define stringID_stre    65
#define stringID_strc    66
#define stringID_strH    67
#define stringID_strX    68
#define stringID_strw    69
#define stringID_str1    70
#define stringID_strtild    71
#define stringID_strG    72
#define stringID_strslash    73
#define stringID_strpnd    74
#define stringID_stramp    75
#define stringID_strWelcome    76
#define stringID_strU    77
#define stringID_str4    78
#define stringID_streq    79
#define stringID_strW    80
#define stringID_strErrorGuestInfo    81
#define stringID_strcol    82
#define stringID_strdol    83
#define stringID_strEnterConf    84
#define stringID_str2    85
#define stringID_stro    86
#define stringID_strD    87
#define stringID_strm    88
#define stringID_strstar    89
#define stringID_strR    90
#define stringID_strS    91
#define stringID_strbslash    92
#define stringID_strl    93
#define stringID_strg    94
#define stringID_strZ    95
#define stringID_stru    96
#define stringID_strSorry    97
#define stringID_str5    98
#define stringID_strq    99
#define stringID_str8    100
#define stringID_strh    101
#define stringID_strmor    102

extern const leStringTable stringTable;


// string list
extern leTableString string_strn;
extern leTableString string_strE;
extern leTableString string_str3;
extern leTableString string_strf;
extern leTableString string_strplus;
extern leTableString string_strN;
extern leTableString string_strEnterName;
extern leTableString string_strqs;
extern leTableString string_strPress;
extern leTableString string_strpct;
extern leTableString string_strQ;
extern leTableString string_strF;
extern leTableString string_strquot;
extern leTableString string_stra;
extern leTableString string_strI;
extern leTableString string_strexc;
extern leTableString string_str0;
extern leTableString string_strO;
extern leTableString string_str6;
extern leTableString string_strB;
extern leTableString string_strt;
extern leTableString string_strx;
extern leTableString string_str7;
extern leTableString string_strv;
extern leTableString string_strY;
extern leTableString string_strp;
extern leTableString string_strd;
extern leTableString string_strC;
extern leTableString string_strles;
extern leTableString string_strz;
extern leTableString string_strOk;
extern leTableString string_strL;
extern leTableString string_strat;
extern leTableString string_strb;
extern leTableString string_stry;
extern leTableString string_strCma;
extern leTableString string_stroppar;
extern leTableString string_strJ;
extern leTableString string_strLastName;
extern leTableString string_strk;
extern leTableString string_strWelcom;
extern leTableString string_strEnter;
extern leTableString string_strapos;
extern leTableString string_strConfNum;
extern leTableString string_strj;
extern leTableString string_strA;
extern leTableString string_strabc;
extern leTableString string_strM;
extern leTableString string_strK;
extern leTableString string_strr;
extern leTableString string_strNum;
extern leTableString string_strNameSmall;
extern leTableString string_strDot;
extern leTableString string_strbar;
extern leTableString string_strContinue;
extern leTableString string_strclpar;
extern leTableString string_strs;
extern leTableString string_strSpace;
extern leTableString string_stri;
extern leTableString string_strV;
extern leTableString string_strsemi;
extern leTableString string_strP;
extern leTableString string_str9;
extern leTableString string_strhyph;
extern leTableString string_strT;
extern leTableString string_stre;
extern leTableString string_strc;
extern leTableString string_strH;
extern leTableString string_strX;
extern leTableString string_strw;
extern leTableString string_str1;
extern leTableString string_strtild;
extern leTableString string_strG;
extern leTableString string_strslash;
extern leTableString string_strpnd;
extern leTableString string_stramp;
extern leTableString string_strWelcome;
extern leTableString string_strU;
extern leTableString string_str4;
extern leTableString string_streq;
extern leTableString string_strW;
extern leTableString string_strErrorGuestInfo;
extern leTableString string_strcol;
extern leTableString string_strdol;
extern leTableString string_strEnterConf;
extern leTableString string_str2;
extern leTableString string_stro;
extern leTableString string_strD;
extern leTableString string_strm;
extern leTableString string_strstar;
extern leTableString string_strR;
extern leTableString string_strS;
extern leTableString string_strbslash;
extern leTableString string_strl;
extern leTableString string_strg;
extern leTableString string_strZ;
extern leTableString string_stru;
extern leTableString string_strSorry;
extern leTableString string_str5;
extern leTableString string_strq;
extern leTableString string_str8;
extern leTableString string_strh;
extern leTableString string_strmor;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
