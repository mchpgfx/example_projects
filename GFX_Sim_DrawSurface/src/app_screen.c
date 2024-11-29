/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/
#include "definitions.h"

#define DRAWSURFACE_X_OFFSET     20
#define DRAWSURFACE_Y_OFFSET     40
#define DRAWSURFACE_X_SIZE       760
#define DRAWSURFACE_Y_SIZE       400
#define DRAWSURFACE_ARRAY_X_SIZE 760
#define DRAWSURFACE_ARRAY_Y_SIZE 400
#define DEFAULT_POINT_SIZE       4
#define COLOR_RED                0xFF0000FF
#define COLOR_ORANGE             0xFFA500FF
#define COLOR_YELLOW             0xFFFF00FF
#define COLOR_GREEN              0x00FF00FF
#define COLOR_BLUE               0x0000FFFF
#define COLOR_INDIGO             0x4B0082FF
#define COLOR_VIOLET             0xEE82EEFF

typedef enum
{
    SCRN_DRAW_RECT,
    SCRN_DRAW_RAND,
    SCRN_DRAW_ERASE
} SCRN_DRAW_CMD;
static SCRN_DRAW_CMD drawCmd = SCRN_DRAW_ERASE;
uint32_t drawsurface[DRAWSURFACE_ARRAY_X_SIZE][DRAWSURFACE_ARRAY_Y_SIZE];
uint32_t pointSize = DEFAULT_POINT_SIZE;
leColor clr = COLOR_RED;
leRect damagedRect;

static leBool DrawSurface_filterEvent(leWidget* target, leWidgetEvent* evt, void* data);
static leWidgetEventFilter DrawSurface_eventFilter =
{
    DrawSurface_filterEvent,
    NULL
};

static leBool DrawSurface_filterEvent(leWidget* target, leWidgetEvent* evt, void* data)
{    
    leBool retval = LE_FALSE;
    int32_t x,y;
    
    switch(evt->id)
    {
        case LE_EVENT_TOUCH_DOWN:
        {
            x = ((leWidgetEvent_TouchDown *) evt)->x;
            y = ((leWidgetEvent_TouchDown *) evt)->y;
            
            // Check if the touch point was between the Draw Surface coordinates
            if ((x < DRAWSURFACE_X_OFFSET) || (x > DRAWSURFACE_X_OFFSET + DRAWSURFACE_X_SIZE) 
             || (y < DRAWSURFACE_Y_OFFSET) || (y > DRAWSURFACE_Y_OFFSET + DRAWSURFACE_Y_SIZE))
            {
                break;
            }
            
            // Create the rectangle that marks the damaged area.
            // Only this area will be updates, this way we will speed up the frame buffer update process.
            damagedRect.x = x - pointSize / 2;
            damagedRect.y = y - pointSize / 2;
            damagedRect.width = pointSize;
            damagedRect.height = pointSize;
            
            // Limit the damaged rectangle to Drawing Surface widget
            if (damagedRect.x < DRAWSURFACE_X_OFFSET)
            {
                damagedRect.width = pointSize - (DRAWSURFACE_X_OFFSET - damagedRect.x);
                damagedRect.x = DRAWSURFACE_X_OFFSET;
            }
            if (damagedRect.x > DRAWSURFACE_X_SIZE + DRAWSURFACE_X_OFFSET - pointSize)
            {
                damagedRect.width = DRAWSURFACE_X_SIZE + DRAWSURFACE_X_OFFSET- damagedRect.x;
            }
            if (damagedRect.y < DRAWSURFACE_Y_OFFSET)
            {
                damagedRect.height = pointSize - (DRAWSURFACE_Y_OFFSET - damagedRect.y);
                damagedRect.y = DRAWSURFACE_Y_OFFSET;
            }
            if (damagedRect.y > DRAWSURFACE_Y_SIZE + DRAWSURFACE_Y_OFFSET - pointSize)
            {
                damagedRect.height = DRAWSURFACE_Y_SIZE + DRAWSURFACE_Y_OFFSET - damagedRect.y;
            }
            
            drawCmd = SCRN_DRAW_RECT;
            Screen0_DrawSurfaceWidget_0->fn->_damageArea(Screen0_DrawSurfaceWidget_0, &damagedRect);
            
            evt->accepted = LE_TRUE;
            evt->owner = target;
            
            retval = LE_TRUE;
           
            break;
        }
        case LE_EVENT_TOUCH_MOVE:
        {
            x = ((leWidgetEvent_TouchMove *) evt)->x;
            y = ((leWidgetEvent_TouchMove *) evt)->y;
            
            if ((x < DRAWSURFACE_X_OFFSET) || (x > DRAWSURFACE_X_OFFSET + DRAWSURFACE_X_SIZE) 
             || (y < DRAWSURFACE_Y_OFFSET) || (y > DRAWSURFACE_Y_OFFSET + DRAWSURFACE_Y_SIZE))
            {
                break;
            }
            
            damagedRect.x = x - pointSize / 2;
            damagedRect.y = y - pointSize / 2;
            damagedRect.width = pointSize;
            damagedRect.height = pointSize;
            
            if (damagedRect.x < DRAWSURFACE_X_OFFSET)
            {
                damagedRect.width = pointSize - (DRAWSURFACE_X_OFFSET - damagedRect.x);
                damagedRect.x = DRAWSURFACE_X_OFFSET;
            }
            if (damagedRect.x > DRAWSURFACE_X_SIZE + DRAWSURFACE_X_OFFSET - pointSize)
            {
                damagedRect.width = DRAWSURFACE_X_SIZE + DRAWSURFACE_X_OFFSET- damagedRect.x;
            }
            if (damagedRect.y < DRAWSURFACE_Y_OFFSET)
            {
                damagedRect.height = pointSize - (DRAWSURFACE_Y_OFFSET - damagedRect.y);
                damagedRect.y = DRAWSURFACE_Y_OFFSET;
            }
            if (damagedRect.y > DRAWSURFACE_Y_SIZE + DRAWSURFACE_Y_OFFSET - pointSize)
            {
                damagedRect.height = DRAWSURFACE_Y_SIZE + DRAWSURFACE_Y_OFFSET - damagedRect.y;
            }
            
            drawCmd = SCRN_DRAW_RECT;
            Screen0_DrawSurfaceWidget_0->fn->_damageArea(Screen0_DrawSurfaceWidget_0, &damagedRect);
            
            evt->accepted = LE_TRUE;
            retval = LE_TRUE;

            break;
        }
        default:
            break;
    }

   return retval;
}

