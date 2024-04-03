
#include <stdio.h>

static inline int add(int a, int b) {  // Inline function in C99
    return a + b;
}

int main() {
    printf("Sum: %d\n", add(5, 10));
    return 0;
}
