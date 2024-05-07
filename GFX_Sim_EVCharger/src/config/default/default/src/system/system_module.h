#ifndef SYSTEM_MODULE_H
#define SYSTEM_MODULE_H

#include "system_common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned short int SYS_MODULE_INDEX;
typedef uintptr_t SYS_MODULE_OBJ;

#define SYS_MODULE_OBJ_INVALID ((SYS_MODULE_OBJ)-1)
#define SYS_MODULE_OBJ_STATIC ((SYS_MODULE_OBJ)0)

typedef enum {
  SYS_STATUS_ERROR_EXTENDED = -10,
  SYS_STATUS_ERROR = -1,
  SYS_STATUS_UNINITIALIZED = 0,
  SYS_STATUS_BUSY = 1,
  SYS_STATUS_READY = 2,
  SYS_STATUS_READY_EXTENDED = 10
} SYS_STATUS;

typedef union {
  uint8_t value;
  struct {
    uint8_t reserved : 4;
  } sys;
} SYS_MODULE_INIT;

typedef SYS_MODULE_OBJ (*SYS_MODULE_INITIALIZE_ROUTINE)(
    const SYS_MODULE_INDEX index, const SYS_MODULE_INIT* const init);
typedef void (*SYS_MODULE_REINITIALIZE_ROUTINE)(
    SYS_MODULE_OBJ object, const SYS_MODULE_INIT* const init);
typedef void (*SYS_MODULE_DEINITIALIZE_ROUTINE)(SYS_MODULE_OBJ object);
typedef SYS_STATUS (*SYS_MODULE_STATUS_ROUTINE)(SYS_MODULE_OBJ object);
typedef void (*SYS_MODULE_TASKS_ROUTINE)(SYS_MODULE_OBJ object);

#ifdef __cplusplus
}
#endif

#endif
