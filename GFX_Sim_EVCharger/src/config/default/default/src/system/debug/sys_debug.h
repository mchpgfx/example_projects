#ifndef SYS_DEBUG_H
#define SYS_DEBUG_H

#include <stdbool.h>
#include "configuration.h"
#include "system/system.h"
#ifdef SYS_DEBUG_USE_CONSOLE
#include "system/console/sys_console.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  SYS_ERROR_FATAL = 0,
  SYS_ERROR_ERROR = 1,
  SYS_ERROR_WARNING = 2,
  SYS_ERROR_INFO = 3,
  SYS_ERROR_DEBUG = 4
} SYS_ERROR_LEVEL;

extern SYS_ERROR_LEVEL gblErrLvl;

typedef struct {
  SYS_MODULE_INIT moduleInit;
  SYS_ERROR_LEVEL errorLevel;
  SYS_MODULE_INDEX consoleIndex;
} SYS_DEBUG_INIT;

#define SYS_DEBUG_INDEX_0 0

SYS_MODULE_OBJ SYS_DEBUG_Initialize(const SYS_MODULE_INDEX index,
                                    const SYS_MODULE_INIT* const init);
SYS_STATUS SYS_DEBUG_Status(SYS_MODULE_OBJ object);
void SYS_DEBUG_ErrorLevelSet(SYS_ERROR_LEVEL level);
SYS_ERROR_LEVEL SYS_DEBUG_ErrorLevelGet(void);
bool SYS_DEBUG_Redirect(const SYS_MODULE_INDEX index);
SYS_MODULE_INDEX SYS_DEBUG_ConsoleInstanceGet(void);

#ifdef SYS_DEBUG_USE_CONSOLE
#ifndef SYS_DEBUG_MESSAGE
#define SYS_DEBUG_MESSAGE(level, message)                           \
  do {                                                              \
    if ((level) <= SYS_DEBUG_ErrorLevelGet())                       \
      SYS_CONSOLE_Message(SYS_DEBUG_ConsoleInstanceGet(), message); \
  } while (0)
#endif
#endif

#ifdef SYS_DEBUG_USE_CONSOLE
#ifndef SYS_DEBUG_PRINT
#define SYS_DEBUG_PRINT(level, format, ...)                     \
  do {                                                          \
    if ((level) <= SYS_DEBUG_ErrorLevelGet())                   \
      SYS_CONSOLE_Print(SYS_DEBUG_ConsoleInstanceGet(), format, \
                        ##__VA_ARGS__);                         \
  } while (0)
#endif
#endif

#ifdef SYS_DEBUG_USE_CONSOLE
#ifndef SYS_DEBUG_MESSAGE
#define SYS_DEBUG_MESSAGE(level, message) _SYS_DEBUG_MESSAGE(level, message)
#endif
#ifndef SYS_DEBUG_PRINT
#define SYS_DEBUG_PRINT(level, fmt, ...) \
  _SYS_DEBUG_PRINT(level, fmt, ##__VA_ARGS__)
#endif
#endif

#ifndef SYS_CONSOLE_PRINT
#define SYS_CONSOLE_PRINT(fmt, ...)
#endif

#ifndef SYS_CONSOLE_MESSAGE
#define SYS_CONSOLE_MESSAGE(message)
#endif

#ifndef SYS_DEBUG_MESSAGE
#define SYS_DEBUG_MESSAGE(level, message)
#endif

#ifndef SYS_DEBUG_PRINT
#define SYS_DEBUG_PRINT(level, fmt, ...)
#endif

#if defined(__DEBUG)
#define SYS_DEBUG_BreakPoint() __asm__ volatile(" sdbbp 0")
#else
#define SYS_DEBUG_BreakPoint()
#endif

#ifndef SYS_DEBUG
#define SYS_DEBUG(level, message) SYS_DEBUG_MESSAGE(level, message)
#endif

#ifndef SYS_ERROR
#define SYS_ERROR(level, fmt, ...) SYS_DEBUG_PRINT(level, fmt, ##__VA_ARGS__)
#endif

#ifndef SYS_ERROR_PRINT
#define SYS_ERROR_PRINT(level, fmt, ...) \
  SYS_DEBUG_PRINT(level, fmt, ##__VA_ARGS__)
#endif

#ifdef __cplusplus
}
#endif

#endif
