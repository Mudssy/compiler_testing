
#include <stdio.h>

int main() {
    #pragma clang system_header /* This is a test to see if this compiler supports target specific pragmas */
    printf("Testing Clang's `system_header` pragma.\n");
    return 0;
}
