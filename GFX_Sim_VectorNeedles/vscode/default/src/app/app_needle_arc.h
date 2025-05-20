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

#ifndef _APP_NEEDLE_ARC_H    /* Guard against multiple inclusion */
#define _APP_NEEDLE_ARC_H


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

/* Hardcoded stylization of the arc */    
#define NEEDLEARC_HARDNESS      0.30f
#define NEEDLEARC_AA            LE_ANTIALIASING_NONE
#define NEEDLEARC_CAPSTYLE      LE_CAPSTYLE_NONE
#define NEEDLEARC_ALPHA         0xff
#define NEEDLEARC_MASK          LE_STROKEMASK_OUTSIDEONLY    
    
    
#define NEEDLE_ARC_SUCCESS 0
#define NEEDLE_ARC_FAIL (-1)
    
 /**
 * @brief Used to define a needle arc
 * @details Specifies properties of the needle arc
 */
typedef struct
{
    lePoint center;
    uint32_t radius;
    leRect oldRect;
    leRect newRect;
    
    uint32_t thickness;
    
    int32_t startAngle;
    int32_t span;
            
    leDrawSurfaceWidget* drawWidget;
} NEEDLE_ARC_t;    

// *****************************************************************************
/**
 * @brief Initialize the needle arc object
 * @details Initializes the object <span class="param">needleArc</span>, 
 *          must be called before the needle arc is updated or drawn .
 * @code
 * NEEDLE_ARC_t needleArc;
 * APP_InitializeNeedleArc(&needleArc, 
 *                         Screen0_surfNeedle,
 *                         NEEDLE_ARC_RADIUS,
 *                         NEEDLE_ARC_THICKNESS);
 * @endcode
 * @param  needleArc is the needle arc object to initialize
 * @param  widget is the container draw surface widget 
 * @param  radius the radius of the arc
 * @param  thickness the thickness of the arc (pixels)
 * @return NEEDLE_ARC_FAIL or NEEDLE_ARC_SUCCESS
 */
int APP_InitializeNeedleArc(NEEDLE_ARC_t * needleArc, leDrawSurfaceWidget* widget, uint32_t radius, uint32_t thickness);

// *****************************************************************************
/**
 * @brief Updates the needle arcs start angle and span
 * @details Updates the <span class="param">needleArc</span> start and center angles
 *          must be called before the needle arc is drawn. <span class="param">needleArc</span> 
 *          should have already been initialized using APP_InitializeNeedleArc()
 * @code
 * NEEDLE_ARC_t needleArc;
 * 
 * APP_UpdateNeedleArc(&needleArc,
 *                     START_ANGLE,
 *                     -10);
 * @endcode
 * @param  needleArc is the needle arc object to update
 * @param  startAngle the starting angle of the arc
 * @param  span the center angle of the arc
  * @return NEEDLE_ARC_FAIL or NEEDLE_ARC_SUCCESS
 */
int APP_UpdateNeedleArc(NEEDLE_ARC_t * needleArc, int32_t startAngle, int32_t span);

// *****************************************************************************
/**
 * @brief Draws the needle arc to the scratch buffer.
 * @details Draws the <span class="param">needleArc</span> to the scratch buffer.
 *          This function must be called inside the container draw surface widget's
 *          draw callback function.
 * @code
 * NEEDLE_ARC_t needleArc;
 * 
 * APP_DrawNeedleArc(&needleArc, NEEDLE_COLOR_RGBA);
 * @endcode
 * @param  needleArc is the needle arc object to draw
 * @param  color the color used to draw the arc
 * @return NEEDLE_ARC_FAIL or NEEDLE_ARC_SUCCESS
 */
int APP_DrawNeedleArc(NEEDLE_ARC_t * needleArc, leColor color);


    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _APP_NEEDLE_ARC_H */

/* *****************************************************************************
 End of File
 */
