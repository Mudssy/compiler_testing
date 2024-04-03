
#include <stdio.h>

void __attribute__((weak)) hiddenFunction() {
    printf("This function should not be called.\n");
}

int main(void) {
    #if defined(__llvm__) && (__clang_major__ >= 10 || (__clang_major__ == 9 && __clang_minor__ >= 0))
        unsigned long features = __llvm_libc_compiler_features();
        
        // Check for binary format serialization feature. It should be present in libstdc++ since gcc 10 and libcxxabi >= v5.0.
        if ((features & (1ULL << 3)) == 0) {
            printf("Binary format serialization is not available\n");
            return -1;
        }
    #endif
    
    // This test case does not call 'hiddenFunction' as it should be a part of the hidden API.
    // Thus, we expect no output from this function.
    
    return 0;
}
