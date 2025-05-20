/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app_needle_line.c

  Summary:
    This file contains helper functions for drawing lines using the MGS vector 
    rendering routines. 

  Description:
    This file contains helper functions for drawing lines using the MGS vector 
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
#include "app_needle_line.h"

int APP_InitializeNeedleLine(NEEDLE_LINE_t * needleLine, leDrawSurfaceWidget* widget, uint32_t thickness)
{
    if (needleLine == NULL ||
        widget == NULL ||
        thickness == 0)
        return NEEDLE_LINE_FAIL;
    
    needleLine->center.x = widget->fn->getWidth(widget) / 2;
    needleLine->center.y = widget->fn->getHeight(widget) / 2;
    
    leUtils_PointToScreenSpace((leWidget *) widget, &needleLine->center);
    
    needleLine->thickness = thickness;
    
    needleLine->drawWidget = widget;
    
    needleLine->oldRect = widget->widget.rect;
    needleLine->newRect = widget->widget.rect;  
    
    return NEEDLE_LINE_SUCCESS;
}

int APP_UpdateNeedleLine(NEEDLE_LINE_t * needleLine, uint32_t angle, uint32_t outRadius, uint32_t inRadius)
{
    if (needleLine == NULL)
        return NEEDLE_LINE_FAIL;
    
    if (angle > 360)
        angle %= 360;
    
    if (outRadius > 0 &&
        inRadius < outRadius &&
        needleLine->thickness > 0)
    {
        needleLine->drawWidget->fn->_damageArea(needleLine->drawWidget, &needleLine->oldRect);
    
        needleLine->tip.x = outRadius * cos((((double) angle) * M_PI) / 180);
        needleLine->tip.y = outRadius * sin((((double) angle) * M_PI) / 180);   

        needleLine->tip.x += needleLine->center.x;
        needleLine->tip.y = needleLine->center.y - needleLine->tip.y;     

        if (inRadius > 0)
        {
            needleLine->start.x = inRadius * cos((((double) angle) * M_PI) / 180);
            needleLine->start.y = inRadius * sin((((double) angle) * M_PI) / 180);   

            needleLine->start.x += needleLine->center.x;
            needleLine->start.y = needleLine->center.y - needleLine->start.y;
        }
        else
        {
            needleLine->start = needleLine->center;
        }

        leRectFromPoints(&needleLine->start, &needleLine->tip, &needleLine->newRect);

        needleLine->newRect.width = needleLine->newRect.width + needleLine->thickness;
        needleLine->newRect.height = needleLine->newRect.height + needleLine->thickness;
        needleLine->newRect.x = needleLine->newRect.x - needleLine->thickness/2;
        needleLine->newRect.y = needleLine->newRect.y - needleLine->thickness/2;

        /* invalidate with new rect */
        /* TODO: may need to clip to widget rect */
        needleLine->drawWidget->fn->_damageArea(needleLine->drawWidget, &needleLine->newRect);    
        needleLine->oldRect = needleLine->newRect;        
    }
    
    return NEEDLE_LINE_SUCCESS;
}

int APP_DrawNeedleLine(NEEDLE_LINE_t * needleLine, leColor color)
{
    struct leVectorLineAttr attr;
    struct leVector2 start;
    struct leVector2 tip;
    
    if (needleLine == NULL)
        return NEEDLE_LINE_FAIL;
    
    if (color != 0x0 && 
        needleLine->thickness != 0)
    {
        start.x = LE_REAL_I16_FROM_FLOAT(needleLine->start.x);
        start.y = LE_REAL_I16_FROM_FLOAT(needleLine->start.y);

        tip.x = LE_REAL_I16_FROM_FLOAT(needleLine->tip.x);
        tip.y = LE_REAL_I16_FROM_FLOAT(needleLine->tip.y);

        attr.color = color;
        attr.alpha = NEEDLELINE_ALPHA;
        attr.width = LE_REAL_I16_FROM_FLOAT(needleLine->thickness);
        attr.hardness = LE_REAL_I16_FROM_FLOAT(NEEDELINE_HARDNESS);
        attr.aaMode = NEEDELINE_AA;
        attr.capStyle = NEEDELINE_CAPSTYLE;

        leDraw_VectorLine(&start, &tip, &attr);  
    }
    
    return NEEDLE_LINE_SUCCESS;
}
