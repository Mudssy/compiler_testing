
#include <stdio.h>

void __attribute__((weak)) hiddenFunction() {
    printf("This function should not be called.\n");
}

int main(void) {
    if (__builtin_available(macOS 10.15, *)) {
        unsigned long features = __llvm_libc_compiler_features();
        // Check for binary format serialization feature:
        if ((features & (1 << 16))) {
            printf("Binary format serialization is supported.\n");
        } else {
            printf("Binary format serialization is not supported.\n");
        }
    } else {
        printf("The __llvm_libc_compiler_features function is not available on this system.\n");
    }

    return 0;
}
