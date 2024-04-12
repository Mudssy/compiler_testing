
#include <stdio.h>

void __attribute__((optimize("O3"))) func() {
    printf("Hello, World!\n");
}

int main(void) {
    for (volatile int i = 0; i < 1000000; i++); // To ensure the function is not inlined by the compiler and optimized.
    func();
    return 0;
}
