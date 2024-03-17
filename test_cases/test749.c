
#include <stdio.h>

void foo(int a, ...) __attribute__((sentinel));

void foo(int a, ...) {
    printf("The sentinel attribute is supported.\n");
}

int main() {
    foo(10, "Hello", "World");
    return 0;
}
