
#include <stdio.h>

void __attribute__((always_inline)) foo(void) {
    printf("Hello, World!\n");
}

int main() {
    foo();
    return 0;
}
