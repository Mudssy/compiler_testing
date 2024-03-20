
#include <stdio.h>

int main(void) {
    int result;
    
    // Example using gcc syntax
    __asm__("movl $3, %eax\n\t"  // Move immediate value 3 into register EAX
            "movl $2, %ebx\n\t"  // Move immediate value 2 into register EBX
            "addl %ebx, %eax"    // Add the values in registers EBX and EAX
                            : "=a"(result)   // Output: result = EAX
            );
    
    printf("Result is: %d\n", result);  // The output should be '5'

    return 0;
}
