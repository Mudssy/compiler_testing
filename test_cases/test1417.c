
#include <stdio.h>
#ifdef __llvm__
void __llvm_profile_initialize_file(void);
int __llvm_profile_write_file(void);
#endif

int main() {
    #ifdef __llvm__
        // Initialize profiling data file.
        __llvm_profile_initialize_file(); 
        // Write the profile data to disk.
        __llvm_profile_write_file(); 
    #endif
    
    #ifdef __llvm_profile
        printf("Profiling Enabled\n");
    #else
        printf("Profiling Disabled\n");
    #endif

    return 0;
}
