
#include <stdio.h>
#include <fenv.h>

int main(void) {
    // Testing if the FENV_ACCESS feature is supported
    int round_mode = fegetround();
    printf("Current rounding mode: %d\n", round_mode);
    
    // Changing rounding mode and checking again
    fesetround(FE_UPWARD);
    round_mode = fegetround();
    printf("New rounding mode: %d\n", round_mode);
    
    return 0;
}
