#ifndef LEGATO_INIT_SCHEME_H
#define LEGATO_INIT_SCHEME_H

#include "gfx/legato/legato.h"

extern const leScheme Scheme;
extern const leScheme Scheme0;
extern const leScheme Scheme1;
extern const leScheme Scheme2;
extern const leScheme Scheme3;

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

void legato_initialize_schemes(void);

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LEGATO_INIT_SCHEME_H
