
#include <stdio.h>

int main() {
    int result;
    
    __asm__("movl $3, %eax;"   // Move immediate value 3 to register EAX
            "movl $4, %ecx;"   // Move immediate value 4 to register ECX
            "addl %ecx, %eax;" // Add value in ECX to EAX (result is stored in EAX)
            :"=a"(result)      // Output operand: result = EAX
            :                 // Input operands: none
            :"%eax", "%ecx");  // Clobbered registers: EAX, ECX
    
    printf("The result is %d\n", result);
    
    return 0;
}
