#include <string.h>

#include "configuration.h"
#include "sys_time_local.h"
#include "system/time/sys_time.h"

static SYS_TIME_COUNTER_OBJ gSystemCounterObj;
static SYS_TIME_TIMER_OBJ timers[SYS_TIME_MAX_TIMERS];
static uint16_t gSysTimeTokenCount = 1;

static inline uint16_t SYS_TIME_UPDATE_TOKEN(uint16_t token) {
  token++;
  if (token >= SYS_TIME_HANDLE_TOKEN_MAX) {
    token = 1;
  }

  return token;
}

static inline uint32_t SYS_TIME_MAKE_HANDLE(uint16_t token, uint16_t index) {
  return ((uint32_t)(token) << 16 | (uint32_t)(index));
}

static bool SYS_TIME_ResourceLock(void) {
  if (gSystemCounterObj.interruptNestingCount == 0U) {
    if (OSAL_MUTEX_Lock(&gSystemCounterObj.timerMutex, OSAL_WAIT_FOREVER) ==
        OSAL_RESULT_SUCCESS) {
      gSystemCounterObj.hwTimerIntStatus =
          SYS_INT_SourceDisable(gSystemCounterObj.hwTimerIntNum);
      return true;
    } else {
      return false;
    }
  }

  return true;
}

static void SYS_TIME_ResourceUnlock(void) {
  SYS_INT_SourceRestore(gSystemCounterObj.hwTimerIntNum,
                        gSystemCounterObj.hwTimerIntStatus);

  if (gSystemCounterObj.interruptNestingCount == 0U) {
    (void)OSAL_MUTEX_Unlock(&gSystemCounterObj.timerMutex);
  }
}

static SYS_TIME_TIMER_OBJ* SYS_TIME_GetTimerObject(SYS_TIME_HANDLE handle) {
  SYS_TIME_TIMER_OBJ* timerObj = (SYS_TIME_TIMER_OBJ*)NULL;

  if ((handle != SYS_TIME_HANDLE_INVALID) && (handle != 0U)) {
    if ((handle & SYS_TIME_INDEX_MASK) < (uint32_t)SYS_TIME_MAX_TIMERS) {
      timerObj = &timers[handle & SYS_TIME_INDEX_MASK];

      if ((timerObj->tmrHandle == handle) && (timerObj->inUse == true)) {
        return timerObj;
      }
    }
  }
  return NULL;
}

static void SYS_TIME_HwTimerCompareUpdate(void) {
  uint64_t nextHwCounterValue = 0;
  uint64_t currHwCounterValue;
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_TIMER_OBJ* tmrActive = counterObj->tmrActive;

  counterObj->hwTimerPreviousValue = counterObj->hwTimerCurrentValue;

  if (tmrActive != NULL) {
    if (tmrActive->relativeTimePending > SYS_TIME_HW_COUNTER_HALF_PERIOD) {
      nextHwCounterValue = (uint64_t)counterObj->hwTimerCurrentValue +
                           SYS_TIME_HW_COUNTER_HALF_PERIOD;
    } else {
      uint32_t relativeTimePending = tmrActive->relativeTimePending;
      nextHwCounterValue =
          (uint64_t)counterObj->hwTimerCurrentValue + relativeTimePending;
    }
  } else {
    nextHwCounterValue = (uint64_t)counterObj->hwTimerCurrentValue +
                         SYS_TIME_HW_COUNTER_HALF_PERIOD;
  }

  currHwCounterValue = counterObj->timePlib->timerCounterGet();

  if (currHwCounterValue < counterObj->hwTimerPreviousValue) {
    currHwCounterValue = SYS_TIME_HW_COUNTER_PERIOD + currHwCounterValue;
  }

  if (nextHwCounterValue <
      (currHwCounterValue + counterObj->hwTimerCompareMargin)) {
    counterObj->hwTimerCompareValue =
        (uint32_t)currHwCounterValue + counterObj->hwTimerCompareMargin;
  } else {
    counterObj->hwTimerCompareValue = (uint32_t)nextHwCounterValue;
  }

  if ((counterObj->hwTimerCompareValue & SYS_TIME_HW_COUNTER_PERIOD) == 0U) {
    counterObj->hwTimerCompareValue = 1;
  }

  counterObj->timePlib->timerCompareSet(counterObj->hwTimerCompareValue);
}

