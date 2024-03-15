
#include <stdio.h>

#define TEST_MACRO 1

int main() {
    #undef TEST_MACRO
    
    if (TEST_MACRO) {
        printf("TEST_MACRO is defined.\n");
    } else {
        printf("TEST_MACRO is not defined.\n");
    }

    return 0;
}
