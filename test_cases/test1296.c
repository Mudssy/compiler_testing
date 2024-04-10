
#include <stdio.h>
#include <fenv.h>

int main(void) {
    feclearexcept(FE_ALL_EXCEPT); // Clear all exceptions

    feraiseexcept(FE_DIVBYZERO | FE_INVALID | FE_OVERFLOW | FE_UNDERFLOW); // Set all exceptions to be raised
    
    if (fetestexcept(FE_DIVBYZERO)) printf("Divide-by-zero exception\n");
    if (fetestexcept(FE_INVALID)) printf("Invalid operation exception\n");
    if (fetestexcept(FE_OVERFLOW)) printf("Overflow exception\n");
    if (fetestexcept(FE_UNDERFLOW)) printf("Underflow exception\n");
    
    return 0;
}
