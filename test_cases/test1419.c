
#include <stdio.h>

void __llvm_profile_initialize_file(void);
void __llvm_profile_set_filename(const char *Name);
int __llvm_profile_write_file(void);

int main() {
    /* Initialize file writer for value profiling. */
    __llvm_profile_initialize_file();
    
    /* Set the name of the profile dump file. */
    __llvm_profile_set_filename("default.profraw");
    
    /* Write out the profile data now. */
    __llvm_profile_write_file();
    
    return 0;
}
