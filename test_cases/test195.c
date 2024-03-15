
#include <stdio.h>
#include <assert.h>

int foo(int a, int b) {
    // Add contract condition using assert (C11 standard)
    assert(a > 0 && b > 0);

    return a + b;
}

int main() {
    int a = 5;
    int b = 3;

    printf("Result: %d\n", foo(a, b));

    return 0;
}
