#ifndef SYS_INT_H
#define SYS_INT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "device.h"

#ifdef __cplusplus
extern "C" {
#endif

void SYS_INT_Enable(void);
bool SYS_INT_Disable(void);
bool SYS_INT_IsEnabled(void);
void SYS_INT_Restore(bool state);
void SYS_INT_SourceEnable(INT_SOURCE source);
bool SYS_INT_SourceDisable(INT_SOURCE source);
void SYS_INT_SourceRestore(INT_SOURCE source, bool status);
bool SYS_INT_SourceIsEnabled(INT_SOURCE source);
bool SYS_INT_SourceStatusGet(INT_SOURCE source);
void SYS_INT_SourceStatusSet(INT_SOURCE source);
void SYS_INT_SourceStatusClear(INT_SOURCE source);

#include "sys_int_mapping.h"

#ifdef __cplusplus
}
#endif

#endif
