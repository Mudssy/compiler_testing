
#include <stdio.h>

#define TEST_HEADER "test_header.h"

int main() {
    #include TEST_HEADER
    printf("Test output: %d\n", test_output);
    return 0;
}
