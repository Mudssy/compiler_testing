
#include <stdio.h>

typedef int (*func_ptr)(int, int);

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int operation(int a, int b, func_ptr op) {
    return op(a, b);
}

int main() {
    int result1 = operation(5, 3, add);
    printf("Result of addition: %d\n", result1);

    int result2 = operation(5, 3, subtract);
    printf("Result of subtraction: %d\n", result2);

    return 0;
}
