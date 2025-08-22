#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "gfx/legato/generated/le_gen_init.h"

#define RGB888_TO_RGB565(rgba) \
    ((((rgba) >> 27) & 0x1F) << 11) | ((((rgba) >> 17) & 0x3F) << 5) | (((rgba) >> 11) & 0x1F)

/* Arc colors */
#define ARC1_COLOR_RGBA 0xFF0000FF
#define ARC2_COLOR_RGBA 0x00FF00FF
#define ARC3_COLOR_RGBA 0x0000FFFF

/* Arc Radius */
#define ARC1_RADIUS 60
#define ARC2_RADIUS 80
#define ARC3_RADIUS 100

/* arc styles*/
#define ARC_CAPSTYLE      LE_CAPSTYLE_ROUND
#define ARC_HARDNESS      0.90f
#define ARC_AA            LE_ANTIALIASING_NONE

#define ARC_THICKNESS_PX  20
#define ARC_ALPHA 0xff

/* default angles */
#define DEFAULT_START_ANGLE_DEG 0
#define DEFAULT_SPAN_ANGLE_DEG 305

#define PI 3.14159265358979323846

#define MIN_DELTA_SPAN_DEG 4

/* Arc attributes */
static struct leVectorArc_StrokeAttr arc1Attr = 
{
    .color = ARC1_COLOR_RGBA,
    .alpha = ARC_ALPHA,
    .width = LE_REAL_I16_FROM_FLOAT(ARC_THICKNESS_PX),
    .hardness = LE_REAL_I16_FROM_FLOAT(ARC_HARDNESS),
    .aaMode = ARC_AA,
    .mask = LE_STROKEMASK_ALL,
    .capStyle = ARC_CAPSTYLE,
};

static struct leVectorArc_StrokeAttr arc2Attr =
{
    .color = ARC2_COLOR_RGBA,
    .alpha = ARC_ALPHA,
    .width = LE_REAL_I16_FROM_FLOAT(ARC_THICKNESS_PX),
    .hardness = LE_REAL_I16_FROM_FLOAT(ARC_HARDNESS),
    .aaMode = ARC_AA,
    .mask = LE_STROKEMASK_ALL,
    .capStyle = ARC_CAPSTYLE,
};

static struct leVectorArc_StrokeAttr arc3Attr =
{
    .color = ARC3_COLOR_RGBA,
    .alpha = ARC_ALPHA,
    .width = LE_REAL_I16_FROM_FLOAT(ARC_THICKNESS_PX),
    .hardness = LE_REAL_I16_FROM_FLOAT(ARC_HARDNESS),
    .aaMode = ARC_AA,
    .mask = LE_STROKEMASK_ALL,
    .capStyle = ARC_CAPSTYLE,
    
};

/* Arc span angles */
static uint32_t arc1SpanDeg;
static uint32_t arc2SpanDeg;
static uint32_t arc3SpanDeg;

