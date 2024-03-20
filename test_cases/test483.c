
#include <stdio.h>

void __attribute__((noinline)) foo() {
    printf("Inside noinline function\n");
}

int main() {
    foo();
    return 0;
}
