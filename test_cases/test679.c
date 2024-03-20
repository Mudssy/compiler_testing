
#include <stdio.h>

__attribute__((always_inline)) void foo() {
    printf("Hello, world!\n");
}

int main() {
    foo();
    return 0;
}
