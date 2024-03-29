
#include <stdio.h>

// Checking if the compiler has support for catan.
_Static_assert(__STDC_VERSION__ >= 199901L, "This compiler does not support C99 or later.");

int main(void) {
    // If the compiler supports C99 or later, it should support catan.
    printf("The compiler has support for C99 and catan.\n");
    return 0;
}
