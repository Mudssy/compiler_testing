
#include <stdio.h>
#include <fenv.h>

int main() {
    fenv_t env;
    int excepts = FE_DIVBYZERO | FE_INVALID;
    
    // Save the current floating-point environment
    if (fegetenv(&env) != 0) {
        printf("Could not save current floating-point environment.\n");
        return 1;
    }

    // Change the floating-point environment and raise exceptions specified by 'excepts'
    fesetexceptflag(&excepts, FE_ALL_EXCEPT);
    
    printf("FE_DIVBYZERO and FE_INVALID exceptions have been raised.\n");

    // Restore previous floating-point environment
    if (feupdateenv(&env) != 0) {
        printf("Could not restore previous floating-point environment.\n");
        return 1;
    }

    printf("The floating-point exceptions have been restored to their original state.\n");
    
    return 0;
}
