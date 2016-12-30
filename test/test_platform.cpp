#include <iostream>
#include <platform.h>

using namespace std;

int main()
{
#if defined(PLATFORM_LINUX)
    cout << "Linux" << endl;
#elif defined(PLATFORM_WINDOWS)
    cout << "Windows" << endl;
#elif defined(PLATFORM_MACOS)
    cout << "Macos" << endl;
#elif defined(PLATFORM_ANDROID)
    cout << "Android" << endl;
#elif defined(PLATFORM_BSD)
    cout << "BSD" << endl;
#endif

#if defined(COMPILER_MSVC)
    cout << "MSVC" << endl;
#elif defined(__GNUC__)
    cout << "GNUC" << endl;
#elif defined(COMPILER_CLANG)
    cout << "CLANG" << endl;
#endif

#if defined(ARCHITECTURE_32)
    cout << "32bit" << endl;
#elif defined(ARCHITECTURE_64)
    cout << "64bit" << endl;
#endif
}

