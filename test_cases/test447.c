
#include <stdio.h>

int main(void) {
    __fp16 var = 3.5; // define a variable with type __fp16
    
    if(_Generic(var, __fp16: 1, default: 0)) {
        printf("The compiler supports half-precision floating point numbers.\n");
    } else {
        printf("The compiler does not support half-precision floating point numbers.\n");
    }
    
    return 0; // Return 0 to indicate successful execution
}
