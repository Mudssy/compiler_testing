
#include <stdio.h>

// Assume there's some sort of definition here
extern int cexp; 

int main() {
    // If the 'cexp' feature is supported and defined in usrinclude,
    // the compiler should not produce a compile error for this line
#ifdef cexp
    printf("Hello World\n");
#else
    printf("The `cexp` feature is not available or defined in the `usrinclude` section of the compiler.\n");
#endif

    return 0;
}
