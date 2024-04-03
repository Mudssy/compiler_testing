
#include <stdio.h>
#ifdef _PROFILE // Check if profiling is enabled 
    #include "profiling_instr.c"
#endif

int main(void) {
    int num_reports = 0; // Default value in case of absence of profile library
    
    #ifdef _PROFILE
        num_reports = __llvm_profile_get_num_reports();
    #endif

    printf("Number of reports: %d\n", num_reports);
    return 0;
}
