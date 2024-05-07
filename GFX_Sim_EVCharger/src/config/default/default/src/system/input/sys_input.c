#include <string.h>

#include "system/input/sys_input.h"

#define SYS_INP_MAX_LISTENERS 32
#define SYS_INP_MAX_GENERAL_EVENTS 256

enum {
  KEY_DOWN_EVENT = 0,
  KEY_UP_EVENT,
  MOUSE_MOVE_EVENT,
  MOUSE_DOWN_EVENT,
  MOUSE_UP_EVENT,
  TOUCH_MOVE_EVENT,
  TOUCH_DOWN_EVENT,
  TOUCH_UP_EVENT,
  GESTURE_FLICK_EVENT,
  GESTURE_PINCH_EVENT,
  GESTURE_STRETCH_EVENT,
  GESTURE_ROTATE_EVENT,
  GESTURE_GENERIC_EVENT,
};

typedef struct InputEvent_t {
  uint8_t type;
  union {
    SYS_INP_KeyEvent key;
    SYS_INP_MouseButtonEvent mouseBtn;
    SYS_INP_MouseMoveEvent mouseMove;
    SYS_INP_TouchStateEvent touchState;
    SYS_INP_TouchMoveEvent touchMove;
    SYS_INP_FlickGestureEvent flickGesture;
    SYS_INP_PinchGestureEvent pinchGesture;
    SYS_INP_StretchGestureEvent stretchGesture;
    SYS_INP_RotateGestureEvent rotateGesture;
    SYS_INP_GenericGestureEvent genericGesture;
  } event;
} InputEvent;

InputEvent generalEvents[SYS_INP_MAX_GENERAL_EVENTS];
uint32_t eventCount;

SYS_INP_InputListener listeners[SYS_INP_MAX_LISTENERS];
uint8_t listenerFlags[SYS_INP_MAX_LISTENERS];

int32_t SYS_INP_Init(void) {
  eventCount = 0;

  memset(generalEvents, 0, sizeof(generalEvents));

  memset(listeners, 0, sizeof(listeners));

  return 0;
}

void SYS_INP_Tasks(void) {
  uint32_t i, j;

  if (eventCount == 0) return;

  for (j = 0; j < SYS_INP_MAX_LISTENERS; j++) {
    if (listenerFlags[j] == 0) continue;

    for (i = 0; i < eventCount; i++) {
      switch (generalEvents[i].type) {
        case KEY_DOWN_EVENT: {
          if (listeners[j].handleKeyDown != NULL)
            listeners[j].handleKeyDown((const SYS_INP_KeyEvent* const) &
                                       generalEvents[i].event);
          break;
        }
        case KEY_UP_EVENT: {
          if (listeners[j].handleKeyUp != NULL)
            listeners[j].handleKeyUp((const SYS_INP_KeyEvent* const) &
                                     generalEvents[i].event);
          break;
        }
        case MOUSE_MOVE_EVENT: {
          if (listeners[j].handleMouseMove != NULL)
            listeners[j].handleMouseMove((const SYS_INP_MouseMoveEvent* const) &
                                         generalEvents[i].event);
          break;
        }
        case MOUSE_DOWN_EVENT: {
          if (listeners[j].handleMouseButtonDown != NULL)
            listeners[j].handleMouseButtonDown(
                (const SYS_INP_MouseButtonEvent* const) &
                generalEvents[i].event);
          break;
        }
        case MOUSE_UP_EVENT: {
          if (listeners[j].handleMouseButtonUp != NULL)
            listeners[j].handleMouseButtonUp(
                (const SYS_INP_MouseButtonEvent* const) &
                generalEvents[i].event);
          break;
        }
        case TOUCH_MOVE_EVENT: {
          if (listeners[j].handleTouchMove != NULL)
            listeners[j].handleTouchMove((const SYS_INP_TouchMoveEvent* const) &
                                         generalEvents[i].event);
          break;
        }
        case TOUCH_DOWN_EVENT: {
          if (listeners[j].handleTouchDown != NULL)
            listeners[j].handleTouchDown(
                (const SYS_INP_TouchStateEvent* const) &
                generalEvents[i].event);
          break;
        }
        case TOUCH_UP_EVENT: {
          if (listeners[j].handleTouchUp != NULL)
            listeners[j].handleTouchUp((const SYS_INP_TouchStateEvent* const) &
                                       generalEvents[i].event);
          break;
        }
        case GESTURE_FLICK_EVENT: {
          if (listeners[j].handleFlickGesture != NULL)
            listeners[j].handleFlickGesture(
                (const SYS_INP_FlickGestureEvent* const) &
                generalEvents[i].event);
          break;
        }
        case GESTURE_PINCH_EVENT: {
          if (listeners[j].handlePinchGesture != NULL)
            listeners[j].handlePinchGesture(
                (const SYS_INP_PinchGestureEvent* const) &
                generalEvents[i].event);
          break;
        }
        case GESTURE_STRETCH_EVENT: {
          if (listeners[j].handleStretchGesture != NULL)
            listeners[j].handleStretchGesture(
                (const SYS_INP_StretchGestureEvent* const) &
                generalEvents[i].event);
          break;
        }
        case GESTURE_ROTATE_EVENT: {
          if (listeners[j].handleRotateGesture != NULL)
            listeners[j].handleRotateGesture(
                (const SYS_INP_RotateGestureEvent* const) &
                generalEvents[i].event);
          break;
        }
        case GESTURE_GENERIC_EVENT: {
          if (listeners[j].handleGenericGesture != NULL)
            listeners[j].handleGenericGesture(
                (const SYS_INP_GenericGestureEvent* const) &
                generalEvents[i].event);
          break;
        }
        default: {
          break;
        }
      }
    }
  }

  eventCount = 0;
}

