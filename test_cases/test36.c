
#include <stdio.h>

int main() {
    #ifdef __OPTIMIZE__
        printf("Optimized build\n");
    #else
        printf("Debug build\n");
    #endif
    
    return 0;
}
