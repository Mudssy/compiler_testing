
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunused-variable"
    int unused_var = 10;
    #pragma clang diagnostic pop

    printf("Test case for Pragma Directives feature in C programming language.\n");
    return 0;
}
