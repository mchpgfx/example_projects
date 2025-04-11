/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app_needle_poly3.c

  Summary:
    This file contains helper functions for drawing 3-sided polygons (triangles) 
    using the MGS vector rendering routines. 

  Description:
    This file contains helper functions for drawing 3-sided polygons (triangles) 
    using the MGS vector rendering routines, specifically as for circular gauges.
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
#include "app_needle_poly3.h"

int APP_InitializeNeedlePoly3(NEEDLE_POLY3_t * needlePoly3, leDrawSurfaceWidget* widget, uint32_t width, uint32_t strokeWidth)
{
    if (needlePoly3 == NULL ||
        widget == NULL)
        return NEEDLE_POLY3_FAIL;
    
    needlePoly3->center.x = widget->fn->getWidth(widget) / 2;
    needlePoly3->center.y = widget->fn->getHeight(widget) / 2;
    
    leUtils_PointToScreenSpace((leWidget *) widget, &needlePoly3->center);
    
    needlePoly3->drawWidget = widget;
    
    needlePoly3->width = width;
    needlePoly3->strokeWidth = strokeWidth;
    
    needlePoly3->oldRect = widget->widget.rect;
    needlePoly3->newRect = widget->widget.rect;  
    
    return NEEDLE_POLY3_SUCCESS;
}

int APP_UpdateNeedlePoly3(NEEDLE_POLY3_t * needlePoly3, uint32_t angle, uint32_t outRadius, uint32_t inRadius)
{
    if (needlePoly3 == NULL)
        return NEEDLE_POLY3_FAIL;
    
    if (angle > 360)
        angle %= 360;
    
    if (outRadius > 0 &&
        inRadius < outRadius &&
        needlePoly3->width > 0)
    {
        needlePoly3->drawWidget->fn->_damageArea(needlePoly3->drawWidget, &needlePoly3->oldRect);
    
        needlePoly3->tip.x = outRadius * cos((((double) angle) * M_PI) / 180);
        needlePoly3->tip.y = outRadius * sin((((double) angle) * M_PI) / 180);   

        needlePoly3->tip.x += needlePoly3->center.x;
        needlePoly3->tip.y = needlePoly3->center.y - needlePoly3->tip.y;     

        if (inRadius > 0)
        {
            needlePoly3->start.x = inRadius * cos((((double) angle) * M_PI) / 180);
            needlePoly3->start.y = inRadius * sin((((double) angle) * M_PI) / 180);   

            needlePoly3->start.x += needlePoly3->center.x;
            needlePoly3->start.y = needlePoly3->center.y - needlePoly3->start.y;
            
            needlePoly3->baseStart.x = needlePoly3->start.x + ((needlePoly3->width/2) * cos((((double)angle - 90) * M_PI) / 180));
            needlePoly3->baseStart.y = needlePoly3->start.y - ((needlePoly3->width/2) * sin((((double)angle - 90) * M_PI) / 180));
    
            needlePoly3->baseEnd.x = needlePoly3->start.x + ((needlePoly3->width/2) * cos((((double)angle + 90) * M_PI) / 180));
            needlePoly3->baseEnd.y = needlePoly3->start.y - ((needlePoly3->width/2) * sin((((double)angle + 90) * M_PI) / 180));               
        }
        else
        {
            needlePoly3->start = needlePoly3->center;

            needlePoly3->baseStart.x = needlePoly3->center.x + ((needlePoly3->width/2) * cos((((double)angle - 90) * M_PI) / 180));
            needlePoly3->baseStart.y = needlePoly3->center.y - ((needlePoly3->width/2) * sin((((double)angle - 90) * M_PI) / 180));
            
    
            needlePoly3->baseEnd.x = needlePoly3->center.x + ((needlePoly3->width/2) * cos((((double)angle + 90) * M_PI) / 180));
            needlePoly3->baseEnd.y = needlePoly3->center.y - ((needlePoly3->width/2) * sin((((double)angle + 90) * M_PI) / 180));   
        }

        leRectFromPoints(&needlePoly3->start, &needlePoly3->tip, &needlePoly3->newRect);

        needlePoly3->newRect.width = needlePoly3->newRect.width + (needlePoly3->width + needlePoly3->strokeWidth);
        needlePoly3->newRect.height = needlePoly3->newRect.height + (needlePoly3->width + needlePoly3->strokeWidth);
        needlePoly3->newRect.x = needlePoly3->newRect.x - (needlePoly3->width + needlePoly3->strokeWidth)/2;
        needlePoly3->newRect.y = needlePoly3->newRect.y - (needlePoly3->width + needlePoly3->strokeWidth)/2;

        /* clip to widget rect */
        leRectClip(&needlePoly3->drawWidget->widget.rect, &needlePoly3->newRect, &needlePoly3->newRect);
        
        /* invalidate with new rect */        
        needlePoly3->drawWidget->fn->_damageArea(needlePoly3->drawWidget, &needlePoly3->newRect);    
        needlePoly3->oldRect = needlePoly3->newRect;
    }
    
    return NEEDLE_POLY3_SUCCESS;
}

int APP_DrawNeedlePoly3(NEEDLE_POLY3_t * needlePoly3, leColor fillColor, leColor strokeColor)
{
    struct leVector2 p[3];
    
    if (needlePoly3 == NULL)
        return NEEDLE_POLY3_FAIL;
    
    if (needlePoly3->width != 0)
    {
        p[2].x = LE_REAL_I16_FROM_FLOAT(needlePoly3->baseStart.x);
        p[2].y = LE_REAL_I16_FROM_FLOAT(needlePoly3->baseStart.y);

        p[1].x = LE_REAL_I16_FROM_FLOAT(needlePoly3->tip.x);
        p[1].y = LE_REAL_I16_FROM_FLOAT(needlePoly3->tip.y);

        p[0].x = LE_REAL_I16_FROM_FLOAT(needlePoly3->baseEnd.x);
        p[0].y = LE_REAL_I16_FROM_FLOAT(needlePoly3->baseEnd.y);
        
        if (fillColor != 0x0)
        {
            struct leVectorConvexPolygon_FillAttr attr;
            
            attr.color = fillColor;
            attr.alpha = NEEDLEPOLY3_ALPHA;
            attr.aaMode = (needlePoly3->strokeWidth > 0) ? LE_ANTIALIASING_NONE : NEEDEPOLY3_AA;

            leDraw_VectorConvexPolygonFill((struct leVector2*)&p,
                                           3,
                                           &attr); 
        }
        
        if (needlePoly3->strokeWidth > 0)
        {
            struct leVectorLineAttr lineAttr;
                
            lineAttr.color = strokeColor;
            lineAttr.alpha = 0xff;
            lineAttr.width = LE_REAL_I16_FROM_FLOAT(needlePoly3->strokeWidth);
            lineAttr.hardness = LE_REAL_I16_FROM_FLOAT(NEEDEPOLY3_HARDNESS);
            lineAttr.aaMode = LE_ANTIALIASING_NONE;
            lineAttr.capStyle = NEEDEPOLY3_CAPSTYLE;        

            leDraw_VectorLine(&p[2], &p[1], &lineAttr);  
            leDraw_VectorLine(&p[0], &p[1], &lineAttr);  
            leDraw_VectorLine(&p[2], &p[0], &lineAttr);
        }
    }
    
    return NEEDLE_POLY3_SUCCESS;
}
