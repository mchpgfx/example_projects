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

#ifndef _APP_NEEDLE_POLY3_H    /* Guard against multiple inclusion */
#define _APP_NEEDLE_POLY3_H

/* Hardcoded stylization of the polygon */ 
#define NEEDEPOLY3_HARDNESS      0.50f
#define NEEDEPOLY3_AA            LE_ANTIALIASING_2X
#define NEEDEPOLY3_CAPSTYLE      LE_CAPSTYLE_ROUND
#define NEEDLEPOLY3_ALPHA        0xff    
    
#define NEEDLE_POLY3_SUCCESS 0
#define NEEDLE_POLY3_FAIL (-1)

 /**
 * @brief Used to define a needle triangle
 * @details Specifies properties of the needle triangle
 */
typedef struct
{
    lePoint center;         /* center of needle */
    lePoint start;          /* mid point of needle base */
    lePoint tip;            /* tip of needle */
    
    lePoint baseStart;      /* start point of needle base */
    lePoint baseEnd;        /* end point of needle base */
    
    leRect oldRect;         /* rect of previous needle position */
    leRect newRect;         /* rect of new needle position */
    
    uint32_t width;         /* width of needle base */
    uint32_t strokeWidth;   /* width of needle border (0 - for no border) */
    
    leDrawSurfaceWidget* drawWidget; /* container draw surface widget */
    
} NEEDLE_POLY3_t;    

// *****************************************************************************
/**
 * @brief Initialize the needle triangle (3-point polygon) object
 * @details Initializes the object <span class="param">needlePoly3</span>, 
 *          must be called before the needle triangle is updated or drawn .
 * @code
 * NEEDLE_ARC_t needleArc;
 * APP_InitializeNeedlePoly3(&needlePoly3, 
 *                           Screen0_surfNeedle,
 *                           NEEDLEPOLY_WIDTH,
 *                           NEEDLEPOLY_STROKE_WIDTH);
 * @endcode
 * @param  needlePoly3 is the needle polygon/triangle object to initialize
 * @param  widget is the container draw surface widget 
 * @param  width the width of the triangle base
 * @param  strokeWidth the width of the triangle stroke
 * @return NEEDLE_POLY3_FAIL or NEEDLE_POLY3_SUCCESS
 */
int APP_InitializeNeedlePoly3(NEEDLE_POLY3_t * needlePoly3, leDrawSurfaceWidget* widget, uint32_t width, uint32_t strokeWidth);

// *****************************************************************************
/**
 * @brief Updates the needle arcs start angle and span
 * @details Updates the <span class="param">needlePoly3</span> angle and length
 *          must be called before the needle triangle is drawn. <span class="param">needleArc</span> 
 *          should have already been initialized using APP_InitializeNeedlePoly3()
 * @code
 * NEEDLE_ARC_t needleArc;
 * 
 * APP_UpdateNeedlePoly3(&needlePoly3,
 *                       START_ANGLE,
 *                       NEEDLE_OUT_RADIUS,
 *                       NEEDLEPOLY_IN_RADIUS); 
 * @endcode
 * @param  needlePoly3 is the needle poly object to update
 * @param  angle the starting angle of the arc
 * @param  outRadius the radius of the needle tip
 * @param  inRadius the inner radius of the needle, or base of triangle
 * @return NEEDLE_POLY3_FAIL or NEEDLE_POLY3_SUCCESS
 */
int APP_UpdateNeedlePoly3(NEEDLE_POLY3_t * needlePoly3, uint32_t angle, uint32_t outRadius, uint32_t inRadius);

// *****************************************************************************
/**
 * @brief Draws the needle arc to the scratch buffer.
 * @details Draws the <span class="param">needleArc</span> to the scratch buffer.
 *          This function must be called inside the container draw surface widget's
 *          draw callback function.
 * @code
 * NEEDLE_ARC_t needleArc;
 * 
 * APP_DrawNeedlePoly3(&needlePoly3, NEEDLE_COLOR_RGBA, NEEDLE2_COLOR_RGBA);
 * @endcode
 * @param  needlePoly3 is the needle triangle object to draw
 * @param  fillColor the color used to fill the triangle
 * @param  strokeColor the stroke color used to draw the triangle sides
 * @return NEEDLE_POLY3_FAIL or NEEDLE_POLY3_SUCCESS
 */
int APP_DrawNeedlePoly3(NEEDLE_POLY3_t * needlePoly3, leColor fillColor, leColor strokeColor);


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif
    
/* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _APP_NEEDLE_POLY3_H */