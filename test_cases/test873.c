
#include <stdio.h>

int main() {
    #ifdef __has_include
        #if __has_include(<llvmlibRemarks.h>)
            printf("Compiler supports llvmlibRemarks section.\n");
        #else
            printf("Compiler does not support llvmlibRemarks section.\n");
        #endif
    #endif
    return 0;
}
