
#include <stdio.h>

#define TEST_STRING "llvmunittests"

int main() {
    #ifdef TEST_STRING
        printf("Preprocessor Directives feature is supported.\n");
    #else
        printf("Preprocessor Directives feature is not supported.\n");
    #endif

    return 0;
}
