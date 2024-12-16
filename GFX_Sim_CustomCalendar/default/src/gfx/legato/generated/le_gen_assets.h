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
 * Name:   ButtonDown
 * Size:   40x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ButtonDown;

/*********************************
 * Legato Image Asset
 * Name:   ButtonUp
 * Size:   40x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ButtonUp;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         NotoSansSmall
 * Height:       37
 * Baseline:     12
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  18
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont NotoSansSmall;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   25
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_strJun    0
#define stringID_strSat    1
#define stringID_strThu    2
#define stringID_String    3
#define stringID_strNextMonth    4
#define stringID_strMon    5
#define stringID_strJan    6
#define stringID_strTue    7
#define stringID_strPrevMonth    8
#define stringID_strDec    9
#define stringID_strNextYear    10
#define stringID_strDefaultYear    11
#define stringID_strAug    12
#define stringID_strWed    13
#define stringID_strSun    14
#define stringID_strMar    15
#define stringID_strNov    16
#define stringID_strFri    17
#define stringID_strJul    18
#define stringID_strSept    19
#define stringID_strOct    20
#define stringID_strPrevYear    21
#define stringID_strApr    22
#define stringID_strFeb    23
#define stringID_strMay    24

extern const leStringTable stringTable;


// string list
extern leTableString string_strJun;
extern leTableString string_strSat;
extern leTableString string_strThu;
extern leTableString string_String;
extern leTableString string_strNextMonth;
extern leTableString string_strMon;
extern leTableString string_strJan;
extern leTableString string_strTue;
extern leTableString string_strPrevMonth;
extern leTableString string_strDec;
extern leTableString string_strNextYear;
extern leTableString string_strDefaultYear;
extern leTableString string_strAug;
extern leTableString string_strWed;
extern leTableString string_strSun;
extern leTableString string_strMar;
extern leTableString string_strNov;
extern leTableString string_strFri;
extern leTableString string_strJul;
extern leTableString string_strSept;
extern leTableString string_strOct;
extern leTableString string_strPrevYear;
extern leTableString string_strApr;
extern leTableString string_strFeb;
extern leTableString string_strMay;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
