
#include <stdio.h>

void __attribute__((noinline)) test_function() {
    asm volatile (""); 
}

int _Builtin_expect(test_function(), 0);  // Added declaration for Builtin_expect function

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
