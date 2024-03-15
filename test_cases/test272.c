
#include <stdio.h>

#define TEST_DEFINE 1

int main() {
    #ifdef clanglibDriver
        #ifdef TEST_DEFINE
            printf("clanglibDriver: TEST_DEFINE is defined.\n");
        #else
            printf("clanglibDriver: TEST_DEFINE is not defined.\n");
        #endif
    #else
        printf("No clanglibDriver section found.\n");
    #endif

    return 0;
}
