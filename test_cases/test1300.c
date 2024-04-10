
#include <stdio.h>
#include <fenv.h>

int main(void) {
    float a = 123.456, b = 0;

    /* Check if fesetround is available */
    #ifdef FE_TOWARDZERO 
        fesetround(FE_TOWARDZERO);
        printf("Rounding towards zero: %f\n", a/b);
    #else
        printf("Your platform does not support fesetround function.\n");
    #endif
    
    return 0;
}
