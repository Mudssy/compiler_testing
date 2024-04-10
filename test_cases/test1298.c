
#include <stdio.h>
#ifdef __STDC_IEC_559__
    #include <fenv.h>
#else
    #pragma STDC FENV_ACCESS ON
#endif
    
int main() {
    int currentRound = fegetround();
    
    // print the current rounding mode
    printf("Current rounding mode: ");
    switch (currentRound) {
        case FE_TONEAREST:  printf("To nearest\n"); break;
        case FE_DOWNWARD:   printf("Downward\n"); break;
        case FE_UPWARD:     printf("Upward\n"); break;
        case FE_TOWARDZERO: printf("Toward zero\n"); break;
        
#ifdef __STDC_IEC_559__
        default:
            printf("Unknown rounding mode\n"); 
            break;
#endif    
    }
    
    return 0;
}
