
#include <stdio.h>

int main() {
    // This assertion should always pass
    _Static_assert(sizeof(char) == 1, "Expected char to be 1 byte.");

    // If this assertion fails, the compiler will throw an error because it is not supported by C90 and earlier.
    // Uncomment below line for testing purposes:
    // _Static_assert((__STDC_VERSION__ >= 201112L), "Expected __STDC_VERSION__ to be at least 201112L.");
    
    printf("Tests passed!\n");
    return 0;
}
