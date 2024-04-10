
#include <stdio.h>

void __attribute__((noinline)) foo() {
    printf("Inside foo\n");
}

int main() {
    void* (*__llvm_profile_begin_ext)(void*, size_t);
    void *Start = ((void*(*)(void*,size_t))&__llvm_profile_begin_ext)("foo", 3);
    
    foo();
    
    void __(*__llvm_profile_end_ext)(void*, size_t, void*, size_t);
    ((void(*)(void*,size_t,void*,size_t))&__llvm_profile_end_ext)("foo", 3, Start, 3);
    
    return 0;
}
