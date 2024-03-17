
#include <stdio.h>

int add_func(int a, int b) __attribute__((optimize("O3")));

int add_func(int a, int b) {
    return a + b;
}

int main() {
    printf("Result of addition: %d\n", add_func(5, 10));
    return 0;
}
