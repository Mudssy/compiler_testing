
#include <stdio.h>

void __attribute__((noinline)) test_function() {
    asm volatile (""); // Empty instruction to enforce memory access order.
}

int main(void) {
    __builtin_expect(test_function(), 0); // This tells the compiler that this function call might not return
    printf("Hello, World!\n");
    return 0;
}
