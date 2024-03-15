
#include <stdio.h>

int main() {
    unsigned int a = 10;
    unsigned int b = 3;

    printf("Bitwise AND: %u\n", a & b);
    printf("Bitwise OR: %u\n", a | b);
    printf("Bitwise XOR: %u\n", a ^ b);
    printf("Bitwise NOT (~a): %u\n", ~a);
    printf("Bitwise Left Shift (a << 2): %u\n", a << 2);
    printf("Bitwise Right Shift (a >> 1): %u\n", a >> 1);

    return 0;
}
