
#include <stdio.h>

int main() {
    #ifdef __clang_version__
        printf("Compiler is clang\n");
    #else
        printf("Compiler is not clang\n");
    #endif
    
    return 0;
}
