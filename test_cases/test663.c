
#include <stdio.h>

int main() {
    asm ( "mov $4, %eax\n\t"   // system call number for write (SYS_WRITE)
          "mov $1, %ebx\n\t"   // file descriptor (STDOUT)
          "mov $msg, %ecx\n\t" // message to write
          "mov $len, %edx\n\t" // message length
          "int $0x80\n\t"      // call kernel
          :
          : "S"(msg), "d"(len)   // tell compiler about msg and len
        );

    return 0;
}
