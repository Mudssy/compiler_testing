
#include <stdio.h>

#ifdef LLVM_BUILD
    #define COMPILER_NAME "LLVM"
#elif defined(__GNUC__)
    #define COMPILER_NAME "GCC"
#else
    #define COMPILER_NAME "Unknown"
#endif

int main() {
    printf("This program is compiled using %s.\n", COMPILER_NAME);
    return 0;
}
