
#include <stdio.h>

int main() {
    char *msg = "Hello, World!";
    int len = 13;
    
    asm volatile (  // Volatile is used to prevent compiler optimizations
        "mov $4, %%eax\n\t"   // system call number for write (SYS_WRITE)
        "mov $1, %%ebx\n\t"   // file descriptor (STDOUT)
        "lea msg(%%rip), %%ecx\n\t"  // pointer to message
        "mov len, %%edx\n\t"  // length of message
        "int $0x80\n\t"   // call kernel
        :  // no output operands
        :  // input operands (defined before colon)
          [msg] "c"(msg), [len] "r"(len)
    );
    
    return 0;
}
