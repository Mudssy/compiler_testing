
#include <stdio.h>
#include <fenv.h>

int main() {
    int excepts;
    fexcept_t flagp;
    
    /* Perform a fegetexceptflag operation, and check if it throws no exceptions */
    excepts = FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID;
    printf("Current exception raising flags: 0x%.2X\n", fegetexcept());
    
    /* If flag is set, print the corresponding message */
    if (fegetexceptflag(&flagp, excepts) == 0) {
        if(fetestexcept(FE_DIVBYZERO)) printf("Divide by zero exception occurred\n");
        if(fetestexcept(FE_INEXACT)) printf("Inexact exception occurred\n");
        if(fetestexcept(FE_UNDERFLOW)) printf("Underflow exception occurred\n");
        if(fetestexcept(FE_OVERFLOW)) printf("Overflow exception occurred\n");
        if(fetestexcept(FE_INVALID)) printf("Invalid operation exception occurred\n");
    } else {
        printf("Cannot get the exceptions flags because function is not supported by compiler.\n");
    }
    
    return 0;
}
