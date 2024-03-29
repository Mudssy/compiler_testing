
#include <fenv.h>
#include <stdio.h>

int main() {
    feclearexcept(FE_ALL_EXCEPT);
    
    /* This line will raise a division by zero exception */
    int result = 10 / 0;

    if (fetestexcept(FE_DIVBYZERO)) {
        printf("Exception(s) occurred.\n");
    } else {
        printf("No exceptions set.\n");
    }
    
    return 0;
}
