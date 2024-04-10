
#include <stdio.h>

void __attribute__((noinline)) test_function() {
    asm volatile (""); 
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

// Test case only needs to call the test function once in the main function.