int32_t SYS_INP_AddListener(SYS_INP_InputListener* lst) {
  int32_t i;

  for (i = 0; i < SYS_INP_MAX_LISTENERS; i++) {
    if (listenerFlags[i] == 0) {
      listeners[i] = *lst;
      listenerFlags[i] = 1;

      return i;
    }
  }

  return -1;
}

int32_t SYS_INP_RemoveListener(uint16_t idx) {
  if (idx >= SYS_INP_MAX_LISTENERS || listenerFlags[idx] == 0) {
    return -1;
  }

  listenerFlags[idx] = 0;

  return 0;
}

int32_t SYS_INP_InjectKeyDown(SYS_INP_Key key) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = KEY_DOWN_EVENT;
  generalEvents[eventCount].event.key.key = key;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectKeyUp(SYS_INP_Key key) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = KEY_UP_EVENT;
  generalEvents[eventCount].event.key.key = key;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectMouseButtonDown(SYS_INP_MouseButton btn) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = MOUSE_DOWN_EVENT;
  generalEvents[eventCount].event.mouseBtn.btn = btn;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectMouseButtonUp(SYS_INP_MouseButton btn) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = MOUSE_UP_EVENT;
  generalEvents[eventCount].event.mouseBtn.btn = btn;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectMouseMove(uint16_t x, uint16_t y) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = MOUSE_MOVE_EVENT;
  generalEvents[eventCount].event.mouseMove.x = x;
  generalEvents[eventCount].event.mouseMove.y = y;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectTouchDown(uint16_t idx, uint16_t x, uint16_t y) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = TOUCH_DOWN_EVENT;
  generalEvents[eventCount].event.touchState.index = idx;
  generalEvents[eventCount].event.touchState.x = x;
  generalEvents[eventCount].event.touchState.y = y;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectTouchUp(uint16_t idx, uint16_t x, uint16_t y) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = TOUCH_UP_EVENT;
  generalEvents[eventCount].event.touchState.index = idx;
  generalEvents[eventCount].event.touchState.x = x;
  generalEvents[eventCount].event.touchState.y = y;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectTouchMove(uint16_t idx, uint16_t x, uint16_t y) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = TOUCH_MOVE_EVENT;
  generalEvents[eventCount].event.touchMove.index = idx;
  generalEvents[eventCount].event.touchMove.x = x;
  generalEvents[eventCount].event.touchMove.y = y;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectFlickGesture(uint16_t x, uint16_t y, uint16_t dir,
                                   uint16_t dist) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = GESTURE_FLICK_EVENT;
  generalEvents[eventCount].event.flickGesture.x = x;
  generalEvents[eventCount].event.flickGesture.y = y;
  generalEvents[eventCount].event.flickGesture.dir = dir;
  generalEvents[eventCount].event.flickGesture.dist = dist;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectPinchGesture(uint16_t x, uint16_t y, uint16_t angle,
                                   uint16_t sep) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = GESTURE_PINCH_EVENT;
  generalEvents[eventCount].event.pinchGesture.x = x;
  generalEvents[eventCount].event.pinchGesture.y = y;
  generalEvents[eventCount].event.pinchGesture.angle = angle;
  generalEvents[eventCount].event.pinchGesture.sep = sep;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectStretchGesture(uint16_t x, uint16_t y, uint16_t angle,
                                     uint16_t sep) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = GESTURE_STRETCH_EVENT;
  generalEvents[eventCount].event.stretchGesture.x = x;
  generalEvents[eventCount].event.stretchGesture.y = y;
  generalEvents[eventCount].event.stretchGesture.angle = angle;
  generalEvents[eventCount].event.stretchGesture.sep = sep;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectRotateGesture(uint16_t x, uint16_t y, uint16_t angle,
                                    uint16_t sep, uint16_t dir) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = GESTURE_STRETCH_EVENT;
  generalEvents[eventCount].event.rotateGesture.x = x;
  generalEvents[eventCount].event.rotateGesture.y = y;
  generalEvents[eventCount].event.rotateGesture.angle = angle;
  generalEvents[eventCount].event.rotateGesture.sep = sep;
  generalEvents[eventCount].event.rotateGesture.dir = dir;

  eventCount++;

  return 0;
}

int32_t SYS_INP_InjectGenericGesture(uint16_t gest, uint16_t x, uint16_t y,
                                     void* parm) {
  if (eventCount >= SYS_INP_MAX_GENERAL_EVENTS) {
    return -1;
  }

  generalEvents[eventCount].type = GESTURE_GENERIC_EVENT;
  generalEvents[eventCount].event.genericGesture.gest = gest;
  generalEvents[eventCount].event.genericGesture.x = x;
  generalEvents[eventCount].event.genericGesture.y = y;
  generalEvents[eventCount].event.genericGesture.parm = parm;

  eventCount++;

  return 0;
}
