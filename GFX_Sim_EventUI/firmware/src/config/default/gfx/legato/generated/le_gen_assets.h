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
 * Format: RGB_565
 ***********************************/
extern leImage QuickstartDown_WVGA;

/*********************************
 * Legato Image Asset
 * Name:   QuickstartUp_WVGA
 * Size:   260x120 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage QuickstartUp_WVGA;

/*********************************
 * Legato Image Asset
 * Name:   MHGS_logo_WVGA
 * Size:   320x300 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage MHGS_logo_WVGA;

/*********************************
 * Legato Image Asset
 * Name:   mchpLogo_light
 * Size:   152x40 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage mchpLogo_light;

/*********************************
 * Legato Image Asset
 * Name:   mchp_large
 * Size:   160x93 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage mchp_large;

/*********************************
 * Legato Image Asset
 * Name:   mchpLogo_dark
 * Size:   122x30 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage mchpLogo_dark;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         NotoSans_48
 * Height:       21
 * Baseline:     36
 * Style:        Antialias
 * Glyph Count:  20
 * Range Count:  12
 * Glyph Ranges: 0x2E
                 0x45-0x46
                 0x49
                 0x52-0x53
                 0x61
                 0x63-0x65
                 0x67
                 0x69
                 0x6C-0x6E
                 0x70
                 0x72-0x74
                 0x79
***********************************/
extern leRasterFont NotoSans_48;

/*********************************
 * Legato Font Asset
 * Name:         MyNewFont
 * Height:       21
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  12
 * Glyph Ranges: 0x20-0x7E
                 0xE9
***********************************/
extern leRasterFont MyNewFont;

/*********************************
 * Legato Font Asset
 * Name:         NotoSans_Regular_Time
 * Height:       21
 * Baseline:     51
 * Style:        Antialias
 * Glyph Count:  11
 * Range Count:  2
 * Glyph Ranges: 0x30-0x3A
***********************************/
extern leRasterFont NotoSans_Regular_Time;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 2
 * String Count:   8
 *****************************************************************************/

// language IDs
#define language_English    0
#define language_French    1

// string IDs
#define stringID_ChangeLanguageString    0
#define stringID_Smart    1
#define stringID_Fast    2
#define stringID_MyNewGraphicsApp    3
#define stringID_ClockString    4
#define stringID_ColonString    5
#define stringID_ChangeScreenString    6
#define stringID_Easy    7

extern const leStringTable stringTable;


// string list
extern leTableString string_ChangeLanguageString;
extern leTableString string_Smart;
extern leTableString string_Fast;
extern leTableString string_MyNewGraphicsApp;
extern leTableString string_ClockString;
extern leTableString string_ColonString;
extern leTableString string_ChangeScreenString;
extern leTableString string_Easy;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
