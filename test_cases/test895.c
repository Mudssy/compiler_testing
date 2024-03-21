
#include <stdio.h>

int main() {
    const char *str = NULL;
    
    // Attempt to access llvmlibRemarks, which will cause a segfault if it's not supported by the compiler
    asm volatile(
        "call 0xf\n"      // This should cause a segfault if llvmlibRemarks is not supported.
        : "=a"(str)       // Output operand, which will be set to the value of eax register after call instruction
    );
    
    printf("llvmlibRemarks %s been supported.\n", str ? "has" : "hasn't");
    
    return 0;
}
