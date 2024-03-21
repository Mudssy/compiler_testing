
#include <stdio.h>
#include <cpuid.h>

int main(void) {
    unsigned int eax, ebx, ecx, edx;
    
    if (__get_cpuid(1, &eax, &ebx, &ecx, &edx)) {
        printf("CPUID supported\n");
        
        // Check for SSE2 support
        if ((edx & bit_SSE2) == bit_SSE2)
            printf("SSE2 support detected\n");
        else
            printf("No SSE2 support detected\n");
    } 
    else {
        printf("CPUID not supported");
    }
    
    return 0;
}
