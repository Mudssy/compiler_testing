
#include <stdio.h>
#include <fenv.h>

int main(void) {
    feraiseexcept(FE_ALL_EXCEPT); // Set all exceptions to be raised
    
    if (fetestexcept(FE_DIVBYZERO)) printf("Division by zero exception detected.\n");
    if (fetestexcept(FE_INVALID)) printf("Invalid operation exception detected.\n");
    if (fetestexcept(FE_OVERFLOW)) printf("Overflow exception detected.\n");
    if (fetestexcept(FE_UNDERFLOW)) printf("Underflow exception detected.\n");
    
    return 0; // Program ran successfully
}
