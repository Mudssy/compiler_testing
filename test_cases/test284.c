
#include <stdio.h>

int main() {
    int result = 0;

    __asm__("movl $3, %eax;"      // move immediate value 3 to register EAX (lower part of RAX)
            "addl $2, %eax;"      // add immediate value 2 to the value in EAX. This will effectively make EAX 5.
            "movl %eax, %edx;":   // move the result from EAX (which is now 5) into EDX.
           "=d" (result):         // output operand: constraint "d" means EDX can be written to.
                                            // The value of %0 will be placed in `result` when this asm statement is done.
           "cc");                  // tell gcc it might affect the flags, and to preserve them across the asm block.

    printf("The result is: %d\n", result);

    return 0;
}
