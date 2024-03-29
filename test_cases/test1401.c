
#include <stdio.h>
#include <profile_data.h>

void __llvm_profile_initialize_file(void) { printf("__llvm_profile_initialize_file\n"); }
void __llvm_profile_write_file(void)     { printf("__llvm_profile_write_file\n"); }

int main() 
{
    // Initialize Profile Data
    __llvm_profile_initialize_file();
    
    // Write sample-based profile data to file
    __llvm_profile_write_file();

    return 0;
}
