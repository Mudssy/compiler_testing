
#include <stdio.h>

#define TEST_MACRO 1

int main() {
    #ifdef TEST_MACRO
        printf("TEST_MACRO is defined.\n");
    #else
        printf("TEST_MACRO is not defined.\n");
    #endif
    return 0;
}