static bool SYS_TIME_RemoveFromList(SYS_TIME_TIMER_OBJ* delTimer) {
  SYS_TIME_COUNTER_OBJ* counter = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_TIMER_OBJ* tmr = counter->tmrActive;
  SYS_TIME_TIMER_OBJ* prevTmr = NULL;
  bool isHeadTimerUpdated = false;

  tmr = counter->tmrActive;

  while ((tmr != NULL) && (tmr != delTimer)) {
    prevTmr = tmr;
    tmr = tmr->tmrNext;
  }

  if (tmr == NULL) {
    return isHeadTimerUpdated;
  }

  if (delTimer->tmrNext != NULL) {
    uint32_t relativeTimePending = delTimer->relativeTimePending;
    delTimer->tmrNext->relativeTimePending += relativeTimePending;
  }

  if (prevTmr == NULL) {
    counter->tmrActive = counter->tmrActive->tmrNext;
    isHeadTimerUpdated = true;
  } else {
    prevTmr->tmrNext = delTimer->tmrNext;
  }

  delTimer->tmrNext = NULL;

  return isHeadTimerUpdated;
}

static bool SYS_TIME_AddToList(SYS_TIME_TIMER_OBJ* newTimer) {
  uint64_t total_time = 0;
  SYS_TIME_COUNTER_OBJ* counter = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_TIMER_OBJ* tmr = counter->tmrActive;
  SYS_TIME_TIMER_OBJ* prevTmr = NULL;
  uint32_t newTimerTime;
  bool isHeadTimerUpdated = false;

  if (newTimer == NULL) {
    return isHeadTimerUpdated;
  }

  newTimerTime = newTimer->relativeTimePending;

  if (tmr == NULL) {
    newTimer->relativeTimePending = newTimerTime;
    counter->tmrActive = newTimer;
    isHeadTimerUpdated = true;
  } else {
    while (tmr != NULL) {
      if ((total_time + tmr->relativeTimePending) > newTimerTime) {
        break;
      }
      total_time += tmr->relativeTimePending;
      prevTmr = tmr;
      tmr = tmr->tmrNext;
    }

    if (prevTmr == NULL) {
      counter->tmrActive = newTimer;

      newTimer->tmrNext = tmr;
      isHeadTimerUpdated = true;
    } else {
      newTimer->tmrNext = prevTmr->tmrNext;
      prevTmr->tmrNext = newTimer;
    }

    newTimer->relativeTimePending = newTimerTime - (uint32_t)total_time;
    if (newTimer->tmrNext != NULL) {
      newTimerTime = newTimer->relativeTimePending;
      newTimer->tmrNext->relativeTimePending -= newTimerTime;
    }
  }
  return isHeadTimerUpdated;
}

static uint32_t SYS_TIME_GetElapsedCount(uint32_t hwTimerCurrentValue) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  uint32_t elapsedCount = 0;
  uint32_t hwTimerPreviousValue = counterObj->hwTimerPreviousValue;

  if (hwTimerCurrentValue > hwTimerPreviousValue) {
    elapsedCount = hwTimerCurrentValue - hwTimerPreviousValue;
  } else {
    elapsedCount = (SYS_TIME_HW_COUNTER_PERIOD - hwTimerPreviousValue) +
                   hwTimerCurrentValue + 1U;
  }

  return elapsedCount;
}

