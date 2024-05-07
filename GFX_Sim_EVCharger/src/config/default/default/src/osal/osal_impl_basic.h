#ifndef OSAL_IMPL_BASIC_H
#define OSAL_IMPL_BASIC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include "device.h"
#include "system/int/sys_int.h"

typedef uint8_t OSAL_SEM_HANDLE_TYPE;
typedef uint8_t OSAL_MUTEX_HANDLE_TYPE;
typedef uint32_t OSAL_CRITSECT_DATA_TYPE;

#define OSAL_WAIT_FOREVER (uint16_t)0xFFFF
#define OSAL_SEM_DECLARE(semID) uint8_t semID
#define OSAL_MUTEX_DECLARE(mutexID) uint8_t mutexID
#define OSAL_ASSERT(test, message) test

typedef enum OSAL_SEM_TYPE {
  OSAL_SEM_TYPE_BINARY,
  OSAL_SEM_TYPE_COUNTING
} OSAL_SEM_TYPE;

typedef enum OSAL_CRIT_TYPE {
  OSAL_CRIT_TYPE_LOW,
  OSAL_CRIT_TYPE_HIGH
} OSAL_CRIT_TYPE;

typedef enum OSAL_RESULT {
  OSAL_RESULT_NOT_IMPLEMENTED = -1,
  OSAL_RESULT_FALSE = 0,
  OSAL_RESULT_FAIL = 0,
  OSAL_RESULT_TRUE = 1,
  OSAL_RESULT_SUCCESS = 1,
} OSAL_RESULT;

__STATIC_INLINE OSAL_RESULT OSAL_SEM_Create(OSAL_SEM_HANDLE_TYPE* semID,
                                            OSAL_SEM_TYPE type,
                                            uint8_t maxCount,
                                            uint8_t initialCount);
__STATIC_INLINE OSAL_RESULT OSAL_SEM_Delete(OSAL_SEM_HANDLE_TYPE* semID);
__STATIC_INLINE OSAL_RESULT OSAL_SEM_Pend(OSAL_SEM_HANDLE_TYPE* semID,
                                          uint16_t waitMS);
__STATIC_INLINE OSAL_RESULT OSAL_SEM_Post(OSAL_SEM_HANDLE_TYPE* semID);
__STATIC_INLINE OSAL_RESULT OSAL_SEM_PostISR(OSAL_SEM_HANDLE_TYPE* semID);
__STATIC_INLINE uint8_t OSAL_SEM_GetCount(OSAL_SEM_HANDLE_TYPE* semID);
__STATIC_INLINE OSAL_CRITSECT_DATA_TYPE
OSAL_CRIT_Enter(OSAL_CRIT_TYPE severity);
__STATIC_INLINE void OSAL_CRIT_Leave(OSAL_CRIT_TYPE severity,
                                     OSAL_CRITSECT_DATA_TYPE status);

__STATIC_INLINE OSAL_RESULT OSAL_MUTEX_Create(OSAL_MUTEX_HANDLE_TYPE* mutexID);
__STATIC_INLINE OSAL_RESULT OSAL_MUTEX_Delete(OSAL_MUTEX_HANDLE_TYPE* mutexID);
__STATIC_INLINE OSAL_RESULT OSAL_MUTEX_Lock(OSAL_MUTEX_HANDLE_TYPE* mutexID,
                                            uint16_t waitMS);
__STATIC_INLINE OSAL_RESULT OSAL_MUTEX_Unlock(OSAL_MUTEX_HANDLE_TYPE* mutexID);
__STATIC_INLINE void* OSAL_Malloc(size_t size);
__STATIC_INLINE void OSAL_Free(void* pData);
OSAL_RESULT OSAL_Initialize(void);
__STATIC_INLINE const char* OSAL_Name(void);

static OSAL_CRITSECT_DATA_TYPE OSAL_CRIT_Enter(OSAL_CRIT_TYPE severity) {
  bool readData;
  if (severity == OSAL_CRIT_TYPE_LOW) {
    return (0);
  }

  readData = SYS_INT_Disable();
  return ((uint32_t)readData);
}

static void OSAL_CRIT_Leave(OSAL_CRIT_TYPE severity,
                            OSAL_CRITSECT_DATA_TYPE status) {
  if (severity == OSAL_CRIT_TYPE_LOW) {
    return;
  }

  SYS_INT_Restore((bool)status);
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_Create(OSAL_SEM_HANDLE_TYPE* semID, OSAL_SEM_TYPE type,
                uint8_t maxCount, uint8_t initialCount) {
  OSAL_CRITSECT_DATA_TYPE IntState;

  IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);

  if (type == OSAL_SEM_TYPE_COUNTING) {
    *semID = initialCount;
  } else {
    *semID = 1;
  }

  OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);

  return OSAL_RESULT_SUCCESS;
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_Delete(OSAL_SEM_HANDLE_TYPE* semID) {
  return (OSAL_RESULT_SUCCESS);
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_Pend(OSAL_SEM_HANDLE_TYPE* semID, uint16_t waitMS) {
  OSAL_CRITSECT_DATA_TYPE IntState;

  IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);

  if (*semID > 0U) {
    (*semID)--;
    OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);

    return OSAL_RESULT_SUCCESS;
  }

  OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);

  return OSAL_RESULT_FAIL;
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_Post(OSAL_SEM_HANDLE_TYPE* semID) {
  OSAL_CRITSECT_DATA_TYPE IntState;

  IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
  (*semID)++;
  OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);

  return OSAL_RESULT_SUCCESS;
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_PostISR(OSAL_SEM_HANDLE_TYPE* semID) {
  (*semID)++;
  return OSAL_RESULT_SUCCESS;
}

static uint8_t __attribute__((always_inline))
OSAL_SEM_GetCount(OSAL_SEM_HANDLE_TYPE* semID) {
  return *semID;
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_MUTEX_Create(OSAL_MUTEX_HANDLE_TYPE* mutexID) {
  *mutexID = 1;
  return OSAL_RESULT_SUCCESS;
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_MUTEX_Delete(OSAL_MUTEX_HANDLE_TYPE* mutexID) {
  return (OSAL_RESULT_SUCCESS);
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_MUTEX_Lock(OSAL_MUTEX_HANDLE_TYPE* mutexID, uint16_t waitMS) {
  if (*mutexID == 1U) {
    *mutexID = 0;
    return OSAL_RESULT_SUCCESS;
  }
  return OSAL_RESULT_FAIL;
}

static OSAL_RESULT __attribute__((always_inline))
OSAL_MUTEX_Unlock(OSAL_MUTEX_HANDLE_TYPE* mutexID) {
  *mutexID = 1;
  return OSAL_RESULT_SUCCESS;
}

static void* __attribute__((always_inline)) OSAL_Malloc(size_t size) {
  return malloc(size);
}

static void __attribute__((always_inline)) OSAL_Free(void* pData) {
  free(pData);
}

static const char* __attribute__((always_inline)) OSAL_Name(void) {
  return ((const char*)"BASIC");
}

#ifdef __cplusplus
}
#endif

#endif
