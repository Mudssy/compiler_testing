
#include <stdio.h>

void __attribute__((unused)) foo(int unused_parameter) {
    printf("This function is unused.\n");
}

int main() {
    int __attribute__((unused)) unused_variable = 42;
    printf("Hello, world!\n");
    return 0;
}