static uint32_t SYS_TIME_GetTotalElapsedCount(SYS_TIME_TIMER_OBJ* tmr) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_TIMER_OBJ* tmrActive = counterObj->tmrActive;
  uint32_t pendingCount = 0;
  uint32_t elapsedCount = 0;
  uint32_t hwTimerCurrentValue;

  if (tmr->active == false) {
    elapsedCount = 0;
  } else {
    while ((tmrActive != NULL) && (tmrActive != tmr)) {
      pendingCount += tmrActive->relativeTimePending;
      tmrActive = tmrActive->tmrNext;
    }

    pendingCount += tmrActive->relativeTimePending;
    hwTimerCurrentValue = counterObj->timePlib->timerCounterGet();
    elapsedCount = SYS_TIME_GetElapsedCount(hwTimerCurrentValue);

    if (pendingCount >= elapsedCount) {
      pendingCount -= elapsedCount;
    } else {
      pendingCount = 0;
    }

    if (tmrActive->requestedTime >= pendingCount) {
      elapsedCount = tmrActive->requestedTime - pendingCount;
    } else {
      elapsedCount = 0;
    }
  }

  return elapsedCount;
}

static void SYS_TIME_UpdateTimerList(uint32_t elapsedCount) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_TIMER_OBJ* tmr = NULL;

  tmr = counterObj->tmrActive;

  while ((tmr != NULL) && (elapsedCount > 0U)) {
    if (tmr->relativeTimePending >= elapsedCount) {
      tmr->relativeTimePending -= elapsedCount;
      elapsedCount = 0;
    } else {
      elapsedCount -= tmr->relativeTimePending;
      tmr->relativeTimePending = 0;
    }
    tmr = tmr->tmrNext;
  }

  counterObj->hwTimerPreviousValue = counterObj->hwTimerCurrentValue;
}

static void SYS_TIME_TimerAdd(SYS_TIME_TIMER_OBJ* newTimer) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  uint32_t elapsedCount = 0;
  bool isHeadTimerUpdated = false;
  bool interruptState;

  counterObj->hwTimerCurrentValue = counterObj->timePlib->timerCounterGet();

  elapsedCount = SYS_TIME_GetElapsedCount(counterObj->hwTimerCurrentValue);

  SYS_TIME_UpdateTimerList(elapsedCount);

  interruptState = SYS_INT_Disable();
  counterObj->swCounter64 = counterObj->swCounter64 + elapsedCount;
  SYS_INT_Restore(interruptState);

  isHeadTimerUpdated = SYS_TIME_AddToList(newTimer);

  if (isHeadTimerUpdated == true) {
    interruptState = SYS_INT_Disable();
    SYS_TIME_HwTimerCompareUpdate();
    SYS_INT_Restore(interruptState);
  }
}

static void SYS_TIME_ClientNotify(void) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_TIMER_OBJ* tmrActive = counterObj->tmrActive;

  while (tmrActive != NULL) {
    if (tmrActive->relativeTimePending == 0U) {
      tmrActive->tmrElapsedFlag = true;
      tmrActive->tmrElapsed = true;

      if ((tmrActive->type == SYS_TIME_SINGLE) &&
          (tmrActive->callback != NULL)) {
        (void)SYS_TIME_TimerDestroy(tmrActive->tmrHandle);
      } else {
        (void)SYS_TIME_RemoveFromList(tmrActive);
        if (tmrActive->type == SYS_TIME_SINGLE) {
          tmrActive->active = false;
        }
      }

      if (tmrActive->callback != NULL) {
        tmrActive->callback(tmrActive->context);
      }

      tmrActive = counterObj->tmrActive;
    } else {
      break;
    }
  }
}

static void SYS_TIME_UpdateTime(uint32_t elapsedCounts) {
  uint8_t i;

  SYS_TIME_UpdateTimerList(elapsedCounts);

  SYS_TIME_ClientNotify();

  for (i = 0U; i < (uint32_t)SYS_TIME_MAX_TIMERS; i++) {
    if (timers[i].tmrElapsed == true) {
      timers[i].tmrElapsed = false;

      if (timers[i].type == SYS_TIME_PERIODIC) {
        timers[i].relativeTimePending = timers[i].requestedTime;
        (void)SYS_TIME_AddToList(&timers[i]);
      }
    }
  }
}

