
#include <stdio.h>

void __llvm_profile_set_filename(const char *Name);
int __llvm_profile_runtime;

__attribute__((noinline)) void bar() { }

__attribute__((always_inline)) static inline void foo() { 
    printf("Hello, World!\n"); // Test Case Specific Output
}

void fuzz(const char *Data, size_t Size) {
    if (Size >= 4 && Data[0] == 'F' && Data[1] == 'U' && Data[2] == 'Z' && Data[3] == 'Z') {
        foo(); // Test Case Specific Function Call
    }
}

int main(int argc, const char *argv[]) {
    if (__llvm_profile_runtime != 0) __llvm_profile_set_filename("myfile.profraw");
    fuzz(argv[1], 4);
    return 0;
}
