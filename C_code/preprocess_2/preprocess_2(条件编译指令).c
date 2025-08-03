#include <stdio.h>

// 定义操作系统宏
#if defined(_WIN32) || defined(_WIN64)//_WIN64 是 Windows 平台上的一个预定义宏
    #define OS_WINDOWS
#elif defined(__linux__)
    #define OS_LINUX
#elif defined(__APPLE__)
    #define OS_MACOS
#else
    #error "Unsupported operating system"
#endif

int main() {
    // 根据操作系统输出不同的消息
    #if defined(OS_WINDOWS)
        printf("Hello from Windows!\n");
    #elif defined(OS_LINUX)
        printf("Hello from Linux!\n");
    #elif defined(OS_MACOS)
        printf("Hello from macOS!\n");
    #endif

    return 0;
}
/* 
#include <stdio.h>

// 定义一些宏
#define PLATFORM_LINUX  1
#define PLATFORM_WINDOWS 2

// 根据不同的平台定义不同的宏
#if defined(__linux__)
    #define PLATFORM PLATFORM_LINUX
#elif defined(_WIN32) || defined(_WIN64)
    #define PLATFORM PLATFORM_WINDOWS
#else
    #error "Unsupported platform"
#endif

// 根据不同的平台输出不同的消息
#if PLATFORM == PLATFORM_LINUX
    #define PLATFORM_MESSAGE "Hello from Linux!\n"
#elif PLATFORM == PLATFORM_WINDOWS
    #define PLATFORM_MESSAGE "Hello from Windows!\n"
#else
    #define PLATFORM_MESSAGE "Hello from an unknown platform!\n"
#endif

int main() {
    printf("%s", PLATFORM_MESSAGE);
    return 0;
}
 */