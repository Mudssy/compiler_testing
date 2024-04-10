
#include <stdio.h>

// Initialize PGO section
extern void __llvm_profile_init_section();
// Write PGO data to a file
extern int  __llvm_profile_write_file(void);

int main() {
    // The function must be called before profile data is written.
    __llvm_profile_init_section();
    
    printf("Running program\n");

    // ... Your application code here ...

    // Write PGO data to a file named default.profraw in the current directory
    int Ret = __llvm_profile_write_file();
    if (Ret) {
        fprintf(stderr, "Error: Failed to write profiling data!\n");
        return Ret;
    }
    
    printf("Done running program\n");
    return 0;
}
