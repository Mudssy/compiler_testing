
#include <stdio.h>

#define TEST_FEATURE

int main() {
    #ifdef TEST_FEATURE
        printf("Test feature is defined\n");
    #else
        printf("Test feature is not defined\n");
    #endif
    
    return 0;
}
