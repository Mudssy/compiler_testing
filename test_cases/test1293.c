
#include <stdio.h>
#include <fenv.h>  // Required to use floating point exceptions

int main() {
    float one = 1.0, zero = 0.0;
    
    feclearexcept(FE_ALL_EXCEPT);  // Clear all exceptions

    one = one / zero;  // This will cause a FE_DIVBYZERO exception

    if (fetestexcept(FE_DIVBYZERO)) {
        printf("Division by zero exception occurred\n");
     } else {
         printf("No exceptions occurred\n");
     }
     
     return 0;
}
