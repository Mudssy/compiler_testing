
#include <stdio.h>

int __attribute__((const)) multiply(int a, int b) {
    return a * b;
}

void test_multiply() {
    printf("Testing multiply\n");
    int result = multiply(2, 3); // Expected output: 6
    printf("Result: %d\n", result);
}

int main() {
    test_multiply();
    return 0;
}
