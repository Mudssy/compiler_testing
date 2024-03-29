
#include <stdio.h>
#include <fenv.h>

int main(void) {
    fenv_t env;
    int result = fegetenv(&env);
    
    if (result == 0) {
        printf("Rounding mode: %d\n", fegetround());
    } else {
        printf("Failed to get the floating-point environment.\n");
    }
    
    return 0;
}
