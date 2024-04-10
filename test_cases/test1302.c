
#include <stdio.h>
#include <fenv.h>

int main() {
    fexcept_t flag, newFlag;
    
    /* Save the current floating-point environment. */
    fegetenv(&flag);
    
    // Do something that may cause a floating point exception ...
    int x = 10 / 0;  // This will trigger division by zero exception
    
    /* Test for FE_DIVBYZERO exception */
    if(fetestexcept(FE_DIVBYZERO)) {
        printf("Division by Zero Exception Occurred\n");
        
        /* Clear the floating point status flags */
        feclearexcept(FE_ALL_EXCEPT); 
    }
    
    // Perform some operations that may cause exceptions here...
    
    /* Save the current environment, which is now without any exception. */
    fegetenv(&newFlag);
    
    /* Update the current environment with newFlag (now without any exception) */
    fesetenv(&flag);
    
    return 0;
}
