
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    printf("Result of AND operation: %d\n", a & b & c);
    printf("Result of OR operation: %d\n", a | b | c);
    printf("Result of XOR operation: %d\n", a ^ b ^ c);
    printf("Result of NOT operation: %d\n", ~a);

    return 0;
}