static void SYS_TIME_PLIBCallback(uint32_t status, uintptr_t context) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_TIMER_OBJ* tmrActive = counterObj->tmrActive;
  uint32_t elapsedCount = 0;
  bool interruptState;

  counterObj->hwTimerCurrentValue = counterObj->timePlib->timerCounterGet();

  elapsedCount = SYS_TIME_GetElapsedCount(counterObj->hwTimerCurrentValue);

  counterObj->swCounter64 = counterObj->swCounter64 + elapsedCount;

  if (tmrActive != NULL) {
    counterObj->interruptNestingCount++;

    SYS_TIME_UpdateTime(elapsedCount);

    counterObj->interruptNestingCount--;
  }

  interruptState = SYS_INT_Disable();
  SYS_TIME_HwTimerCompareUpdate();
  SYS_INT_Restore(interruptState);
}

static SYS_TIME_HANDLE SYS_TIME_TimerObjectCreate(uint32_t count,
                                                  uint32_t period,
                                                  SYS_TIME_CALLBACK callBack,
                                                  uintptr_t context,
                                                  SYS_TIME_CALLBACK_TYPE type) {
  SYS_TIME_HANDLE tmrHandle = SYS_TIME_HANDLE_INVALID;
  SYS_TIME_TIMER_OBJ* tmr;
  uint32_t tmrObjIndex = 0;

  if (SYS_TIME_ResourceLock() == false) {
    return tmrHandle;
  }
  if ((gSystemCounterObj.status == SYS_STATUS_READY) && (period > 0U) &&
      (period >= count)) {
    for (tmr = timers; tmr < &timers[SYS_TIME_MAX_TIMERS]; tmr++) {
      if (tmr->inUse == false) {
        tmr->inUse = true;
        tmr->active = false;
        tmr->tmrElapsedFlag = false;
        tmr->tmrElapsed = false;
        tmr->type = type;
        tmr->requestedTime = period;
        tmr->callback = callBack;
        tmr->context = context;
        tmr->relativeTimePending = period - count;

        tmr->tmrHandle = (SYS_TIME_HANDLE)SYS_TIME_MAKE_HANDLE(
            gSysTimeTokenCount, (uint16_t)tmrObjIndex);

        gSysTimeTokenCount = SYS_TIME_UPDATE_TOKEN(gSysTimeTokenCount);

        tmrHandle = tmr->tmrHandle;

        break;
      }
      tmrObjIndex++;
    }
  }

  SYS_TIME_ResourceUnlock();

  return tmrHandle;
}

static void SYS_TIME_CounterInit(SYS_MODULE_INIT* init) {
  uint64_t numerator, numeratorRead;
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_TIME_INIT* initData = (SYS_TIME_INIT*)init;

  counterObj->timePlib = initData->timePlib;
  counterObj->hwTimerFrequency = counterObj->timePlib->timerFrequencyGet();

  numerator = ((uint64_t)SYS_TIME_COMPARE_UPDATE_EXECUTION_CYCLES *
               counterObj->hwTimerFrequency);
  numeratorRead = (numerator / (uint64_t)SYS_TIME_CPU_CLOCK_FREQUENCY) + 2U;
  counterObj->hwTimerCompareMargin = (uint32_t)numeratorRead;

  counterObj->hwTimerIntNum = initData->hwTimerIntNum;
  counterObj->hwTimerPreviousValue = 0;
  counterObj->hwTimerPeriodValue = SYS_TIME_HW_COUNTER_PERIOD;
  counterObj->hwTimerCompareValue = SYS_TIME_HW_COUNTER_HALF_PERIOD;

  counterObj->swCounter64 = 0;
  counterObj->tmrActive = NULL;
  counterObj->interruptNestingCount = 0;

  counterObj->timePlib->timerCallbackSet(SYS_TIME_PLIBCallback, 0);
  if (counterObj->timePlib->timerPeriodSet != NULL) {
    counterObj->timePlib->timerPeriodSet(counterObj->hwTimerPeriodValue);
  }
  counterObj->timePlib->timerCompareSet(counterObj->hwTimerCompareValue);
  counterObj->timePlib->timerStart();
}

