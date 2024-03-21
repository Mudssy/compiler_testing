
#include <stdio.h>

int main() {
    printf("Testing llvmlibRemarks\n");
    
    // Example 1: This is a feature that requires certain language dialects. Try to access this feature, e.g., C++ attribute 'carries_dependency'.
    #pragma clang attribute push(__attribute__((carries_dependency)), apply_to = any(function))
    void exampleFunction() {}
    #pragma clang attribute pop
    
    // Example 2: This is an extension feature. Try to access this feature, e.g., C++ attribute 'target'.
    __attribute__((target("avx"))) int exampleTarget = 0;

    return 0;
}
