
#include <stdio.h>

int main() {
    unsigned int a = 5;
    unsigned int b = 3;

    printf("Bitwise OR: %u\n", a | b);
    printf("Bitwise AND: %u\n", a & b);
    printf("Bitwise XOR: %u\n", a ^ b);
    printf("Bitwise NOT: %u\n", ~a);
    printf("Bitwise Left Shift: %u\n", a << 2);
    printf("Bitwise Right Shift: %u\n", a >> 1);

    return 0;
}
