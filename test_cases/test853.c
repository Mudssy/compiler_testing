
#include <stdio.h>
#include <fenv.h>

int main() {
    feclearexcept(FE_ALL_EXCEPT);
    double a = 0.1;
    double b = 3.4e38;
    double c = a * b;
    
    int excepts = fetestexcept(FE_OVERFLOW | FE_INVALID);
    
    if (excepts & FE_OVERFLOW) {
        printf("Overflow occurred\n");
    } else if (excepts & FE_INVALID) {
        printf("Invalid operation occurred\n");
    } else {
        printf("No exceptions, result: %f\n", c);
    }
    
    return 0;
}
