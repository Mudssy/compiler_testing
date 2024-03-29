
#include <stdio.h>

void __attribute__((noinline)) foo() {
    printf("Hello from foo!\n");
}

int main() {
    int i;
    for (i = 0; i < 10; ++i) {
        foo();
    }
    return 0;
}
