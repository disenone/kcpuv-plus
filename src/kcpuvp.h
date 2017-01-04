#pragma once

#include "platform.h"

#ifdef PLATFORM_WINDOWS
#   ifdef KCPUVP_DLL
#       define KCPUVP_API __declspec(dllexport)
#   elif defined(KCPUVP_LIB)
#       define KCPUVP_API __attribute ((visibility("default")))
#   else
#       define KCPUVP_API __declspec(dllimport)
#   endif
#else
#define KCPUVP_API
#endif

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int kcpuv_send_data();

#ifdef __cplusplus
}
#endif // __cplusplus
