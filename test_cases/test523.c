
#include <stdio.h>

extern void _Z4testv(); // C++ Name Mangling for a global function called test()

int main(void) {
    printf("Calling extern C++ Name Mangled function...\n");
    _Z4testv();
    return 0;
}
