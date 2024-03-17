
#include <stdio.h>

#define TEST_CASE 1

int main() {
    #ifdef TEST_CASE
        printf("TEST_CASE is defined\n");
    #else
        printf("TEST_CASE is not defined\n");
    #endif

    return 0;
}
