
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    printf("Add: %d\n", calculate(5, 3, add));
    printf("Subtract: %d\n", calculate(5, 3, subtract));
    return 0;
}
