
#include <stdio.h>
#include <fenv.h>

int main() {
    feraiseexcept(FE_ALL_EXCEPT);  // raise all floating-point exceptions
    
    int currentRounding = fegetround();  // get the current rounding mode

    printf("Current rounding mode: ");
    switch (currentRounding) {
        case FE_TONEAREST:
            printf("FE_TONEAREST\n");
            break;
        case FE_DOWNWARD:
            printf("FE_DOWNWARD\n");
            break;
        case FE_UPWARD:
            printf("FE_UPWARD\n");
            break;
        case FE_TOWARDZERO:
            printf("FE_TOWARDZERO\n");
            break;
    }
    
    fesetround(FE_DOWNWARD);  // set the rounding mode to downward

    currentRounding = fegetround();

    printf("New rounding mode: ");
    switch (currentRounding) {
        case FE_TONEAREST:
            printf("FE_TONEAREST\n");
            break;
        case FE_DOWNWARD:
            printf("FE_DOWNWARD\n");
            break;
        case FE_UPWARD:
            printf("FE_UPWARD\n");
            break;
        case FE_TOWARDZERO:
            printf("FE_TOWARDZERO\n");
            break;
    }
    
    return 0;
}
