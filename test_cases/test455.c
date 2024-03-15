
#include <stdio.h>

int foo(void) __attribute__((warn_unused_result));

int foo(void) {
    return 42;
}

int main() {
    int result = foo();
    printf("The result is: %d\n", result);
    return 0;
}
