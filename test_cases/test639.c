
#include <stdio.h>

int main() {
    #ifdef __clang__
        printf("Clang Compiler detected!\n");
    #elif defined(__GNUC__)
        printf("GCC Compiler detected!\n");
    #elif defined(_MSC_VER)
        printf("MSVC Compiler detected!\n");
    #else
        printf("Unknown Compiler detected!\n");
    #endif

    return 0;
}
