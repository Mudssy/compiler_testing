
#include <stdio.h>

int main() {
    int result;
    
    __asm__(
        ".intel_syntax noprefix \n"  // Switch to Intel syntax, no prefixes
        "call $0xf\n"                // Call an address that should cause a segfault if it's not supported.
        : "=a"(result)               // Output operand, which will be set to the value of eax register after call instruction
        :: "%eax"                    // Clobbered registers
    );
    
    printf("llvmlibRemarks %s been supported.\n", result ? "has" : "has not");
    
    return 0;
}
