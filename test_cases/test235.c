
#include <stdio.h>

int main() {
    _Bool boolVal = 1;
    _Complex float complexVal = 3.0 + 2.0 * __I__;
    _Imaginary float imaginaryVal = 2.0 * __I__;
    
    printf("_Bool value: %d\n", boolVal);
    printf("_Complex value: %.1f + %.1fi\n", creal(complexVal), cimag(complexVal));
    printf("_Imaginary value: %.1fi\n", imaginaryVal);
    
    return 0;
}
