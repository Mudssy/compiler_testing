
#include <stdio.h>
#include <fenv.h>
#pragma STDC FENV_ACCESS ON

void except_handler(int signum) {
    printf("Floating point exception occured\n");
}

int main() {
    fexcept_t except;
    
    feraiseexcept(FE_DIVBYZERO);  // Raises a floating-point divide by zero exception

    fegetexceptflag(&except, FE_ALL_EXCEPT);
    if (except.divbyzero) {  
        printf("Divide by Zero Exception Occurred\n");
    } else {
         printf("No Floating point exception occured\n");
    }
    
    return 0;
}
