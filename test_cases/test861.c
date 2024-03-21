
#include <stdio.h>

void __llvm_profile_initialize_file(void);
void __llvm_profile_set_filename(char *);
void __llvm_profile_write_buffer(char *);

int main() {
    // initialize the profile file name with a string 
    char fileName[] = "program.profraw";
    __llvm_profile_initialize_file();
    
    // set the filename to program.profraw
    __llvm_profile_set_filename(fileName);
    
    // write out the profile data
    char buffer[8192];
    __llvm_profile_write_buffer(buffer);

    printf("Profile data written to %s\n", fileName);
    
    return 0;
}