void event_Screen0_ButtonWidget_Random_OnReleased(leButtonWidget* btn)
{
    int i,j;
    // Create a matrix with random colors in it
    for (i = 0; i < DRAWSURFACE_ARRAY_X_SIZE; i++)
        for (j = 0; j < DRAWSURFACE_ARRAY_Y_SIZE; j++)
            drawsurface[i][j] = (rand() * rand()) | 0x000000FF;
    drawCmd = SCRN_DRAW_RAND;
    Screen0_DrawSurfaceWidget_0->fn->invalidate(Screen0_DrawSurfaceWidget_0);
}

void event_Screen0_ButtonWidget_Erase_OnReleased(leButtonWidget* btn)
{
    drawCmd = SCRN_DRAW_ERASE;
    //To show a clean drawing surface it's enough to invalidate the widget.
    Screen0_DrawSurfaceWidget_0->fn->invalidate(Screen0_DrawSurfaceWidget_0);
}

leBool event_Screen0_DrawSurfaceWidget_0_OnDraw(leDrawSurfaceWidget* sfc, leRect* bounds)
{
    leBool retval = LE_TRUE;

    switch(drawCmd)
    {
        case SCRN_DRAW_RECT:
        {
            leRenderer_FillArea(damagedRect.x,
                                damagedRect.y,
                                pointSize, pointSize,
                                clr,
                                255);
            break;
        }
        case SCRN_DRAW_RAND:
        {
            /*WARNING - modifying pixel by pixel all the widget area may produce screen tearing on hardware devices
             *        - issue is not seen on simulator due to drawing speed
             *        - this method was only used here for demo purpose on how to modify each pixel
             */
            for (int i = 0; i < DRAWSURFACE_ARRAY_X_SIZE; i++)
                for (int j = 0; j < DRAWSURFACE_ARRAY_Y_SIZE; j++)
                    leRenderer_PutPixel_Safe(i + DRAWSURFACE_X_OFFSET,
                                             j + DRAWSURFACE_Y_OFFSET,
                                             (leColor)drawsurface[i][j]);
            break;
        }
        case SCRN_DRAW_ERASE:
            break;
        default:
        {
            break;
        }
    }

    return retval;
}

void Screen0_OnShow(void)
{
    Screen0_DrawSurfaceWidget_0->fn->installEventFilter(Screen0_DrawSurfaceWidget_0, DrawSurface_eventFilter);
}

void Screen0_OnHide(void)
{
    Screen0_DrawSurfaceWidget_0->fn->removeEventFilter(Screen0_DrawSurfaceWidget_0, DrawSurface_eventFilter);
}

void Screen0_OnUpdate(void){}

void event_Screen0_ButtonWidget_Red_OnReleased(leButtonWidget* btn)
{
    clr = COLOR_RED;
}
void event_Screen0_ButtonWidget_Orange_OnReleased(leButtonWidget* btn)
{
    clr = COLOR_ORANGE;
}
void event_Screen0_ButtonWidget_Yellow_OnReleased(leButtonWidget* btn)
{
    clr = COLOR_YELLOW;
}
void event_Screen0_ButtonWidget_Green_OnReleased(leButtonWidget* btn)
{
    clr = COLOR_GREEN;
}
void event_Screen0_ButtonWidget_Blue_OnReleased(leButtonWidget* btn)
{
    clr = COLOR_BLUE;
}
void event_Screen0_ButtonWidget_Indigo_OnReleased(leButtonWidget* btn)
{
    clr = COLOR_INDIGO;
}
void event_Screen0_ButtonWidget_Violet_OnReleased(leButtonWidget* btn)
{
    clr = COLOR_VIOLET;
}

void event_Screen0_SliderWidget_0_OnValueChanged(leSliderWidget* scr)
{
    pointSize = scr->fn->getValue(scr) * DEFAULT_POINT_SIZE;
}