SYS_MODULE_OBJ SYS_TIME_Initialize(const SYS_MODULE_INDEX index,
                                   const SYS_MODULE_INIT* const init) {
  if (init == NULL || index != (uint32_t)SYS_TIME_INDEX_0) {
    return SYS_MODULE_OBJ_INVALID;
  }

  if (OSAL_MUTEX_Create(&gSystemCounterObj.timerMutex) != OSAL_RESULT_SUCCESS) {
    return SYS_MODULE_OBJ_INVALID;
  }

  SYS_TIME_CounterInit((SYS_MODULE_INIT*)init);
  (void)memset(timers, 0, sizeof(timers));

  gSystemCounterObj.status = SYS_STATUS_READY;

  return (SYS_MODULE_OBJ)&gSystemCounterObj;
}

void SYS_TIME_Deinitialize(SYS_MODULE_OBJ object) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;

  if (counterObj != (SYS_TIME_COUNTER_OBJ*)object) {
    return;
  }

  counterObj->timePlib->timerStop();

  (void)memset(&timers, 0, sizeof(timers));
  (void)memset(&gSystemCounterObj, 0, sizeof(gSystemCounterObj));

  counterObj->status = SYS_STATUS_UNINITIALIZED;

  return;
}

SYS_STATUS SYS_TIME_Status(SYS_MODULE_OBJ object) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  SYS_STATUS status = SYS_STATUS_UNINITIALIZED;

  if (counterObj == (SYS_TIME_COUNTER_OBJ*)object) {
    status = counterObj->status;
  }

  return status;
}

uint32_t SYS_TIME_FrequencyGet(void) {
  return gSystemCounterObj.hwTimerFrequency;
}

uint64_t SYS_TIME_Counter64Get(void) {
  SYS_TIME_COUNTER_OBJ* counterObj = (SYS_TIME_COUNTER_OBJ*)&gSystemCounterObj;
  uint64_t counter64 = 0;
  uint32_t elapsedCount;
  bool interruptState;

  interruptState = SYS_INT_Disable();

  elapsedCount =
      SYS_TIME_GetElapsedCount(counterObj->timePlib->timerCounterGet());

  counter64 = counterObj->swCounter64 + elapsedCount;

  SYS_INT_Restore(interruptState);

  return counter64;
}

uint32_t SYS_TIME_CounterGet(void) {
  uint32_t counter32;

  counter32 = (uint32_t)SYS_TIME_Counter64Get();

  return counter32;
}

void SYS_TIME_CounterSet(uint32_t count) {
  bool interruptState;

  interruptState = SYS_INT_Disable();

  gSystemCounterObj.swCounter64 = count;

  SYS_INT_Restore(interruptState);
}

uint32_t SYS_TIME_CountToUS(uint32_t count) {
  return (uint32_t)(((uint64_t)count * 1000000U) /
                    gSystemCounterObj.hwTimerFrequency);
}

uint32_t SYS_TIME_CountToMS(uint32_t count) {
  return (uint32_t)(((uint64_t)count * 1000U) /
                    gSystemCounterObj.hwTimerFrequency);
}

uint32_t SYS_TIME_USToCount(uint32_t us) {
  return (uint32_t)((us * (uint64_t)gSystemCounterObj.hwTimerFrequency) /
                    1000000U);
}

uint32_t SYS_TIME_MSToCount(uint32_t ms) {
  return (uint32_t)((ms * (uint64_t)gSystemCounterObj.hwTimerFrequency) /
                    1000U);
}

SYS_TIME_HANDLE SYS_TIME_TimerCreate(uint32_t count, uint32_t period,
                                     SYS_TIME_CALLBACK callBack,
                                     uintptr_t context,
                                     SYS_TIME_CALLBACK_TYPE type) {
  if ((type == SYS_TIME_SINGLE) && (callBack == NULL)) {
    return SYS_TIME_HANDLE_INVALID;
  }

  return SYS_TIME_TimerObjectCreate(count, period, callBack, context, type);
}

