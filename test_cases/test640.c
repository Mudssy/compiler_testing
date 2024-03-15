
#include <stdio.h>

int main() {
    #ifdef __llvm__
        printf("This program is being compiled using LLVM.\n");
    #else
        printf("This program is not being compiled using LLVM.\n");
    #endif
    return 0;
}
