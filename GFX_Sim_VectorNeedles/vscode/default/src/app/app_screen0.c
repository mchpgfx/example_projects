/*******************************************************************************
* Copyright (C) 2025 Microchip Technology Inc. and its subsidiaries.
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

#include <stdio.h>

#include "definitions.h"
#include "gfx/legato/generated/le_gen_init.h"
#include "app_needle_line.h"
#include "app_needle_poly3.h"
#include "app_needle_arc.h"

/* Needle center point (absolute position) */
#define NEEDLE_CENTER_X 399
#define NEEDLE_CENTER_Y 256

/* Default values for arc needle */
#define NEEDLE_ARC_RADIUS 150
#define NEEDLE_ARC_THICKNESS 70
#define NEEDLE_ARC_LINE_WIDTH 6

/* Default values for line needle */
#define NEEDLE_OUT_RADIUS 160
#define NEEDLE_IN_RADIUS 140
#define NEEDLE_WIDTH 40
#define NEEDLE2_WIDTH 10

/* Default values for triangle/polygon needle */
#define NEEDLEPOLY_IN_RADIUS 140
#define NEEDLEPOLY_WIDTH 20
#define NEEDLEPOLY_STROKE_WIDTH 8

/* Default colors */
#define NEEDLE_COLOR_RGBA 0x4138FFFF  /* gold */
#define NEEDLE2_COLOR_RGBA 0xE78B00FF /* blue */

/* Animation period @30fps */
#define ANIM_PERIOD_MS 32 

/* Starting angle (based on gauge value = 0) */
#define START_ANGLE 204

/* Span from starting angle for value = 0 */
#define MIN_ANGLE_DELTA_DEG 0

/* Span from starting angle for value = 140 */
#define MAX_ANGLE_DELTA_DEG 228

/* Angle delta per animation tick */
#define INC_ANGLE_DEG 2

/* Default needle type */
#define NEEDLE_DEFAULT_TYPE NEEDLE_LINE

/* Needle types */
typedef enum
{
    NEEDLE_LINE,
    NEEDLE_POLY,
    NEEDLE_ARC,
    NEEDLE_TYPE_MAX,            
} NEEDLE_TYPE_t;

/* Current needle type */
static NEEDLE_TYPE_t needleType;

/* For line needle */
static NEEDLE_LINE_t needleLine; //Outer line (blue glow)
static NEEDLE_LINE_t needleLine2; //inner line (gold)

/* For the polygon/triangle needle */
static NEEDLE_POLY3_t needlePoly3;

/* For arc needle */
static NEEDLE_ARC_t needleArc; //the arc object
static NEEDLE_LINE_t needleLineArc; //the line on the arc edge

/* animation tick counter */
volatile uint32_t animTickCount;

static int32_t angleDeg; //The angle of the needle 
static int32_t angleDegDelta = 0; //The span from angle at 0
static int32_t angleDegInc = INC_ANGLE_DEG; //The angle increment per animation

/* timer handle */
static SYS_TIME_HANDLE animTimer = SYS_TIME_HANDLE_INVALID;

/* Strings to show the needle type */
static leString * needleTypeNames[NEEDLE_TYPE_MAX] = 
{
    (leString*)&string_strVectorLines,
    (leString*)&string_strVectorPoly,
    (leString*)&string_strVectorArc,
};

/* Set the needle type */
static void APP_SetNeedleType(NEEDLE_TYPE_t type)
{
    if (type < NEEDLE_TYPE_MAX)
    {
        needleType = type;
        
        /* Invalidate the whole draw surface area */
        Screen0_surfNeedle->fn->_damageArea(Screen0_surfNeedle, &Screen0_surfNeedle->widget.rect);
        
        /* Reset the angle and the delta */
        angleDeg = START_ANGLE;
        angleDegDelta = 0;
        
        /* Reset all the needles to default */
        APP_UpdateNeedleLine(&needleLine, 
                         START_ANGLE,
                         NEEDLE_OUT_RADIUS,
                         NEEDLE_IN_RADIUS);    
    
        APP_UpdateNeedleLine(&needleLine2,
                         START_ANGLE,
                         NEEDLE_OUT_RADIUS,
                         NEEDLE_IN_RADIUS);  
    
        APP_UpdateNeedlePoly3(&needlePoly3,
                          START_ANGLE,
                          NEEDLE_OUT_RADIUS,
                          NEEDLEPOLY_IN_RADIUS); 
        
        APP_UpdateNeedleArc(&needleArc,
                          START_ANGLE,
                          0);
        APP_UpdateNeedleLine(&needleLineArc,
                            START_ANGLE,
                            NEEDLE_ARC_RADIUS + NEEDLE_ARC_THICKNESS/2,
                            NEEDLE_ARC_RADIUS - NEEDLE_ARC_THICKNESS/2);
        
        /* Update the needle type label */
        Screen0_lblNeedleType->fn->setString(Screen0_lblNeedleType, needleTypeNames[type]);        
    }
}

