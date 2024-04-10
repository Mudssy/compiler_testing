
#include <stdio.h>
#include <fenv.h>

int main(void) {
    fegetround(); // This function is used to change the rounding mode, which seems to be necessary on some systems according to comments.
    
    fenv_t env;
    int result = fegetenv(&env);
    
    if (result == 0) {
        printf("Rounding mode: %d\n", fegetround());
    } else {
        printf("Failed to get the floating-point environment.\n");
    }
    
    return 0;
}
