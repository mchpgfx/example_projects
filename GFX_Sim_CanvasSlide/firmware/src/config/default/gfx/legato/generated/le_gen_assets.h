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
 * Format: RGBA_8888
 ***********************************/
extern leImage mchpLogo_small;

/*********************************
 * Legato Image Asset
 * Name:   QuickstartDown_WQVGA
 * Size:   160x74 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage QuickstartDown_WQVGA;

/*********************************
 * Legato Image Asset
 * Name:   QuickstartUp_WQVGA
 * Size:   160x74 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage QuickstartUp_WQVGA;

/*********************************
 * Legato Image Asset
 * Name:   MGS_120
 * Size:   120x130 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage MGS_120;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         NotoSans_Regular
 * Height:       21
 * Baseline:     18
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  16
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont NotoSans_Regular;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   6
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_Easy    0
#define stringID_Fast    1
#define stringID_SlideRight    2
#define stringID_Smart    3
#define stringID_SlideLeft    4
#define stringID_MGS    5

extern const leStringTable stringTable;


// string list
extern leTableString string_Easy;
extern leTableString string_Fast;
extern leTableString string_SlideRight;
extern leTableString string_Smart;
extern leTableString string_SlideLeft;
extern leTableString string_MGS;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