/* Animation tick timer callback handler */
static void APP_UI_Timer_Callback ( uintptr_t context)
{
    /* Increment the tick count */
    animTickCount++;
}

/* Screen on show callback function. This gets called before the screen is rendered.
 * Initialize globals and widget states here. */
void Screen0_OnShow(void)
{
    /* Reset the tick counter and angle */
    animTickCount = 0;
    angleDeg = START_ANGLE;
    
    /* Initialize the needles */
    APP_InitializeNeedleLine(&needleLine, 
                             Screen0_surfNeedle,
                             NEEDLE_WIDTH);
    
    APP_InitializeNeedleLine(&needleLine2, 
                             Screen0_surfNeedle,
                             NEEDLE2_WIDTH);
    
    APP_InitializeNeedlePoly3(&needlePoly3, 
                              Screen0_surfNeedle,
                              NEEDLEPOLY_WIDTH,
                              NEEDLEPOLY_STROKE_WIDTH);
    
    APP_InitializeNeedleArc(&needleArc, 
                            Screen0_surfNeedle,
                            NEEDLE_ARC_RADIUS,
                            NEEDLE_ARC_THICKNESS);
    APP_InitializeNeedleLine(&needleLineArc,
                            Screen0_surfNeedle,
                            NEEDLE_ARC_LINE_WIDTH);
    
    /* Set the needle type to default */
    APP_SetNeedleType(NEEDLE_DEFAULT_TYPE);
    
    /* Initialize animation timer and register callback function */
    animTimer = SYS_TIME_CallbackRegisterMS(APP_UI_Timer_Callback, 
                                        1,
                                        ANIM_PERIOD_MS,
                                        SYS_TIME_PERIODIC);
    
    /* Start the timer */
    SYS_TIME_TimerStart(animTimer);
}

/* Screen on-hide function. Called when the screen is destroyed/hidden. */
void Screen0_OnHide(void)
{
    /* Stop and destroy animation timer */
    SYS_TIME_TimerStop(animTimer);
    SYS_TIME_TimerDestroy(animTimer);
}

/* Screen update callback function. This gets called at each gfx task cycle.
 * Here, the tick counter is checked if changed, then the needle angle is
 * incremented/decremented and the needle is resized accordingly */
