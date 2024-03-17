
#include <stdio.h>

void foo() __attribute__((always_inline));

void foo() {
    asm ("mov $60, %eax\n" // syscall number for exit
         "xor %ebx, %ebx\n" // exit code 0
         "int $0x80"); // invoke the kernel
}

void bar() {
    asm("nop"); // no operation to test loop unrolling
}

void baz() {
    int i;
    for (i = 0; i < 100; ++i) {
        bar();
    }
}

int main() {
    printf("Hello, world!\n");
    foo(); // will not return here because of the exit syscall
    printf("This line will never be reached.\n");
    baz();
    return 0;
}
