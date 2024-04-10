
#include <fenv.h>
#include <stdio.h>

int main() {
    feclearexcept(FE_ALL_EXCEPT); // Clear all floating-point exception flags

    float a = 10.0;
    float b = -5.0;
    float c = a / b;

    if (fetestexcept(FE_OVERFLOW)) {
        printf("Overflow detected\n");
    } else {
        printf("Result: %f\n", c);
    }
    
    return 0;
}
