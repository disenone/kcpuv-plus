#pragma once

#if defined(linux) || defined(__linux) || defined(__linux__)
#   ifndef PLATFORM_LINUX
#       define PLATFORM_LINUX
#   endif
#elif defined(WIN32) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__WINDOWS__) || defined(__TOS_WIN__)
#   ifndef PLATFORM_WINDOWS
#       define PLATFORM_WINDOWS
#   endif
#elif defined(macintosh) || defined(Macintosh) || defined(__APPLE__) || defined(__MACH__)
#   ifndef PLATFORM_MACOS
#       define PLATFORM_MACOS
#   endif
#elif defined(__ANDROID__)
#   ifndef PLATFORM_ANDROID
#       define PLATFORM_ANDROID
#   endif
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || \
        defined(__bsdi__) || defined(__DragonFly_)
#   ifndef PLATFORM_BSD
#       define PLATFORM_BSD
#   endif
#else
#   error "Unknown platform!"
#endif

#if defined(_MSC_VER)
#   ifndef COMPILER_MSVC
#       define COMPILER_MSVC
#   endif
#elif defined(__clang__)
#   ifndef COMPILER_CLANG
#       define COMPILER_CLANG
#   endif
#elif defined(__GNUC__)
#   ifndef COMPILER_GCC
#       define COMPILER_GCC
#   endif
#else
#   error "Unknown compiler!"
#endif

#if defined(i386) || defined(__i386) || defined(__i386__) || defined(__X86__) || defined(_X86_) ||\
         defined(_M_IX86) || defined(__ppc__) || defined(__PPC__) || defined(_ARCH_PPC)
#   ifndef ARCHITECTURE_32
#       define ARCHITECTURE_32
#   endif
#elif defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || \
        defined(_M_X64) || defined(_M_AMD64) || defined(__ia64__) || defined(_IA64) || \
        defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__powerpc64__) || \
        defined(__ppc64__) || defined(__PPC64__) || defined(_ARCH_PPC64)
#   ifndef ARCHITECTURE_64
#       define ARCHITECTURE_64
#   endif
#else
#   error "ERROR: Unknown architecture!"
#endif


#ifdef PLATFORM_WINDOWS
#   include <winsock2.h>
#   include <WS2tcpip.h>
#   include <stdint.h>
#else
#   include <fcntl.h>
#   include <netdb.h>
#   include <sys/types.h>
#   include <sys/socket.h>
#endif