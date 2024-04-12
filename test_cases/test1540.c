
#include <stdio.h>
int main() {
    asm("movl $4, %eax\n\t" // The system call number for write is 4 on Linux x86
        "movl $1, %ebx\n\t" // File descriptor 1 is stdout
        "leal (%esp), %ecx\n\t" // Put the address of our string into ecx
        "movl $12, %edx\n\x86" // The length of our string
        :::"eax", "ebx", "ecx", "edx"); // Tell GCC that these registers are clobbered by this inline assembly block
    return 0;
}