SYS_TIME_RESULT SYS_TIME_TimerReload(SYS_TIME_HANDLE handle, uint32_t count,
                                     uint32_t period,
                                     SYS_TIME_CALLBACK callBack,
                                     uintptr_t context,
                                     SYS_TIME_CALLBACK_TYPE type) {
  SYS_TIME_TIMER_OBJ* tmr = NULL;
  SYS_TIME_RESULT result = SYS_TIME_ERROR;

  if (SYS_TIME_ResourceLock() == false) {
    return result;
  }

  if ((type == SYS_TIME_SINGLE) && (callBack == NULL)) {
    SYS_TIME_ResourceUnlock();
    return result;
  }

  tmr = SYS_TIME_GetTimerObject(handle);

  if ((tmr != NULL) && (period > 0U) && (period >= count)) {
    (void)SYS_TIME_RemoveFromList(tmr);
    tmr->tmrElapsedFlag = false;
    tmr->tmrElapsed = false;
    tmr->type = type;
    tmr->requestedTime = period;
    tmr->relativeTimePending = period - count;
    tmr->callback = callBack;
    tmr->context = context;
    if (gSystemCounterObj.interruptNestingCount == 0U) {
      (void)SYS_TIME_TimerAdd(tmr);
    } else {
      (void)SYS_TIME_AddToList(tmr);
    }
    tmr->active = true;
    result = SYS_TIME_SUCCESS;
  }

  (void)SYS_TIME_ResourceUnlock();
  return result;
}

SYS_TIME_RESULT SYS_TIME_TimerDestroy(SYS_TIME_HANDLE handle) {
  SYS_TIME_TIMER_OBJ* tmr = NULL;
  SYS_TIME_RESULT result = SYS_TIME_ERROR;

  if (SYS_TIME_ResourceLock() == false) {
    return result;
  }

  tmr = SYS_TIME_GetTimerObject(handle);

  if (tmr != NULL) {
    if (tmr->active == true) {
      (void)SYS_TIME_RemoveFromList(tmr);
      tmr->active = false;
    }
    tmr->tmrElapsedFlag = false;
    tmr->tmrElapsed = false;
    tmr->inUse = false;
    result = SYS_TIME_SUCCESS;
  }

  (void)SYS_TIME_ResourceUnlock();
  return result;
}

SYS_TIME_RESULT SYS_TIME_TimerStart(SYS_TIME_HANDLE handle) {
  SYS_TIME_TIMER_OBJ* tmr = NULL;
  SYS_TIME_RESULT result = SYS_TIME_ERROR;

  if (SYS_TIME_ResourceLock() == false) {
    return result;
  }

  tmr = SYS_TIME_GetTimerObject(handle);

  if (tmr != NULL) {
    if (tmr->active == false) {
      if (tmr->relativeTimePending == 0U) {
        tmr->relativeTimePending = tmr->requestedTime;
      }
      if (gSystemCounterObj.interruptNestingCount == 0U) {
        SYS_TIME_TimerAdd(tmr);
      } else {
        (void)SYS_TIME_AddToList(tmr);
      }
      tmr->tmrElapsedFlag = false;
      tmr->tmrElapsed = false;
      tmr->active = true;
    }
    result = SYS_TIME_SUCCESS;
  }

  (void)SYS_TIME_ResourceUnlock();
  return result;
}

SYS_TIME_RESULT SYS_TIME_TimerStop(SYS_TIME_HANDLE handle) {
  SYS_TIME_TIMER_OBJ* tmr = NULL;
  SYS_TIME_RESULT result = SYS_TIME_ERROR;

  if (SYS_TIME_ResourceLock() == false) {
    return result;
  }

  tmr = SYS_TIME_GetTimerObject(handle);

  if (tmr != NULL) {
    if (tmr->active == true) {
      (void)SYS_TIME_RemoveFromList(tmr);
      tmr->tmrElapsedFlag = false;
      tmr->tmrElapsed = false;
      tmr->active = false;

      tmr->relativeTimePending = tmr->requestedTime;
    }
    result = SYS_TIME_SUCCESS;
  }

  (void)SYS_TIME_ResourceUnlock();
  return result;
}

