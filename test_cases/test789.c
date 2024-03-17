
#include <stdio.h>

int main() {
    unsigned int a = 5;
    unsigned int b = 10;

    printf("Bitwise AND of %u and %u: %u\n", a, b, (a & b));
    printf("Bitwise OR of %u and %u: %u\n", a, b, (a | b));
    printf("Bitwise XOR of %u and %u: %u\n", a, b, (a ^ b));
    printf("Bitwise NOT of %u: %u\n", a, ~a);
    printf("Bitwise LEFT SHIFT of %u by 1 position: %u\n", a, (a << 1));
    printf("Bitwise RIGHT SHIFT of %u by 1 position: %u\n", a, (a >> 1));

    return 0;
}
