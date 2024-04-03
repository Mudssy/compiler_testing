
#include <stdio.h>

void __llvm_profile_initialize_file(void);
void __llvm_profile_set_filename(char*);
void __llvm_profile_register_write_file_atexit(void);
void __llvm_profile_write_file(void);

int main() {
    int i = 0;
    __llvm_profile_initialize_file();
    __llvm_profile_set_filename("default.profraw");
    __llvm_profile_register_write_file_atexit();

    for(i=0; i<10; i++) {
        if (__llvmlibProfileData[i] > 5) {
            printf("Hello World\n");
        } else {
            // Do nothing.
        }
    }

    __llvm_profile_write_file();
    
    return 0;
}
