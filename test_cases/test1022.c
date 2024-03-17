
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    // Testing function call arguments breaking feature
    int result = sum(10, 20, 30); // This should cause an error or warning in the compiler
    printf("Result: %d\n", result);
    return 0;
}
