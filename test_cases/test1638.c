
#include <stdio.h>
#include "test_header.h"

int main() {
    #ifdef TEST_MACRO
        printf("TEST_MACRO defined\n");
    #else
        printf("TEST_MACRO not defined\n");
    #endif
    
    return 0;
}
