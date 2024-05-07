#ifndef SYS_TIME_DEFINITIONS_H
#define SYS_TIME_DEFINITIONS_H

#include "configuration.h"
#include "system/int/sys_int.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*SYS_TIME_PLIB_CALLBACK)(uint32_t data, uintptr_t context);
typedef void (*SYS_TIME_PLIB_CALLBACK_REGISTER)(SYS_TIME_PLIB_CALLBACK callback,
                                                uintptr_t context);
typedef uint32_t (*SYS_TIME_PLIB_FREQUENCY_GET)(void);
typedef void (*SYS_TIME_PLIB_START)(void);
typedef void (*SYS_TIME_PLIB_STOP)(void);

typedef void (*SYS_TIME_PLIB_PERIOD_SET)(uint32_t period);
typedef void (*SYS_TIME_PLIB_COMPARE_SET)(uint32_t compare);
typedef uint32_t (*SYS_TIME_PLIB_COUNTER_GET)(void);

typedef struct {
  SYS_TIME_PLIB_CALLBACK_REGISTER timerCallbackSet;
  SYS_TIME_PLIB_START timerStart;
  SYS_TIME_PLIB_STOP timerStop;
  SYS_TIME_PLIB_FREQUENCY_GET timerFrequencyGet;
  SYS_TIME_PLIB_PERIOD_SET timerPeriodSet;
  SYS_TIME_PLIB_COMPARE_SET timerCompareSet;
  SYS_TIME_PLIB_COUNTER_GET timerCounterGet;
} SYS_TIME_PLIB_INTERFACE;

struct SYS_TIME_INIT_ {
  const SYS_TIME_PLIB_INTERFACE* timePlib;

  INT_SOURCE hwTimerIntNum;
};

#ifdef __cplusplus
}
#endif

#endif
