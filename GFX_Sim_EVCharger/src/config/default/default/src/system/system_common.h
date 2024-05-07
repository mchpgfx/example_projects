#ifndef SYSTEM_COMMON_H
#define SYSTEM_COMMON_H

#include <assert.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SYS_ASSERT
#define SYS_ASSERT(test, message)
#endif

#define MAIN_RETURN int
#define MAIN_RETURN_CODE(c) ((MAIN_RETURN)(c))

typedef enum {
  MAIN_RETURN_FAILURE = -1,

  MAIN_RETURN_SUCCESS = 0

} MAIN_RETURN_CODES;

#define SYS_VersionGet(void) SYS_VERSION
#define SYS_VersionStrGet(void) SYS_VERSION_STR

#ifdef __cplusplus
}
#endif

#endif
