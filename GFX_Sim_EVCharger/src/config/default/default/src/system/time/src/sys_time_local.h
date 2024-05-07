#ifndef SYS_TIME_LOCAL_H
#define SYS_TIME_LOCAL_H

#include <stdint.h>
#include "osal/osal.h"
#include "system/time/sys_time.h"

#define SYS_TIME_HANDLE_TOKEN_MAX (0xFFFFU)
#define SYS_TIME_INDEX_MASK (0x0000FFFFUL)

typedef struct SYS_TIME_TIMER_OBJ_T {
  bool inUse;
  bool active;
  SYS_TIME_CALLBACK_TYPE type;
  uint32_t requestedTime;
  volatile uint32_t relativeTimePending;
  SYS_TIME_CALLBACK callback;
  uintptr_t context;
  volatile bool tmrElapsedFlag;
  volatile bool tmrElapsed;
  struct SYS_TIME_TIMER_OBJ_T* tmrNext;
  SYS_TIME_HANDLE tmrHandle;
} SYS_TIME_TIMER_OBJ;

typedef struct {
  SYS_STATUS status;
  const SYS_TIME_PLIB_INTERFACE* timePlib;
  INT_SOURCE hwTimerIntNum;
  uint32_t hwTimerFrequency;
  volatile uint32_t hwTimerPreviousValue;
  volatile uint32_t hwTimerCurrentValue;
  uint32_t hwTimerPeriodValue;
  volatile uint32_t hwTimerCompareValue;
  uint32_t hwTimerCompareMargin;
  volatile uint64_t swCounter64;
  uint8_t interruptNestingCount;
  bool hwTimerIntStatus;
  SYS_TIME_TIMER_OBJ* tmrActive;

  OSAL_MUTEX_DECLARE(timerMutex);

} SYS_TIME_COUNTER_OBJ;

#endif
