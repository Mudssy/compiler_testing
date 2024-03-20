
#include <stdio.h>

int main() {
    #ifdef __llvm__ // Check if compiler is LLVM based
        printf("LLVM Compiler Detected\n");
    #else 
        #error This code requires an LLVM-based compiler, but the current compiler does not seem to be supported.
    #endif

    return 0;
}
