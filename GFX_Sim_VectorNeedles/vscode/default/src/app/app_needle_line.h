/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
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

#ifndef _APP_NEEDLE_LINE_H    /* Guard against multiple inclusion */
#define _APP_NEEDLE_LINE_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

/* Hardcoded stylization of the lines */     
#define NEEDELINE_HARDNESS      0.30f
#define NEEDELINE_AA            LE_ANTIALIASING_NONE
#define NEEDELINE_CAPSTYLE      LE_CAPSTYLE_ROUND
#define NEEDLELINE_ALPHA        0xff    
    
#define NEEDLE_LINE_SUCCESS 0
#define NEEDLE_LINE_FAIL (-1)

 /**
 * @brief Used to define a needle line
 * @details Specifies properties of the needle line
 */    
typedef struct
{
    lePoint center;
    lePoint start;
    lePoint tip;
    
    leRect oldRect;
    leRect newRect;
    
    uint32_t thickness;
            
    leDrawSurfaceWidget* drawWidget;
} NEEDLE_LINE_t;    

// *****************************************************************************
/**
 * @brief Initialize the needle line object
 * @details Initializes the object <span class="param">needleLine</span>, 
 *          must be called before the needle line is updated or drawn .
 * @code
 * NEEDLE_LINE_t needleLine;
 * APP_InitializeNeedleLine(&needleLine, 
 *                          Screen0_surfNeedle,
 *                          NEEDLE_WIDTH);
 * @endcode
 * @param  needleLine is the needle line object to initialize
 * @param  widget is the container draw surface widget 
 * @param  thickness the thickness of the line (pixels)
 * @return NEEDLE_LINE_FAIL or NEEDLE_LINE_SUCCESS
 */
int APP_InitializeNeedleLine(NEEDLE_LINE_t * needleLine, leDrawSurfaceWidget* widget, uint32_t thickness);

// *****************************************************************************
/**
 * @brief Updates the needle line's angle and start and end point
 * @details Updates the <span class="param">needleLine</span> angle, start and end points.
 *          Must be called before the needle line is drawn. <span class="param">needleArc</span> 
 *          should have already been initialized using APP_InitializeNeedleLine()
 * @code
 * NEEDLE_LINE_t needleLine;
 * 
 * APP_UpdateNeedleLine(&needleLine, 
 *                         START_ANGLE,
 *                         NEEDLE_OUT_RADIUS,
 *                         NEEDLE_IN_RADIUS);    
 * @endcode
 * @param  needleLine is the needle line object to update
 * @param  angle the angle of the line
 * @param  outRadius the outer radius of the line (tip)
 * @param  inRadus the inner radius of the line (base)
  * @return NEEDLE_ARC_FAIL or NEEDLE_ARC_SUCCESS
 */
int APP_UpdateNeedleLine(NEEDLE_LINE_t * needleLine, 
                         uint32_t angle, 
                         uint32_t outRadius,
                         uint32_t inRadius);

// *****************************************************************************
/**
 * @brief Draws the needle line to the scratch buffer.
 * @details Draws the <span class="param">needleLine</span> to the scratch buffer.
 *          This function must be called inside the container draw surface widget's
 *          draw callback function.
 * @code
 * NEEDLE_LINE_t needleLine;
 * 
 * APP_DrawNeedleLine(&needleLine, NEEDLE_COLOR_RGBA);
 * @endcode
 * @param  needleArc is the needle arc object to draw
 * @param  color the color used to draw the arc
 * @return NEEDLE_ARC_FAIL or NEEDLE_ARC_SUCCESS
 */
int APP_DrawNeedleLine(NEEDLE_LINE_t * needleLine, 
                       leColor color);


    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _APP_NEEDLE_LINE_H */

/* *****************************************************************************
 End of File
 */
