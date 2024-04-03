
#include <stdio.h>

int main(void) {
    int result;
    
     asm ("movl $3, %%eax\n\t"   // Move immediate value 3 into register EAX
          "movl $2, %%ebx\n\t"   // Move immediate value 2 into register EBX
          "addl %%ebx, %%eax\n\t"   // Add the value in EBX to EAX (3+2)
          : "=a" (result)           // Output is assigned to result variable. Use =r if running on a compiler that uses the AT&T syntax
         );
     printf("%d\n", result);  // Should print '5'
    return 0;
}
