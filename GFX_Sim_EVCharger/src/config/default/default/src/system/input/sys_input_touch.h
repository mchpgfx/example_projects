#ifndef SYS_INPUT_TOUCH_H
#define SYS_INPUT_TOUCH_H

#include <stddef.h>
#include <stdint.h>

typedef struct SYS_INP_TouchStateEvent_t {
  uint8_t index;
  int16_t x;
  int16_t y;
} SYS_INP_TouchStateEvent;

typedef struct SYS_INP_TouchMoveEvent_t {
  uint8_t index;
  int16_t x;
  int16_t y;
} SYS_INP_TouchMoveEvent;

typedef void (*SYS_INP_HandleTouchDownEvent)(
    const SYS_INP_TouchStateEvent* const);
typedef void (*SYS_INP_HandleTouchUpEvent)(
    const SYS_INP_TouchStateEvent* const);
typedef void (*SYS_INP_HandleTouchMoveEvent)(
    const SYS_INP_TouchMoveEvent* const);

#endif
