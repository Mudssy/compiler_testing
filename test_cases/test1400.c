
#include <stdio.h>

void __llvm_profile_initialize_file(void);
void __llvm_profile_set_filename(char *);
__attribute__((noinline)) void func1() { printf("Inside func1\n"); }
__attribute__((noinline)) void func2() { printf("Inside func2\n"); }

int main() {
    __llvm_profile_initialize_file();
    __llvm_profile_set_filename("test.profraw");
    
    for(int i = 0; i < 10; ++i) {
        if (i % 2 == 0) func1();
        else func2();
    }
}
