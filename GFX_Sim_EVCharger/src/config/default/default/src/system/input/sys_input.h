#ifndef SYS_INPUT_H
#define SYS_INPUT_H

#include <stddef.h>
#include <stdint.h>
#include "sys_input_keyboard.h"
#include "sys_input_listener.h"
#include "sys_input_mouse.h"
#include "sys_input_touch.h"

typedef struct SYS_INPUT_Init {
  uint32_t placeholder;
} SYS_INPUT_Init;

int32_t SYS_INP_Init(void);
void SYS_INP_Tasks(void);
int32_t SYS_INP_AddListener(SYS_INP_InputListener* lst);
int32_t SYS_INP_RemoveListener(uint16_t idx);
int32_t SYS_INP_InjectKeyDown(SYS_INP_Key key);
int32_t SYS_INP_InjectKeyUp(SYS_INP_Key key);
int32_t SYS_INP_InjectMouseButtonDown(SYS_INP_MouseButton btn);
int32_t SYS_INP_InjectMouseButtonUp(SYS_INP_MouseButton btn);
int32_t SYS_INP_InjectMouseMove(uint16_t x, uint16_t y);
int32_t SYS_INP_InjectTouchDown(uint16_t idx, uint16_t x, uint16_t y);
int32_t SYS_INP_InjectTouchUp(uint16_t idx, uint16_t x, uint16_t y);
int32_t SYS_INP_InjectTouchMove(uint16_t idx, uint16_t x, uint16_t y);
int32_t SYS_INP_InjectFlickGesture(uint16_t x, uint16_t y, uint16_t dir,
                                   uint16_t dist);
int32_t SYS_INP_InjectPinchGesture(uint16_t x, uint16_t y, uint16_t angle,
                                   uint16_t sep);
int32_t SYS_INP_InjectStretchGesture(uint16_t x, uint16_t y, uint16_t angle,
                                     uint16_t sep);
int32_t SYS_INP_InjectRotateGesture(uint16_t x, uint16_t y, uint16_t angle,
                                    uint16_t sep, uint16_t dir);
int32_t SYS_INP_InjectGenericGesture(uint16_t gest, uint16_t x, uint16_t y,
                                     void* parm);

#endif
