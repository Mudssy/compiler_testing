
#include <stdio.h>

#define EXAMPLE_MACRO 1

int main(void) {
    #if EXAMPLE_MACRO == 0
        printf("EXAMPLE_MACRO is defined as 0\n");
    #elif EXAMPLE_MACRO == 1
        printf("EXAMPLE_MACRO is defined as 1\n");
    #else
        printf("EXAMPLE_MACRO is not defined as 0 or 1\n");
    #endif
    
    return 0;
}
