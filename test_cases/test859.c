
#include <stdio.h>

int main(void) {
    int i = 0;
    
    asm volatile (
        "xor %%rcx, %%rcx\n"  // Clear the counter register (rcx)
        ".align 4\n"            // Ensure correct alignment for loop.start
        "1:\n"                  // Start of loop block
        "add $0x02, %%rcx\n"   // Increment counter (rcx) by 2
        "cmp $0xaaaa, %%rcx\n" // Compare with a large number to ensure the loop isn't too short
        "jl 1b\n"              // If less than 0xaaaa, jump back to beginning of loop block
    :                        // No output operands
    :                        // No input operands
    );
    
    __builtin_debugtrap();  // This will cause a breakpoint trap in the debugger. You can see all remarks here.
    
    return 0;
}
