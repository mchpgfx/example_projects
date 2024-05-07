#include "system/int/sys_int.h"

void SYS_INT_Enable(void) {}
bool SYS_INT_Disable(void) { return true; }
void SYS_INT_Restore(bool state) {}
bool SYS_INT_SourceDisable(INT_SOURCE source) { return true; }
void SYS_INT_SourceRestore(INT_SOURCE source, bool status) {}
