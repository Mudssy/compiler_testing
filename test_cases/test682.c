
#include <stdio.h>

int main(void) {
    #pragma GCC error "This code section intentionally has an error for testing purposes."
    printf("No Error\n");

    #pragma GCC warning "This code section intentionally has a warning for testing purposes."
    printf("Warning\n");

    return 0; // make sure this program returns and does not run forever.
}
