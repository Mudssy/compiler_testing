
#include <stdio.h>
int main() {
    int a = 5;   // 0101 binary
    int b = 9;   // 1001 binary

    printf("a = %d, b = %d\n", a, b);
    printf("AND: %d\n", a & b);
    printf("OR: %d\n", a | b);
    printf("XOR: %d\n", a ^ b);
    printf("NOT of a: %d\n", ~a);
    printf("LEFT SHIFT (<<): %d\n", a << 2);
    printf("RIGHT SHIFT (>>): %d\n", a >> 2);

    return 0;
}
