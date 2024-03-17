
#include <stdio.h>

int main() {
    #ifdef __clang__
        printf("Clang version: %d\n", (int)__clang_major__);
    #elif defined(__GNUC__)
        printf("GCC version: %d\n", (int)__GNUC__);
    #else
        printf("Other compiler\n");
    #endif
    
    return 0;
}
