
#include <stdio.h>
#include <fenv.h>

int main() {
    fexcept_t flagp;

    // Set exception trapping masks and clear all exception flags
    fexcept_t excepts = FE_ALL_EXCEPT & ~FE_INVALID;
    fesetexceptflag(&excepts, FE_ALL_EXCEPT);
    
    // Test divide by zero to trigger a floating point exception
    float a = 1.0f, b = 0.0f, result;
    result = a / b; 

    // Check if any exceptions have been set
    fegetexceptflag(&flagp, FE_ALL_EXCEPT);
    if (flagp & FE_DIVBYZERO) {
        printf("Division by zero exception raised\n");
    }
    
    return 0;
}
