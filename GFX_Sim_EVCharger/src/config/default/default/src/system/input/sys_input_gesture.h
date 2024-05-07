#ifndef SYS_INPUT_GESTURE_H
#define SYS_INPUT_GESTURE_H

#include <stddef.h>
#include <stdint.h>

typedef enum SYS_INP_Guesture_t {
  SYS_INP_SWIPE = 0,
  SYS_INP_PINCH,
  SYS_INP_GESTURE_LAST = SYS_INP_PINCH
} SYS_INP_Guesture;

typedef struct SYS_INP_GestureEvent_t {
  uint8_t type;
} SYS_INP_GestureEvent;

typedef struct SYS_INP_FlickGestureEvent_t {
  uint16_t x;
  uint16_t y;
  uint16_t dir;
  uint16_t dist;
} SYS_INP_FlickGestureEvent;

typedef struct SYS_INP_PinchGestureEvent_t {
  uint16_t x;
  uint16_t y;
  uint16_t angle;
  uint16_t sep;
} SYS_INP_PinchGestureEvent;

typedef struct SYS_INP_StretchGestureEvent_t {
  uint16_t x;
  uint16_t y;
  uint16_t angle;
  uint16_t sep;
} SYS_INP_StretchGestureEvent;

typedef struct SYS_INP_RotateGestureEvent_t {
  uint16_t x;
  uint16_t y;
  uint16_t angle;
  uint16_t sep;
  uint16_t dir;
} SYS_INP_RotateGestureEvent;

typedef struct SYS_INP_GenericGestureEvent_t {
  uint16_t gest;
  uint16_t x;
  uint16_t y;
  void* parm;
} SYS_INP_GenericGestureEvent;

typedef void (*SYS_INP_HandleFlickGestureEvent)(
    const SYS_INP_FlickGestureEvent* const);
typedef void (*SYS_INP_HandlePinchGestureEvent)(
    const SYS_INP_PinchGestureEvent* const);
typedef void (*SYS_INP_HandleStretchGestureEvent)(
    const SYS_INP_StretchGestureEvent* const);
typedef void (*SYS_INP_HandleRotateGestureEvent)(
    const SYS_INP_RotateGestureEvent* const);
typedef void (*SYS_INP_HandleGenericGestureEvent)(
    const SYS_INP_GenericGestureEvent* const);

#endif
