#ifndef SYS_INPUT_MOUSE_H
#define SYS_INPUT_MOUSE_H

#include <stdint.h>
#include <stddef.h>

typedef enum SYS_INP_MouseButton_t
{
    SYS_INP_BUTTON_NONE = 0,
    SYS_INP_BUTTON_LEFT,
    SYS_INP_BUTTON_MIDDLE,
    SYS_INP_BUTTON_RIGHT,
    SYS_INP_BUTTON_WHEEL_UP,
    SYS_INP_BUTTON_WHEEL_DOWN,
    SYS_INP_BUTTON_LAST = SYS_INP_BUTTON_WHEEL_DOWN
} SYS_INP_MouseButton;

typedef struct SYS_INP_MouseButtonEvent_t
{
    SYS_INP_MouseButton btn;
} SYS_INP_MouseButtonEvent;

typedef struct SYS_INP_MouseMoveEvent_t
{
    uint16_t x;
    uint16_t y;
} SYS_INP_MouseMoveEvent;

typedef void (*SYS_INP_HandleMouseMoveEvent)(const SYS_INP_MouseMoveEvent* const);
typedef void (*SYS_INP_HandleMouseButtonDownEvent)(const SYS_INP_MouseButtonEvent* const);
typedef void (*SYS_INP_HandleMouseButtonUpEvent)(const SYS_INP_MouseButtonEvent* const);

#endif
