
#include <stdio.h>
#include <fenv.h>

int main() {
    fexcept_t flagp;

    // Set exception trapping masks and clear all exception flags
    fexcept_t excepts = FE_ALL_EXCEPT & ~FE_INEXACT;
    fesetexceptflag(&excepts, FE_ALL_EXCEPT);

    if(fegetexceptflag(&flagp, FE_ALL_EXCEPT) == 0 && flagp != 0) {
        printf("Exception flags not properly cleared\n");
    } else {
        printf("All exception flags are properly cleared\n");
    }

    return 0;
}
