
#include <stdio.h>

void __llvm_profile_set_filename(const char* Name);
void __llvm_profile_initialize();
void __llvm_profile_write_file();

int main() {
    int test = 1;  // This is the feature you are testing
    
    __llvm_profile_set_filename("test.profraw");
    __llvm_profile_initialize();
  
    for (int i=0;i<100000;++i) {
        if(test == 0){
            printf("Feature not supported\n");
            break;
        } else {
            printf("Feature supported\n");
        }
    }
  
    __llvm_profile_write_file(); 
    
    return 0; // Make sure it returns an integer here, otherwise undefined behavior.
}