SYS_TIME_RESULT SYS_TIME_TimerCounterGet(SYS_TIME_HANDLE handle,
                                         uint32_t* count) {
  SYS_TIME_TIMER_OBJ* tmr = NULL;
  SYS_TIME_RESULT result = SYS_TIME_ERROR;
  uint32_t elapsedCount;

  if (SYS_TIME_ResourceLock() == false) {
    return result;
  }

  if (count != NULL) {
    tmr = SYS_TIME_GetTimerObject(handle);
    if (tmr != NULL) {
      elapsedCount = SYS_TIME_GetTotalElapsedCount(tmr);
      *count = elapsedCount;
      result = SYS_TIME_SUCCESS;
    }
  }

  (void)SYS_TIME_ResourceUnlock();
  return result;
}

bool SYS_TIME_TimerPeriodHasExpired(SYS_TIME_HANDLE handle) {
  SYS_TIME_TIMER_OBJ* tmr = NULL;
  bool status = false;

  if (SYS_TIME_ResourceLock() == false) {
    return status;
  }

  tmr = SYS_TIME_GetTimerObject(handle);

  if (tmr != NULL) {
    status = tmr->tmrElapsedFlag;

    tmr->tmrElapsedFlag = false;
  }

  (void)SYS_TIME_ResourceUnlock();
  return status;
}

SYS_TIME_RESULT SYS_TIME_DelayUS(uint32_t us, SYS_TIME_HANDLE* handle) {
  SYS_TIME_RESULT result = SYS_TIME_ERROR;

  if ((handle == NULL) || (us == 0U)) {
    return result;
  }

  *handle = SYS_TIME_TimerObjectCreate(0, SYS_TIME_USToCount(us), NULL, 0,
                                       SYS_TIME_SINGLE);
  if (*handle != SYS_TIME_HANDLE_INVALID) {
    (void)SYS_TIME_TimerStart(*handle);
    result = SYS_TIME_SUCCESS;
  }

  return result;
}

SYS_TIME_RESULT SYS_TIME_DelayMS(uint32_t ms, SYS_TIME_HANDLE* handle) {
  SYS_TIME_RESULT result = SYS_TIME_ERROR;

  if ((handle == NULL) || (ms == 0U)) {
    return result;
  }

  *handle = SYS_TIME_TimerObjectCreate(0, SYS_TIME_MSToCount(ms), NULL, 0,
                                       SYS_TIME_SINGLE);
  if (*handle != SYS_TIME_HANDLE_INVALID) {
    (void)SYS_TIME_TimerStart(*handle);
    result = SYS_TIME_SUCCESS;
  }

  return result;
}

bool SYS_TIME_DelayIsComplete(SYS_TIME_HANDLE handle) {
  bool status = false;

  if (true == SYS_TIME_TimerPeriodHasExpired(handle)) {
    (void)SYS_TIME_TimerDestroy(handle);
    status = true;
  }

  return status;
}

SYS_TIME_HANDLE SYS_TIME_CallbackRegisterUS(SYS_TIME_CALLBACK callback,
                                            uintptr_t context, uint32_t us,
                                            SYS_TIME_CALLBACK_TYPE type) {
  SYS_TIME_HANDLE handle = SYS_TIME_HANDLE_INVALID;

  if ((type == SYS_TIME_SINGLE) && (callback == NULL)) {
    return handle;
  }

  if (us != 0U) {
    handle = SYS_TIME_TimerObjectCreate(0, SYS_TIME_USToCount(us), callback,
                                        context, type);
    if (handle != SYS_TIME_HANDLE_INVALID) {
      (void)SYS_TIME_TimerStart(handle);
    }
  }

  return handle;
}

SYS_TIME_HANDLE SYS_TIME_CallbackRegisterMS(SYS_TIME_CALLBACK callback,
                                            uintptr_t context, uint32_t ms,
                                            SYS_TIME_CALLBACK_TYPE type) {
  SYS_TIME_HANDLE handle = SYS_TIME_HANDLE_INVALID;

  if ((type == SYS_TIME_SINGLE) && (callback == NULL)) {
    return handle;
  }

  if (ms != 0U) {
    handle = SYS_TIME_TimerObjectCreate(0, SYS_TIME_MSToCount(ms), callback,
                                        context, type);
    if (handle != SYS_TIME_HANDLE_INVALID) {
      (void)SYS_TIME_TimerStart(handle);
    }
  }

  return handle;
}
