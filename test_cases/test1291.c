
#include <stdio.h>
#include <fenv.h>

int main() {
    feclearexcept(FE_ALL_EXCEPT); // Clear all floating-point exceptions

    feraiseexcept(FE_OVERFLOW | FE_DIVBYZERO); 

    if (fetestexcept(FE_OVERFLOW)) {
        printf("Overflow exception occurred.\n");
    }
    
    if (fetestexcept(FE_DIVBYZERO)) {
        printf("Division by zero exception occurred.\n");
    }

    return 0;
}
