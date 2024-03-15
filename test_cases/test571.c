
#include <stdio.h>

int main() {
    unsigned int a = 10;
    unsigned int b = 20;
    unsigned int result;
    
    result = a | b; // Bitwise OR
    printf("Bitwise OR of %u and %u: %u\n", a, b, result);

    result = a & b; // Bitwise AND
    printf("Bitwise AND of %u and %u: %u\n", a, b, result);

    result = a ^ b; // Bitwise XOR
    printf("Bitwise XOR of %u and %u: %u\n", a, b, result);

    result = ~a; // Bitwise NOT
    printf("Bitwise NOT of %u: %u\n", a, result);

    result = a << 2; // Bitwise Left Shift
    printf("Left shift of %u by 2 positions: %u\n", a, result);

    result = b >> 2; // Bitwise Right Shift
    printf("Right shift of %u by 2 positions: %u\n", b, result);

    return 0;
}
