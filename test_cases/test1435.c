
#include <stdio.h>

void foo() __attribute__((noinline));
void bar() __attribute__((always_inline));

void foo() {
    printf("Inside foo\n");
}

void bar() {
    printf("Inside bar\n");
}

int main(void) {
    foo();
    bar();
    return 0;
}
