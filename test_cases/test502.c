
#include <stdio.h>

__attribute__((no_sanitize("address")))
void foo() {
    printf("Hello, world!\n");
}

int main() {
    foo();
    return 0;
}
