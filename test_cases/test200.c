
#include <stdio.h>

// Uncomment this line to define the macro
#define TEST_MACRO

int main() {
    #ifdef TEST_MACRO
        printf("Defined\n");
    #else
        printf("Undefined\n");
    #endif

    #undef TEST_MACRO
    
    #ifdef TEST_MACRO
        printf("Defined\n");
    #else
        printf("Undefined\n");
    #endif

    return 0;
}
