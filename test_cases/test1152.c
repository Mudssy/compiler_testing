
#include <stdio.h>

#define TEST 1

int main() {
    #if TEST == 0
        printf("Test is 0\n");
    #elif TEST == 1
        printf("Test is 1\n");
    #else
        printf("Unknown test value\n");
    #endif

    #ifdef TEST
        printf("TEST is defined\n");
    #endif

    #ifndef OTHER_TEST
        printf("OTHER_TEST is not defined\n");
    #endif
}
