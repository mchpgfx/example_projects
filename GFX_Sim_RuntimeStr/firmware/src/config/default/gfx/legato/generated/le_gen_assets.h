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
 * Name:   button_start
 * Size:   100x100 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage button_start;

/*********************************
 * Legato Image Asset
 * Name:   button_stop
 * Size:   100x100 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage button_stop;

/*********************************
 * Legato Image Asset
 * Name:   flag_china
 * Size:   50x33 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage flag_china;

/*********************************
 * Legato Image Asset
 * Name:   flag_spain
 * Size:   50x33 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage flag_spain;

/*********************************
 * Legato Image Asset
 * Name:   flag_uk
 * Size:   50x25 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage flag_uk;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         FontSmallStatic
 * Height:       21
 * Baseline:     11
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  13
 * Glyph Ranges: 0x20-0x7E
                 0xE1
***********************************/
extern leRasterFont FontSmallStatic;

/*********************************
 * Legato Font Asset
 * Name:         FontBigDynamic
 * Height:       21
 * Baseline:     13
 * Style:        Antialias
 * Glyph Count:  10
 * Range Count:  1
 * Glyph Ranges: 0x30-0x39
***********************************/
extern leRasterFont FontBigDynamic;

/*********************************
 * Legato Font Asset
 * Name:         FontBigStatic
 * Height:       21
 * Baseline:     15
 * Style:        Antialias
 * Glyph Count:  23
 * Range Count:  10
 * Glyph Ranges: 0x30-0x39
                 0x43
                 0x50
                 0x53
                 0x61
                 0x64-0x65
                 0x6D-0x70
                 0x72
                 0x74
                 0x7A
***********************************/
extern leRasterFont FontBigStatic;

/*********************************
 * Legato Font Asset
 * Name:         FontChinese
 * Height:       23
 * Baseline:     12
 * Style:        Antialias
 * Glyph Count:  12
 * Range Count:  12
 * Glyph Ranges: 0x4E32
                 0x505C
                 0x53EF
                 0x56FA
                 0x59CB
                 0x5B57
                 0x5B9A
                 0x5EA6
                 0x6B62
                 0x8B8A
                 0x9577
                 0x958B
***********************************/
extern leRasterFont FontChinese;

/*****************************************************************************
 * Legato String Table
 * Encoding        UTF16
 * Language Count: 3
 * String Count:   4
 *****************************************************************************/

// language IDs
#define language_English    0
#define language_Spanish    1
#define language_Chinese    2

// string IDs
#define stringID_StringFixed    0
#define stringID_StringDynamic    1
#define stringID_StringRun    2
#define stringID_StringStop    3

extern const leStringTable stringTable;


// string list
extern leTableString string_StringFixed;
extern leTableString string_StringDynamic;
extern leTableString string_StringRun;
extern leTableString string_StringStop;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