/* Draw surface on draw function */
leBool event_Screen0_drwCircles_OnDraw(leDrawSurfaceWidget* sfc, leRect* bounds)
{
    struct leVector2 origin;
    lePoint center;
    
    /* Use draw surface center as origin for arcs */
    center.x = Screen0_drwCircles->fn->getWidth(Screen0_drwCircles) / 2;
    center.y = Screen0_drwCircles->fn->getHeight(Screen0_drwCircles) / 2;
    
    leUtils_PointToScreenSpace((leWidget *) Screen0_drwCircles, &center);
    
    origin.x = LE_REAL_I16_FROM_FLOAT(center.x);
    origin.y = LE_REAL_I16_FROM_FLOAT(center.y);
    
    /* Draw arc 1*/
    leDraw_VectorArcStroke(&origin,
                           LE_REAL_I16_FROM_FLOAT(ARC1_RADIUS),
                           DEFAULT_START_ANGLE_DEG * 16,
                           arc1SpanDeg * 16,
                           &arc1Attr); 
    
    /* Draw arc 2 */
    leDraw_VectorArcStroke(&origin,
                           LE_REAL_I16_FROM_FLOAT(ARC2_RADIUS),
                           DEFAULT_START_ANGLE_DEG * 16,
                           arc2SpanDeg * 16,
                           &arc2Attr); 
    
    /* Draw arc 3 */
    leDraw_VectorArcStroke(&origin,
                           LE_REAL_I16_FROM_FLOAT(ARC3_RADIUS),
                           DEFAULT_START_ANGLE_DEG * 16,
                           arc3SpanDeg * 16,
                           &arc3Attr); 
    
    return 1;
    
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

/* Calculates the damage area based on change in span */
leRect App_GetRectByAngles(int32_t startAngle, 
                         int32_t oldSpan,
                         int32_t newSpan,
                         uint32_t radius,
                         uint32_t thickness)
{
    int32_t oldAngle, newAngle, midAngle;
    lePoint oldLine0, oldLine1;
    lePoint newLine0, newLine1;
    lePoint midLine0, midLine1;
    
    leRect newRect;
            
    lePoint topLeft = {0, 0};
    lePoint bottomRight = {0, 0};
    
    int32_t deltaAngle = abs(newSpan - oldSpan);
    if (deltaAngle < 90)
    {

        oldAngle = (startAngle + oldSpan + 360) % 360 ;
        newAngle = (startAngle + newSpan + 360) % 360 ;
        midAngle = ((newAngle + oldAngle)/2) % 360;

        //1. Calculate 3 lines - edges and midline
        lePolarToXY(radius - (thickness / 2), oldAngle, &oldLine0);
        lePolarToXY(radius + (thickness / 2), oldAngle, &oldLine1);

        lePolarToXY(radius - (thickness / 2), newAngle, &newLine0);
        lePolarToXY(radius + (thickness / 2), newAngle, &newLine1);

        lePolarToXY(radius - (thickness / 2), midAngle, &midLine0);
        lePolarToXY(radius + (thickness / 2), midAngle, &midLine1);

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

        newRect.x = topLeft.x;
        newRect.y = topLeft.y;
        newRect.height = topLeft.y - bottomRight.y;
        newRect.width = bottomRight.x - topLeft.x;

        translatePoint(Screen0_drwCircles, &newRect.x, &newRect.y);
        
        leUtils_RectToScreenSpace((leWidget *) Screen0_drwCircles, &newRect);
    }
    else
    {
        newRect = Screen0_drwCircles->widget.rect;
    }
    
    return newRect;
}

/* Widget event filter function for the event filter panel */
static leBool ArcsWidget_filterEvent(leWidget* target, leWidgetEvent* evt, void* data)
{   
    static uint32_t arcId = 0;
    leBool retval = LE_FALSE;
    int32_t x, y;
    lePoint center;
    
    static int32_t lastAngle;
    double angle_radians;
    int32_t newSpan;
    
    int32_t dx, dy;
    
    /* Switch statement to process TOUCH_DOWN, TOUCH_UP and TOUCH_MOVE events */
    switch(evt->id)
    {
        /* On touch down, save touch point and check if an item is touched */
        case LE_EVENT_TOUCH_DOWN:
        {
            x = ((leWidgetEvent_TouchDown *) evt)->x;
            y = ((leWidgetEvent_TouchDown *) evt)->y;  
            
            /* Use draw surface center as origin for arcs */
            center.x = Screen0_drwCircles->fn->getWidth(Screen0_drwCircles) / 2;
            center.y = Screen0_drwCircles->fn->getHeight(Screen0_drwCircles) / 2;
            leUtils_PointToScreenSpace((leWidget *) Screen0_drwCircles, &center);               
            
            /* Get the touch point */
            x = ((leWidgetEvent_TouchDown *) evt)->x;
            y = ((leWidgetEvent_TouchDown *) evt)->y;  
            
            dx = x - center.x;
            dy = center.y - y;
            
            angle_radians = atan2(dy, dx);
            newSpan = (360 + (int32_t)(angle_radians * (180/PI))) % 360;
            
            lastAngle = newSpan;

            /* Get the radius of the touch point to determine which arc to update */
            if ((dx*dx) + (dy*dy) > (ARC2_RADIUS + ARC_THICKNESS_PX / 2) * (ARC2_RADIUS + ARC_THICKNESS_PX / 2))
            {
                arcId = 3;
                arc3SpanDeg = newSpan;
            } 
            else if ((dx*dx) + (dy*dy) > (ARC1_RADIUS + ARC_THICKNESS_PX / 2) * (ARC1_RADIUS + ARC_THICKNESS_PX / 2))
            {
                arcId = 2;
                arc2SpanDeg = newSpan;
            }
            else
            {
                arcId = 1;
                arc1SpanDeg = newSpan;
            }                
            
            Screen0_drwCircles->fn->invalidate(Screen0_drwCircles); 
            
            /* Accept the event, so the event will not propagate further in the widget tree*/
            evt->accepted = LE_TRUE;
            
            /* Own the event, so that the owner will get touch focus */
            evt->owner = target;
            
            retval = LE_TRUE;
            
            break;
        }
        /* On touch move, check move delta and slide the menu panel */
        case LE_EVENT_TOUCH_MOVE:            
        {
            x = ((leWidgetEvent_TouchDown *) evt)->x;
            y = ((leWidgetEvent_TouchDown *) evt)->y;  
            
            /* Use draw surface center as origin for arcs */
            center.x = Screen0_drwCircles->fn->getWidth(Screen0_drwCircles) / 2;
            center.y = Screen0_drwCircles->fn->getHeight(Screen0_drwCircles) / 2;
            leUtils_PointToScreenSpace((leWidget *) Screen0_drwCircles, &center);               
            
            /* Get the touch point */
            x = ((leWidgetEvent_TouchDown *) evt)->x;
            y = ((leWidgetEvent_TouchDown *) evt)->y;  
            
            /* Get the angle of the touch point */
            dx = x - center.x;
            dy = center.y - y;
            
            angle_radians = atan2(dy, dx);
            newSpan = (360 + (int32_t)(angle_radians * (180/PI))) % 360;

            if (abs(lastAngle - newSpan) > MIN_DELTA_SPAN_DEG)
            {
                leRect rect;
                
                switch (arcId)
                {
                    case 3:
                    {
                        rect = App_GetRectByAngles(DEFAULT_START_ANGLE_DEG, arc3SpanDeg, newSpan, ARC3_RADIUS, ARC_THICKNESS_PX);
                        arc3SpanDeg = newSpan;
                        break;
                    }
                    case 2:
                    {
                        rect = App_GetRectByAngles(DEFAULT_START_ANGLE_DEG, arc2SpanDeg, newSpan, ARC2_RADIUS, ARC_THICKNESS_PX);
                        arc2SpanDeg = newSpan;
                        break;
                    }
                    case 1:
                    {
                        rect = App_GetRectByAngles(DEFAULT_START_ANGLE_DEG, arc1SpanDeg, newSpan, ARC1_RADIUS, ARC_THICKNESS_PX);
                        arc1SpanDeg = newSpan;
                        break;
                    }
                }
                
                //increase the rect size to account for round off errors
                rect.x -= ARC_THICKNESS_PX/2;
                rect.y -= ARC_THICKNESS_PX/2;
                rect.height += ARC_THICKNESS_PX;
                rect.width += ARC_THICKNESS_PX; 

                Screen0_drwCircles->fn->_damageArea(Screen0_drwCircles, &rect);
                
                lastAngle = newSpan;
            }
            
            /* Accept the event, so the event will not propagate further in the widget tree*/
            evt->accepted = LE_TRUE;
                    
            retval = LE_TRUE;
           
            break;
        }
        /* On touch up, check if item has been selected and highlight it on the screen */
        case LE_EVENT_TOUCH_UP:            
        {
            x = ((leWidgetEvent_TouchDown *) evt)->x;
            y = ((leWidgetEvent_TouchDown *) evt)->y;  
            
            /* Use draw surface center as origin for arcs */
            center.x = Screen0_drwCircles->fn->getWidth(Screen0_drwCircles) / 2;
            center.y = Screen0_drwCircles->fn->getHeight(Screen0_drwCircles) / 2;
            leUtils_PointToScreenSpace((leWidget *) Screen0_drwCircles, &center);               
            
            /* Get the touch point */
            x = ((leWidgetEvent_TouchDown *) evt)->x;
            y = ((leWidgetEvent_TouchDown *) evt)->y;  
            
            /* Get the angle of the touch point */
            dx = x - center.x;
            dy = center.y - y;
            
            angle_radians = atan2(dy, dx);
            newSpan = (360 + (int32_t)(angle_radians * (180/PI))) % 360;

            switch (arcId)
            {
                case 3:
                {
                    arc3SpanDeg = newSpan;
                    break;
                }
                case 2:
                {
                    arc2SpanDeg = newSpan;
                    break;
                }
                case 1:
                {
                    arc1SpanDeg = newSpan;
                    break;
                }
            }

            Screen0_drwCircles->fn->invalidate(Screen0_drwCircles);            
            
            /* Accept the event, so the event will not propagate further in the widget tree*/
            evt->accepted = LE_TRUE;
                    
            retval = LE_TRUE;

            break;        
        }
        default:
            break;
    }
    
   return retval;
}

/* Event filter structure */
static leWidgetEventFilter ArcsWidget_eventFilter =
{
    ArcsWidget_filterEvent,
    NULL
};

// Screen Events:
void Screen0_OnShow(void)
{
    /* Get the current color mode */
    leColorMode colorMode = leGetLayerColorMode(0);
    
    arc1SpanDeg = DEFAULT_SPAN_ANGLE_DEG;
    arc2SpanDeg = DEFAULT_SPAN_ANGLE_DEG;
    arc3SpanDeg = DEFAULT_SPAN_ANGLE_DEG;
    
    arc3Attr.color = leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, arc3Attr.color);
    arc2Attr.color = leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, arc2Attr.color);
    arc1Attr.color = leColorConvert(LE_COLOR_MODE_RGBA_8888, colorMode, arc1Attr.color);
    
    /* Install event filter to the event filter panel (pnlEventFilter) */
    Screen0_drwCircles->fn->installEventFilter(Screen0_drwCircles, ArcsWidget_eventFilter);
}

void Screen0_OnHide(void)
{
    /* Remove event filter when hiding screen */
    Screen0_drwCircles->fn->removeEventFilter(Screen0_drwCircles, ArcsWidget_eventFilter);    
}

void Screen0_OnUpdate(void)
{
    
}



