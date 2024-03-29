
#include <stdio.h>

void __attribute__((noinline)) foo() {
    printf("Inside foo\n");
}

int main() {
    // Start profiling
    void *__llvm_profile_begin_ext(void*, size_t);
    void *Start = __llvm_profile_begin_ext((void*)"foo", 3);
    
    foo();
    
    // Stop profiling and merge the profile data
    void __llvm_profile_end_ext(void*, size_t, void*, size_t);
    __llvm_profile_end_ext((void*)"foo", 3, Start, 0);
    
    return 0;
}
