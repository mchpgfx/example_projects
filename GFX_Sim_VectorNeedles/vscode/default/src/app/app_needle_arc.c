/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app_needle_arc.c

  Summary:
    This file contains helper functions for drawing arcs using the MGS vector 
    rendering routines. 

  Description:
    This file contains helper functions for drawing arcs using the MGS vector 
    rendering routines, specifically as for circular gauges.
 *******************************************************************************/

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

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#include "gfx/legato/generated/le_gen_init.h"
#include "gfx/legato/vector/legato_vector.h"
#include "app_needle_arc.h"

/* Initializes the arc needle object */
int APP_InitializeNeedleArc(NEEDLE_ARC_t * needleArc, leDrawSurfaceWidget* widget, uint32_t radius, uint32_t thickness)
{
    if (needleArc == NULL ||
        widget == NULL ||
        thickness == 0)
        return NEEDLE_ARC_FAIL;
    
    needleArc->center.x = widget->fn->getWidth(widget) / 2;
    needleArc->center.y = widget->fn->getHeight(widget) / 2;
    
    leUtils_PointToScreenSpace((leWidget *) widget, &needleArc->center);
    
    needleArc->thickness = thickness;
    needleArc->radius = radius;
    
    needleArc->drawWidget = widget;
    
    needleArc->oldRect = widget->widget.rect;
    needleArc->newRect = widget->widget.rect;  
    
    return NEEDLE_ARC_SUCCESS;
}

void expandTopLeft(lePoint * topLeft, lePoint * newPoint)
{
    if (newPoint->x < topLeft->x)
        topLeft->x = newPoint->x;
    
    if (newPoint->y > topLeft->y)
        topLeft->y = newPoint->y;
}

static void expandBottomRight(lePoint * bottomRight, lePoint * newPoint)
{
    if (newPoint->x > bottomRight->x)
        bottomRight->x = newPoint->x;
    
    if (newPoint->y < bottomRight->y)
        bottomRight->y = newPoint->y;
}

static void translatePoint(leDrawSurfaceWidget * widget, int16_t * x, int16_t * y)
{
    *x += widget->widget.rect.width / 2;
    *y = widget->widget.rect.height / 2 - *y;
}

int APP_UpdateNeedleArc(NEEDLE_ARC_t * needleArc, int32_t startAngle, int32_t span)
{
    bool updated = false;
    
    if (needleArc == NULL)
        return NEEDLE_ARC_FAIL;
    
    /* only span has changed, calculate the rect based on delta span */
    if (needleArc->startAngle == startAngle)
    {
        int32_t deltaAngle = abs(needleArc->span - span);
        if (deltaAngle < 45)
        {
            
            int32_t oldAngle, newAngle, midAngle;
            lePoint oldLine0, oldLine1;
            lePoint newLine0, newLine1;
            lePoint midLine0, midLine1;

            needleArc->drawWidget->fn->_damageArea(needleArc->drawWidget, &needleArc->oldRect);

            lePoint topLeft = {0, 0};
            lePoint bottomRight = {0, 0};

            oldAngle = (startAngle + needleArc->span + 360) % 360 ;
            newAngle = (startAngle + span + 360) % 360 ;
            midAngle = ((newAngle + oldAngle)/2) % 360;

            //1. Calculate 3 lines - edges and midline
            lePolarToXY(needleArc->radius - (needleArc->thickness / 2), oldAngle, &oldLine0);
            lePolarToXY(needleArc->radius + (needleArc->thickness / 2), oldAngle, &oldLine1);

            lePolarToXY(needleArc->radius - (needleArc->thickness / 2), newAngle, &newLine0);
            lePolarToXY(needleArc->radius + (needleArc->thickness / 2), newAngle, &newLine1);

            lePolarToXY(needleArc->radius - (needleArc->thickness / 2), midAngle, &midLine0);
            lePolarToXY(needleArc->radius + (needleArc->thickness / 2), midAngle, &midLine1);

                //2. Create a rectangle based those points
            topLeft = oldLine0;
            expandTopLeft(&topLeft, &oldLine1);
            expandTopLeft(&topLeft, &newLine0);
            expandTopLeft(&topLeft, &newLine1);
            expandTopLeft(&topLeft, &midLine0);
            expandTopLeft(&topLeft, &midLine1);

            bottomRight = oldLine0;
            expandBottomRight(&bottomRight, &oldLine1);
            expandBottomRight(&bottomRight, &newLine0);
            expandBottomRight(&bottomRight, &newLine1);
            expandBottomRight(&bottomRight, &midLine0);
            expandBottomRight(&bottomRight, &midLine1);

            needleArc->newRect.x = topLeft.x;
            needleArc->newRect.y = topLeft.y;
            needleArc->newRect.height = topLeft.y - bottomRight.y;
            needleArc->newRect.width = bottomRight.x - topLeft.x;

            //3. translate the rectangle
            translatePoint(needleArc->drawWidget, &needleArc->newRect.x, &needleArc->newRect.y);

            leUtils_RectToScreenSpace((const leWidget*) needleArc->drawWidget, &needleArc->newRect);

            //increase the rect size to account for round off errors
            needleArc->newRect.x -= 540;
            needleArc->newRect.y -= 540;
            needleArc->newRect.height += 580;
            needleArc->newRect.width += 580; 
            
            needleArc->drawWidget->fn->_damageArea(needleArc->drawWidget, &needleArc->newRect);  
            needleArc->oldRect = needleArc->newRect;
            
            updated = true;
        }
    }
    
    needleArc->startAngle = startAngle;
    needleArc->span = span;
    
    if (updated == false)
    {
        needleArc->drawWidget->fn->invalidate(needleArc->drawWidget);
    }
    
    return NEEDLE_ARC_SUCCESS;
}

int APP_DrawNeedleArc(NEEDLE_ARC_t * needleArc, leColor color)
{
    if (needleArc == NULL)
        return NEEDLE_ARC_FAIL;
    
    if (color != 0x0 && 
        needleArc->thickness != 0)
    {
        struct leVectorArc_StrokeAttr attr;
        struct leVector2 origin;
        leReal_i16 rad = LE_REAL_I16_FROM_FLOAT(needleArc->radius);
                
        origin.x = LE_REAL_I16_FROM_FLOAT(needleArc->center.x);
        origin.y = LE_REAL_I16_FROM_FLOAT(needleArc->center.y);

        attr.color = color;
        attr.alpha = NEEDLEARC_ALPHA;
        attr.width = LE_REAL_I16_FROM_FLOAT(needleArc->thickness);
        attr.hardness = LE_REAL_I16_FROM_FLOAT(NEEDLEARC_HARDNESS);
        attr.aaMode = NEEDLEARC_AA;
        attr.mask = LE_STROKEMASK_ALL;
        attr.capStyle = NEEDLEARC_CAPSTYLE;

        leDraw_VectorArcStroke(&origin, 
                               rad, 
                               needleArc->startAngle * 16, 
                               needleArc->span * 16, 
                               true, 
                               LE_REAL_I16_FROM_FLOAT(0.15f), 
                               &attr);  
    }
    
    return NEEDLE_ARC_SUCCESS;
}
