#ifndef SYS_INPUT_LISTENER_H
#define SYS_INPUT_LISTENER_H

#include "sys_input_gesture.h"
#include "sys_input_keyboard.h"
#include "sys_input_mouse.h"
#include "sys_input_touch.h"

typedef struct SYS_INP_InputListener_t {
  SYS_INP_HandleKeyDownEvent handleKeyDown;
  SYS_INP_HandleKeyUpEvent handleKeyUp;
  SYS_INP_HandleMouseMoveEvent handleMouseMove;
  SYS_INP_HandleMouseButtonDownEvent handleMouseButtonDown;
  SYS_INP_HandleMouseButtonUpEvent handleMouseButtonUp;
  SYS_INP_HandleTouchDownEvent handleTouchDown;
  SYS_INP_HandleTouchUpEvent handleTouchUp;
  SYS_INP_HandleTouchMoveEvent handleTouchMove;
  SYS_INP_HandleFlickGestureEvent handleFlickGesture;
  SYS_INP_HandlePinchGestureEvent handlePinchGesture;
  SYS_INP_HandleStretchGestureEvent handleStretchGesture;
  SYS_INP_HandleRotateGestureEvent handleRotateGesture;
  SYS_INP_HandleGenericGestureEvent handleGenericGesture;
} SYS_INP_InputListener;

void SYS_INP_ListenerInit(SYS_INP_InputListener* l);

#endif
