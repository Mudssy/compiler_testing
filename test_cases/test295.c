
#include <stdio.h>

int main() {
    #ifdef __STDC_VERSION__
        printf("Compiler supports C99 or later.\n");
    #else
        printf("Compiler does not support C99 or later.\n");
    #endif
    
    return 0;
}
