
#include <stdio.h>
#include <fenv.h>

int main() {
    feclearexcept(FE_ALL_EXCEPT); // Clear all floating-point exceptions
    
    int a = 5;
    int b = 0;
    int result = a / b;  // This will generate an FE_DIVBYZERO exception

    if (fetestexcept(FE_DIVBYZERO)) { // Check for division by zero exception
        printf("Divide by zero exception caught\n");
    } else {
        printf("No divide by zero exception occurred\n");
    }
    
    return 0;
}
