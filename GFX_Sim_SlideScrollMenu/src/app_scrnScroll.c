// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2024 Microchip Technology Inc. and its subsidiaries.
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
// DOM-IGNORE-EN

#include <stdlib.h>

#include "gfx/legato/generated/le_gen_init.h"

/* Screen width */
#define SCREEN_WIDTH_PIX 480

/* Minimum # of pixels for a move to be considered as a slide */
#define MOVE_SLIDE_XMIN_PIX 2

/* Helper function to 'unselect' all items in the menu */
static void ScrnScroll_UnselectChildren(void)
{
    uint32_t numChildren = scrnScroll_pnlSlideMenu->fn->getChildCount(scrnScroll_pnlSlideMenu);
    uint32_t idx;
    
    /* iterate thru all the items in the menu panel */
    for (idx = 0; idx < numChildren; idx++)
    {
        leWidget * child = scrnScroll_pnlSlideMenu->fn->getChildAtIndex(scrnScroll_pnlSlideMenu, idx);
        if (child != NULL)
        {
            /* Clear the child's background to 'unselect' it */
            child->fn->setBackgroundType(child, LE_WIDGET_BACKGROUND_NONE);
        }
    }
}

/* Helper function to get the item in the menu that is touched or selected */
static leLabelWidget * ScrnScroll_getFocusChild(int32_t x, int32_t y)
{
    leLabelWidget * focusWidget = NULL;
    leWidget * widget;
    lePoint pnt;
    
    /* get x, y points in screen space */
    pnt.x = x;
    pnt.y = y;
    
    /* translate x, y from screen to local parent (pnlSlideMenu) space */
    leUtils_PointScreenToLocalSpace(scrnScroll_pnlSlideMenu, &pnt);
    
    /* Get the child widget that has been touched or selected */
    widget = leUtils_PickFromWidget(scrnScroll_pnlSlideMenu, pnt.x, pnt.y);
    if (widget != NULL)
    {
        /* Check if the selected child widget is valid */
        if (widget->type == LE_WIDGET_LABEL)
        {
            focusWidget = (leLabelWidget *) widget;
        }
    }
    
    /* return pointer to the touched widget */
    return focusWidget;
}

/* Widget event filter function for the event filter panel */
static leBool SlideMenu_filterEvent(leWidget* target, leWidgetEvent* evt, void* data)
{   
    static int32_t lastX, lastY;
    static leLabelWidget * selectedItemWidget = NULL;    
    
    leBool retval = LE_FALSE;

    int32_t x, y, deltaX;
    
    /* Switch statement to process TOUCH_DOWN, TOUCH_UP and TOUCH_MOVE events */
    switch(evt->id)
    {
        /* On touch down, save touch point and check if an item is touched */
        case LE_EVENT_TOUCH_DOWN:
        {
            /* get the touch point (screen space), save x, y positions */
            lastX = ((leWidgetEvent_TouchDown *) evt)->x;
            lastY = ((leWidgetEvent_TouchDown *) evt)->y;                    
            
            /* Check if the touch point selects a child (item) in the scrollmenu */
            selectedItemWidget = ScrnScroll_getFocusChild(lastX, lastY);
            
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
            /* Only the x movement is checked */
            x = ((leWidgetEvent_TouchMove *) evt)->x;
            
            /* Get the move delta */
            deltaX = x - lastX;
            
            /* If move delta is valid, slide the slide menu panel */
            if (abs(deltaX) > MOVE_SLIDE_XMIN_PIX)
            {
                int32_t pnlX, pnlY;
                uint32_t pnlWidth;
                
                /* Get current position of slide menu panel */
                pnlX = scrnScroll_pnlSlideMenu->fn->getX(scrnScroll_pnlSlideMenu);
                pnlY = scrnScroll_pnlSlideMenu->fn->getY(scrnScroll_pnlSlideMenu);
                
                /* Get the width, this is needed to make sure it doesn't over slide */
                pnlWidth = scrnScroll_pnlSlideMenu->fn->getWidth(scrnScroll_pnlSlideMenu);
                
                /* Calculate the new x position based on move delta */
                pnlX = pnlX + deltaX;
                
                /* Make sure new x position is within bounds */
                if (pnlX > 0)
                {
                    pnlX = 0;
                }
                else if (pnlX < (SCREEN_WIDTH_PIX - pnlWidth))
                {
                    pnlX = (SCREEN_WIDTH_PIX - pnlWidth);
                }
                
                /* move the menu panel to new position */
                scrnScroll_pnlSlideMenu->fn->setPosition(scrnScroll_pnlSlideMenu, pnlX, pnlY);
                
                /* Clear any selected item */
                selectedItemWidget = NULL;
            }
            
            /* Save the last position */
            lastX = x;
            lastY = y;
            
            /* Accept the event, so the event will not propagate further in the widget tree*/
            evt->accepted = LE_TRUE;
                    
            retval = LE_TRUE;
           
            break;
        }
        /* On touch up, check if item has been selected and highlight it on the screen */
        case LE_EVENT_TOUCH_UP:            
        {
            /* Check if there is a prior selected item */
            if (selectedItemWidget != NULL)
            {
                leLabelWidget * widget;

                /* Get the UP touch point */
                y = ((leWidgetEvent_TouchUp *) evt)->y;
                x = ((leWidgetEvent_TouchUp *) evt)->x;

                /* Get the focused item for touch UP event */
                widget = ScrnScroll_getFocusChild(x, y);
                
                /* If it's the same item as the prior selected (during touch down), 
                 * highlight it and show the item string */
                if (widget == selectedItemWidget)
                {
                    /* Get the selected item string and show it on the screen */
                    leString * str = widget->fn->getString(widget);
                    scrnScroll_lblItemSelected->fn->setString(scrnScroll_lblItemSelected, str);
                    
                    /* Clear any prior selected item */
                    ScrnScroll_UnselectChildren();
                    
                    /* Highlight new selected item */
                    widget->fn->setBackgroundType(widget, LE_WIDGET_BACKGROUND_FILL);
                }
            }

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
static leWidgetEventFilter SlideMenu_eventFilter =
{
    SlideMenu_filterEvent,
    NULL
};

/* Screen callback when shown */
void scrnScroll_OnShow(void)
{
    /* Install event filter to the event filter panel (pnlEventFilter) */
    scrnScroll_pnlEventFilter->fn->installEventFilter(scrnScroll_pnlEventFilter, SlideMenu_eventFilter);
}

/* Screen callback when hidden */
void scrnScroll_OnHide(void)
{
    /* Remove event filter when hiding screen */
    scrnScroll_pnlEventFilter->fn->removeEventFilter(scrnScroll_pnlEventFilter, SlideMenu_eventFilter);
}

/* Screen callback when updating. */
void scrnScroll_OnUpdate(void)
{
    /* Nothing to do here for this example */
}
