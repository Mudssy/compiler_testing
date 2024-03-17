
#include <stdio.h>

#define TEST_MACRO 1

int main() {
    #ifndef TEST_MACRO
        printf("Test macro not defined\n");
    #else
        printf("Test macro is defined with value: %d\n", TEST_MACRO);
    #endif
    
    return 0;
}
