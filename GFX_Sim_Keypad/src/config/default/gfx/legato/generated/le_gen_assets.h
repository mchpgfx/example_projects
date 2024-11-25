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
 * Name:   Image0
 * Size:   180x42 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Image0;

/*********************************
 * Legato Image Asset
 * Name:   PressedImg
 * Size:   100x76 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage PressedImg;

/*********************************
 * Legato Image Asset
 * Name:   ReleasedImg
 * Size:   100x76 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ReleasedImg;

/*********************************
 * Legato Image Asset
 * Name:   ReleasedImg_tictactoe
 * Size:   67x67 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ReleasedImg_tictactoe;

/*********************************
 * Legato Image Asset
 * Name:   PressedImg_tictactoe
 * Size:   67x67 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage PressedImg_tictactoe;

/*********************************
 * Legato Image Asset
 * Name:   PressedImg_rst
 * Size:   129x39 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage PressedImg_rst;

/*********************************
 * Legato Image Asset
 * Name:   PressedImg2
 * Size:   100x76 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage PressedImg2;

/*********************************
 * Legato Image Asset
 * Name:   PressedImgTicTacToe2
 * Size:   67x67 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage PressedImgTicTacToe2;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         NotoSans_Regular
 * Height:       21
 * Baseline:     22
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  17
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont NotoSans_Regular;

/*********************************
 * Legato Font Asset
 * Name:         InterBold_15
 * Height:       38
 * Baseline:     15
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  8
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterBold_15;

/*********************************
 * Legato Font Asset
 * Name:         InterBold_20
 * Height:       38
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  14
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterBold_20;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   22
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_No5    0
#define stringID_WinO    1
#define stringID_Touch    2
#define stringID_No8    3
#define stringID_OVariable    4
#define stringID_No3    5
#define stringID_Rand    6
#define stringID_No4    7
#define stringID_XVariable    8
#define stringID_OGame    9
#define stringID_No7    10
#define stringID_No9    11
#define stringID_WinX    12
#define stringID_XandOGame    13
#define stringID_XGame    14
#define stringID_No1    15
#define stringID_No2    16
#define stringID_Lose    17
#define stringID_Key    18
#define stringID_Clear    19
#define stringID_Restart    20
#define stringID_No6    21

extern const leStringTable stringTable;


// string list
extern leTableString string_No5;
extern leTableString string_WinO;
extern leTableString string_Touch;
extern leTableString string_No8;
extern leTableString string_OVariable;
extern leTableString string_No3;
extern leTableString string_Rand;
extern leTableString string_No4;
extern leTableString string_XVariable;
extern leTableString string_OGame;
extern leTableString string_No7;
extern leTableString string_No9;
extern leTableString string_WinX;
extern leTableString string_XandOGame;
extern leTableString string_XGame;
extern leTableString string_No1;
extern leTableString string_No2;
extern leTableString string_Lose;
extern leTableString string_Key;
extern leTableString string_Clear;
extern leTableString string_Restart;
extern leTableString string_No6;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
