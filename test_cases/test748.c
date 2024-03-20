
#include <stdio.h>

__attribute__((returns_nonnull)) char* __llvm_libc_stub_function(); // declaration for stub function

int main() {
    char *str = __llvm_libc_stub_function();  // using the stub function
    
    if(str) {   // check if the returned value is not null
        printf("Function returned non-null string: %s\n", str);
    } else {
        printf("Function returned null pointer\n");
    }

    return 0;
}
