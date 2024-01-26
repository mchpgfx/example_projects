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
 * Name:   QuickstartDown_WVGA
 * Size:   260x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage QuickstartDown_WVGA;

/*********************************
 * Legato Image Asset
 * Name:   QuickstartUp_WVGA
 * Size:   260x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage QuickstartUp_WVGA;

/*********************************
 * Legato Image Asset
 * Name:   MHGS_logo_WVGA
 * Size:   320x300 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage MHGS_logo_WVGA;

/*********************************
 * Legato Image Asset
 * Name:   mchpLogo_light
 * Size:   152x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage mchpLogo_light;

/*********************************
 * Legato Image Asset
 * Name:   keydown
 * Size:   65x65 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage keydown;

/*********************************
 * Legato Image Asset
 * Name:   keyup
 * Size:   65x65 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage keyup;

/*********************************
 * Legato Image Asset
 * Name:   BigKeyDown
 * Size:   210x60 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BigKeyDown;

/*********************************
 * Legato Image Asset
 * Name:   BigKeyUp
 * Size:   210x60 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BigKeyUp;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         NotoSans_48
 * Height:       21
 * Baseline:     37
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  11
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont NotoSans_48;

/*********************************
 * Legato Font Asset
 * Name:         Font0
 * Height:       21
 * Baseline:     15
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  14
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Font0;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   22
 *****************************************************************************/

// language IDs
#define language_English    0

// string IDs
#define stringID_String_star    0
#define stringID_String_4    1
#define stringID_StrOK    2
#define stringID_String_5    3
#define stringID_Smart    4
#define stringID_String_0    5
#define stringID_StrClear    6
#define stringID_Fast    7
#define stringID_NumDefault    8
#define stringID_String_1    9
#define stringID_String_3    10
#define stringID_Str1    11
#define stringID_String_7    12
#define stringID_String_9    13
#define stringID_Easy    14
#define stringID_StringDefault    15
#define stringID_String_6    16
#define stringID_StringNewCode    17
#define stringID_String_8    18
#define stringID_String_2    19
#define stringID_StrDel    20
#define stringID_String_pound    21

extern const leStringTable stringTable;


// string list
extern leTableString string_String_star;
extern leTableString string_String_4;
extern leTableString string_StrOK;
extern leTableString string_String_5;
extern leTableString string_Smart;
extern leTableString string_String_0;
extern leTableString string_StrClear;
extern leTableString string_Fast;
extern leTableString string_NumDefault;
extern leTableString string_String_1;
extern leTableString string_String_3;
extern leTableString string_Str1;
extern leTableString string_String_7;
extern leTableString string_String_9;
extern leTableString string_Easy;
extern leTableString string_StringDefault;
extern leTableString string_String_6;
extern leTableString string_StringNewCode;
extern leTableString string_String_8;
extern leTableString string_String_2;
extern leTableString string_StrDel;
extern leTableString string_String_pound;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
