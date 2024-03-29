
#include <stdio.h>
#include <fenv.h>

int main(void) {
    feclearexcept(FE_ALL_EXCEPT);
    
    // Set up floating-point exceptions
    fesetround(FE_TOWARDZERO);
    feraiseexcept(FE_UNDERFLOW | FE_INEXACT);

    printf("Testing feholdexcept feature for usrinclude section of the compiler.\n");
    
    // Perform a floating-point operation that can trigger an underflow exception
    float x = 1.0f;
    float y = x / 2.0f;
    printf("Result: %f\n", y);
    
    return 0;
}
