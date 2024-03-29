
#include <stdio.h>
#include <fenv.h>

int main(void) {
    double a = 10.5;
    double b = 20.5;
    
    // Set rounding direction to nearest and print the result
    fesetround(FE_TONEAREST);
    printf("Rounding to nearest: %f\n", a/b);
  
    // Set rounding direction to downwards and print the result
    fesetround(FE_DOWNWARD);
    printf("Rounding downwards: %f\n", a/b);
  
    // Set rounding direction to upwards and print the result
    fesetround(FE_UPWARD);
    printf("Rounding upwards: %f\n", a/b);
  
    // Set rounding direction to towards zero and print the result
    fesetround(FE_TOWARDZERO);
    printf("Rounding towards zero: %f\n", a/b);

    return 0;
}
