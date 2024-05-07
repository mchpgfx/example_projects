#ifndef SYS_TIME_H
#define SYS_TIME_H

#include <stdbool.h>
#include <stdint.h>
#include "sys_time_definitions.h"
#include "system/system.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SYS_TIME_INIT_ SYS_TIME_INIT;

typedef enum {
  SYS_TIME_SUCCESS,
  SYS_TIME_ERROR
} SYS_TIME_RESULT;

typedef uintptr_t SYS_TIME_HANDLE;

#define SYS_TIME_HANDLE_INVALID ((SYS_TIME_HANDLE)(-1))

typedef enum {
  SYS_TIME_SINGLE,
  SYS_TIME_PERIODIC
} SYS_TIME_CALLBACK_TYPE;

typedef void (*SYS_TIME_CALLBACK)(uintptr_t context);

SYS_MODULE_OBJ SYS_TIME_Initialize(const SYS_MODULE_INDEX index,
                                   const SYS_MODULE_INIT* const init);
void SYS_TIME_Deinitialize(SYS_MODULE_OBJ object);
SYS_STATUS SYS_TIME_Status(SYS_MODULE_OBJ object);
SYS_TIME_RESULT SYS_TIME_DelayUS(uint32_t us, SYS_TIME_HANDLE* handle);
SYS_TIME_RESULT SYS_TIME_DelayMS(uint32_t ms, SYS_TIME_HANDLE* handle);
bool SYS_TIME_DelayIsComplete(SYS_TIME_HANDLE handle);
SYS_TIME_HANDLE SYS_TIME_CallbackRegisterUS(SYS_TIME_CALLBACK callback,
                                            uintptr_t context, uint32_t us,
                                            SYS_TIME_CALLBACK_TYPE type);
SYS_TIME_HANDLE SYS_TIME_CallbackRegisterMS(SYS_TIME_CALLBACK callback,
                                            uintptr_t context, uint32_t ms,
                                            SYS_TIME_CALLBACK_TYPE type);
uint32_t SYS_TIME_FrequencyGet(void);
uint32_t SYS_TIME_CounterGet(void);
uint64_t SYS_TIME_Counter64Get(void);
void SYS_TIME_CounterSet(uint32_t count);
uint32_t SYS_TIME_CountToUS(uint32_t count);
uint32_t SYS_TIME_CountToMS(uint32_t count);
uint32_t SYS_TIME_USToCount(uint32_t us);
uint32_t SYS_TIME_MSToCount(uint32_t ms);
SYS_TIME_HANDLE SYS_TIME_TimerCreate(uint32_t count, uint32_t period,
                                     SYS_TIME_CALLBACK callBack,
                                     uintptr_t context,
                                     SYS_TIME_CALLBACK_TYPE type);
SYS_TIME_RESULT SYS_TIME_TimerReload(SYS_TIME_HANDLE handle, uint32_t count,
                                     uint32_t period,
                                     SYS_TIME_CALLBACK callBack,
                                     uintptr_t context,
                                     SYS_TIME_CALLBACK_TYPE type);
SYS_TIME_RESULT SYS_TIME_TimerDestroy(SYS_TIME_HANDLE handle);
SYS_TIME_RESULT SYS_TIME_TimerCounterGet(SYS_TIME_HANDLE handle,
                                         uint32_t* count);
SYS_TIME_RESULT SYS_TIME_TimerStart(SYS_TIME_HANDLE handle);
SYS_TIME_RESULT SYS_TIME_TimerStop(SYS_TIME_HANDLE handle);
bool SYS_TIME_TimerPeriodHasExpired(SYS_TIME_HANDLE handle);

#ifdef __cplusplus
}
#endif

#endif
