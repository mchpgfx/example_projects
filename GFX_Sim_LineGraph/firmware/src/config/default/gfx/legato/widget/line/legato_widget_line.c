// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END


#include "gfx/legato/widget/line/legato_widget_line.h"

#if LE_LINE_WIDGET_ENABLED

#include "gfx/legato/common/legato_error.h"
#include "gfx/legato/common/legato_utils.h"
#include "gfx/legato/memory/legato_memory.h"
#include "gfx/legato/string/legato_string.h"
#include "gfx/legato/widget/legato_widget.h"

#if LE_DEBUG == 1
#include "gfx/legato/core/legato_debug.h"
#endif

#define DEFAULT_WIDTH           100
#define DEFAULT_HEIGHT          100

static
#if LE_DYNAMIC_VTABLES == 0
const
#endif
leLineWidgetVTable lineWidgetVTable;

void leLineWidget_Constructor(leLineWidget* _this)
{
    leWidget_Constructor((leWidget*)_this);
    
    _this->widget.fn = (void*)&lineWidgetVTable;
    _this->fn = &lineWidgetVTable;
    
    _this->widget.type = LE_WIDGET_LINE;

    _this->widget.rect.width = DEFAULT_WIDTH;
    _this->widget.rect.height = DEFAULT_HEIGHT;

    _this->widget.style.borderType = LE_WIDGET_BORDER_NONE;
    _this->widget.style.backgroundType = LE_WIDGET_BACKGROUND_NONE;

    _this->x1 = 0;
    _this->y1 = 0;
    _this->x2 = DEFAULT_WIDTH - 1;
    _this->y2 = DEFAULT_HEIGHT - 1;
}

void _leWidget_Destructor(leWidget* wgt);

static void destructor(leLineWidget* _this)
{
    _leWidget_Destructor((leWidget*)_this);
}

leLineWidget* leLineWidget_New(void)
{
    leLineWidget* line = NULL;

    line = LE_MALLOC(sizeof(leLineWidget));

    if(line == NULL)
        return NULL;
    
    leLineWidget_Constructor(line);

    return line;
}

static leResult getStartPoint(const leLineWidget* _this,
                              lePoint* pnt)
{
    LE_ASSERT_THIS();

    if(pnt == NULL)
        return LE_FAILURE;

    pnt->x = _this->x1;
    pnt->y = _this->y1;
        
    return LE_SUCCESS;
}

static leResult setStartPoint(leLineWidget* _this,
                              int32_t x,
                              int32_t y)
{
    LE_ASSERT_THIS();
        
    if(_this->x1 == x && _this->y1 == y)
        return LE_SUCCESS;
        
    _this->x1 = x;
    _this->y1 = y;
    
    _this->fn->invalidate(_this);

#if LE_DEBUG == 1
    _leDebugNotify_WidgetPropertyChanged((leWidget*)_this);
#endif

    return LE_SUCCESS;
}

static leResult getEndPoint(const leLineWidget* _this,
                            lePoint* pnt)
{
    if(pnt == NULL)
        return LE_FAILURE;

    pnt->x = _this->x2;
    pnt->y = _this->y2;

    return LE_SUCCESS;
}

static leResult setEndPoint(leLineWidget* _this,
                            int32_t x,
                            int32_t y)
{
    LE_ASSERT_THIS();
        
    if(_this->x2 == x && _this->y2 == y)
        return LE_SUCCESS;
        
    _this->x2 = x;
    _this->y2 = y;
    
    _this->fn->invalidate(_this);

#if LE_DEBUG == 1
    _leDebugNotify_WidgetPropertyChanged((leWidget*)_this);
#endif

    return LE_SUCCESS;
}

void _leLineWidget_Paint(leLineWidget* _this);

#if LE_DYNAMIC_VTABLES == 1
void _leWidget_FillVTable(leWidgetVTable* tbl);

void _leLineWidget_GenerateVTable(void)
{
    _leWidget_FillVTable((void*)&lineWidgetVTable);
    
    /* overrides from base class */
    lineWidgetVTable._destructor = destructor;
    lineWidgetVTable._paint = _leLineWidget_Paint;
    
    /* member functions */
    lineWidgetVTable.getStartPoint = getStartPoint;
    lineWidgetVTable.setStartPoint = setStartPoint;
    lineWidgetVTable.getEndPoint = getEndPoint;
    lineWidgetVTable.setEndPoint = setEndPoint;
}