void Screen0_OnUpdate(void)
{
    /* Used to save last tick value */
    static uint32_t lastAnimTick = 0;
    
    /* Check if tick counter has changed */
    if (lastAnimTick != animTickCount)
    {
        /* Set needle angle delta value, within min/max. */
        angleDegDelta += angleDegInc;
        if (angleDegDelta < MIN_ANGLE_DELTA_DEG)
        {
            angleDegInc = INC_ANGLE_DEG;
            angleDegDelta = MIN_ANGLE_DELTA_DEG;
        }
        else if (angleDegDelta > MAX_ANGLE_DELTA_DEG)
        {
            angleDegInc = -INC_ANGLE_DEG;
            angleDegDelta = MAX_ANGLE_DELTA_DEG;
        }
        
        /* Set the needle angle */
        angleDeg = (START_ANGLE - angleDegDelta);

        if (angleDeg >= 0)
        {
            /* Based on needle type, update the needle angle and size */
            switch(needleType)
            {
                /* Line needle */
                case NEEDLE_LINE:
                {
                    APP_UpdateNeedleLine(&needleLine, angleDeg, NEEDLE_OUT_RADIUS, 
                                         NEEDLE_IN_RADIUS - (NEEDLE_IN_RADIUS * angleDegDelta)/MAX_ANGLE_DELTA_DEG);
                    APP_UpdateNeedleLine(&needleLine2, angleDeg, NEEDLE_OUT_RADIUS,
                                         NEEDLE_IN_RADIUS - (NEEDLE_IN_RADIUS * angleDegDelta)/MAX_ANGLE_DELTA_DEG);
                    break;
                }
                /* Triangle/Polygon needle */
                case NEEDLE_POLY:
                {
                    APP_UpdateNeedlePoly3(&needlePoly3, angleDeg, NEEDLE_OUT_RADIUS, 
                                         NEEDLEPOLY_IN_RADIUS - (NEEDLEPOLY_IN_RADIUS * angleDegDelta)/MAX_ANGLE_DELTA_DEG);
                    break;
                }
                /* Arc needle */
                case NEEDLE_ARC:
                {
                    APP_UpdateNeedleArc(&needleArc,
                          START_ANGLE,
                          -angleDegDelta);
                    
                    APP_UpdateNeedleLine(&needleLineArc,
                            angleDeg,
                            NEEDLE_ARC_RADIUS + NEEDLE_ARC_THICKNESS/2,
                            NEEDLE_ARC_RADIUS - NEEDLE_ARC_THICKNESS/2);                     
                    break;
                }
                default:
                    break;
            }
        }
        else
        {
            switch(needleType)
            {
                case NEEDLE_LINE:
                {            
                    APP_UpdateNeedleLine(&needleLine, 360 + angleDeg, NEEDLE_OUT_RADIUS, 
                                        NEEDLE_IN_RADIUS - (NEEDLE_IN_RADIUS * angleDegDelta)/MAX_ANGLE_DELTA_DEG);
                    APP_UpdateNeedleLine(&needleLine2, 360 + angleDeg, NEEDLE_OUT_RADIUS, 
                                        NEEDLE_IN_RADIUS - (NEEDLE_IN_RADIUS * angleDegDelta)/MAX_ANGLE_DELTA_DEG);
                    
                    break;
                }
                case NEEDLE_POLY:
                {
                    APP_UpdateNeedlePoly3(&needlePoly3, 360 + angleDeg, NEEDLE_OUT_RADIUS, 
                                         NEEDLEPOLY_IN_RADIUS - (NEEDLEPOLY_IN_RADIUS * angleDegDelta)/MAX_ANGLE_DELTA_DEG);
                    
                    break;
                }
                case NEEDLE_ARC:
                {
                    APP_UpdateNeedleArc(&needleArc,
                          START_ANGLE,
                          -angleDegDelta);   

                    APP_UpdateNeedleLine(&needleLineArc,
                            360 + angleDeg,
                            NEEDLE_ARC_RADIUS + NEEDLE_ARC_THICKNESS/2,
                            NEEDLE_ARC_RADIUS - NEEDLE_ARC_THICKNESS/2);                   
                    
                    break;
                }                
                default:
                    break;
            }
        }

        
        lastAnimTick = animTickCount;
    } 
}

/* Draw surface onDraw callback function. 
 * This gets called every time the draw surface is invalidated */
leBool event_Screen0_surfNeedle_OnDraw(leDrawSurfaceWidget* sfc, leRect* bounds)
{
    /* Get the current color mode */
    leColorMode colorMode = leGetLayerColorMode(0);
    
    /* Based on current needle type, draw the needle */
    switch(needleType)
    {
        case NEEDLE_LINE:
        {            
            /* Draw the background line (blue) */
            APP_DrawNeedleLine(&needleLine, leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, NEEDLE_COLOR_RGBA));
            
            /* Draw the foreground line (gold) */
            APP_DrawNeedleLine(&needleLine2, leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, NEEDLE2_COLOR_RGBA));
            
            break;
        }
        case NEEDLE_POLY:
        {
            /* Draw the polygon/triangle needle */
            APP_DrawNeedlePoly3(&needlePoly3, 
                                leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, NEEDLE_COLOR_RGBA),   /* Fill color */
                                leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, NEEDLE2_COLOR_RGBA)); /* stroke color */
            break;
        }
        case NEEDLE_ARC:
        {
            /* Draw the arc */
            APP_DrawNeedleArc(&needleArc, leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, NEEDLE_COLOR_RGBA));
            
            /* Draw the edge line */
            APP_DrawNeedleLine(&needleLineArc, leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, NEEDLE2_COLOR_RGBA));
            break;
        }
        default:
            break;
    }
    
    return LE_TRUE;
}

/* Cycle through the needle type */
void event_Screen0_btnChangeNeedle_OnReleased(leButtonWidget* btn)
{
    APP_SetNeedleType((needleType + 1) % NEEDLE_TYPE_MAX);
}


