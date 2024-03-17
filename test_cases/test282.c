
#include <stdio.h>

int main() {
    printf("Hello from ");
#if defined(__clang__) && defined(_WIN32)
    printf("clang on Windows");
#elif defined(__clang__) && defined(__linux__)
    printf("clang on Linux");
#elif defined(__clang__) && defined(__APPLE__)
    printf("clang on macOS");
#else
    printf("an unknown compiler or platform");
#endif
    return 0;
}