void _leLineWidget_FillVTable(leLineWidgetVTable* tbl)
{
    *tbl = lineWidgetVTable;
}
#else
static const leLineWidgetVTable lineWidgetVTable =
{
    // base class
    .getType = (void*)_leWidget_GetType,
    .getX = (void*)_leWidget_GetX,
    .setX = (void*)_leWidget_SetX,
    .getY = (void*)_leWidget_GetY,
    .setY = (void*)_leWidget_SetY,
    .setPosition = (void*)_leWidget_SetPosition,
    .translate = (void*)_leWidget_Translate,
    .getWidth = (void*)_leWidget_GetWidth,
    .setWidth = (void*)_leWidget_SetWidth,
    .getHeight = (void*)_leWidget_GetHeight,
    .setHeight = (void*)_leWidget_SetHeight,
    .setSize = (void*)_leWidget_SetSize,
    .resize = (void*)_leWidget_Resize,
    .getAlphaEnabled = (void*)_leWidget_GetAlphaEnabled,
    .getCumulativeAlphaEnabled = (void*)_leWidget_GetCumulativeAlphaEnabled,
    .setAlphaEnabled = (void*)_leWidget_SetAlphaEnabled,
    .getAlphaAmount = (void*)_leWidget_GetAlphaAmount,
    .getCumulativeAlphaAmount = (void*)_leWidget_GetCumulativeAlphaAmount,
    .setAlphaAmount = (void*)_leWidget_SetAlphaAmount,
    .isOpaque = (void*)_leWidget_IsOpaque,
    .getEnabled = (void*)_leWidget_GetEnabled,
    .setEnabled = (void*)_leWidget_SetEnabled,
    .getVisible = (void*)_leWidget_GetVisible,
    .setVisible = (void*)_leWidget_SetVisible,
    .localRect = (void*)_leWidget_LocalRect,
    .rectToParent = (void*)_leWidget_RectToParentSpace,
    .rectToScreen = (void*)_leWidget_RectToScreenSpace,
    .addChild = (void*)_leWidget_AddChild,
    .removeChild = (void*)_leWidget_RemoveChild,
    .removeAllChildren = (void*)_leWidget_RemoveAllChildren,
    .getRootWidget = (void*)_leWidget_GetRootWidget,
    .setParent = (void*)_leWidget_SetParent,
    .getChildCount = (void*)_leWidget_GetChildCount,
    .getChildAtIndex = (void*)_leWidget_GetChildAtIndex,
    .getIndexOfChild = (void*)_leWidget_GetIndexOfChild,
    .containsDescendant = (void*)_leWidget_ContainsDescendant,
    .getScheme = (void*)_leWidget_GetScheme,
    .setScheme = (void*)_leWidget_SetScheme,
    .getBorderType = (void*)_leWidget_GetBorderType,
    .setBorderType = (void*)_leWidget_SetBorderType,
    .getBackgroundType = (void*)_leWidget_GetBackgroundType,
    .setBackgroundType = (void*)_leWidget_SetBackgroundType,
    .getHAlignment = (void*)_leWidget_GetHAlignment,
    .setHAlignment = (void*)_leWidget_SetHAlignment,
    .getVAlignment = (void*)_leWidget_GetVAlignment,
    .setVAlignment = (void*)_leWidget_SetVAlignment,
    .getMargins = (void*)_leWidget_GetMargins,
    .setMargins = (void*)_leWidget_SetMargins,
    .getCornerRadius = (void*)_leWidget_GetCornerRadius,
    .setCornerRadius = (void*)_leWidget_SetCornerRadius,
    .hasFocus = (void*)_leWidget_HasFocus,
    .setFocus = (void*)_leWidget_SetFocus,
    .invalidate = (void*)_leWidget_Invalidate,
    .invalidateContents = (void*)_leWidget_InvalidateContents,
    .installEventFilter = (void*)_leWidget_InstallEventFilter,
    .removeEventFilter = (void*)_leWidget_RemoveEventFilter,

    .update = (void*)_leWidget_Update,

    .touchDownEvent = (void*)_leWidget_TouchDownEvent,
    .touchUpEvent = (void*)_leWidget_TouchUpEvent,
    .touchMoveEvent = (void*)_leWidget_TouchMoveEvent,
    .moveEvent = (void*)_leWidget_MoveEvent,
    .resizeEvent = (void*)_leWidget_ResizeEvent,
    .focusLostEvent = (void*)_leWidget_FocusLostEvent,
    .focusGainedEvent = (void*)_leWidget_FocusGainedEvent,
    .languageChangeEvent = (void*)_leWidget_LanguageChangeEvent,

    ._handleEvent = (void*)_leWidget_HandleEvent,
    ._validateChildren = (void*)_leWidget_ValidateChildren,
    ._increaseDirtyState = (void*)_leWidget_IncreaseDirtyState,
    ._setDirtyState = (void*)_leWidget_SetDirtyState,
    ._clearDirtyState = (void*)_leWidget_ClearDirtyState,
    ._invalidateBorderAreas = (void*)_leWidget_InvalidateBorderAreas,
    ._damageArea = (void*)_leWidget_DamageArea,

    /* overrides from base class */
    ._destructor = destructor,
    ._paint = _leLineWidget_Paint,

    /* member functions */
    .getStartPoint = getStartPoint,
    .setStartPoint = setStartPoint,
    .getEndPoint = getEndPoint,
    .setEndPoint = setEndPoint,
};
#endif

#endif // LE_LINE_WIDGET_ENABLED