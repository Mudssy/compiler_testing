
#include <stdio.h>

int main(void) {
    // Test for the usrinclude directory feature
    #if defined(__GNUC__) && defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200809L
        printf("<output>\n");
    #else
        printf("Compiler does not support the usrinclude directory feature.\n");
    #endif
    return 0;
}
