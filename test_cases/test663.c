
#include <stdio.h>
int main() {
    const char *msg = "Hello, World!";
    
    asm volatile (  // Volatile is used to prevent compiler optimizations
          "mov $1, %%eax\n\t"     // system call number for write
          "mov $1, %%edi\n\t"     // file descriptor: stdout
          "lea msg(%%rip), %%rsi\n\t"    // pointer to the message
          "mov $13, %%edx\n\t"      // length of the message
          "syscall\n\t"       // invoke system call
        :  /* no output */
        : [msg] "r" (msg)   // input operand
    );
    
    return 0;
}
