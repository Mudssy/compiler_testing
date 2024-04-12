
#include <stdio.h>

#ifndef CLANG_LIBFRONTENDTOOL
#define CLANG_LIBFRONTENDTOOL 1
#endif

int main() {
    #if CLANG_LIBFRONTENDTOOL == 1
        printf("If part\n");
    #else
        printf("Else part\n");
    #endif
    
    return 0;
}
