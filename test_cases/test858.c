
#include <stdio.h>

int main() {
    const char *message = "Hello from inline assembly!";
    
    asm("mov $4, %eax\n"  // write syscall number for sys_write (4) to eax
        "mov $1, %ebx\n"  // write file descriptor 1 (stdout) to ebx
        "lea message(%rip), %ecx\n"  // load address of message into ecx
        "mov $20, %edx\n"  // length of string is 20 chars
        "int $0x80\n"  // perform syscall
        : // no output operands
        : // no input operands
    );
    
    return 0;
}
