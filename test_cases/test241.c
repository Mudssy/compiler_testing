
#include <stdio.h>

int main() {
    #ifdef __cplusplus
        printf("This compiler supports C++ compatibility feature for the C programming language.\n");
    #else
        printf("This compiler does not support C++ compatibility feature for the C programming language.\n");
    #endif
    
    return 0;
}
