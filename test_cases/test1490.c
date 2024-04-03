
#include <stdio.h>

int main() {
    unsigned int a = 0xAAAA; // 101010... in binary
    unsigned int b = 0x5555; // 010101... in binary
    
    printf("Bitwise AND: %u\n", a & b); // prints out 0
    printf("Bitwise OR: %u\n", a | b); // prints out 65535 (or FFFF in hex)
    printf("Bitwise XOR: %u\n", a ^ b); // prints out 65535 (or FFFF in hex)
    printf("Bitwise NOT of a: %u\n", ~a); // prints out the bit-wise inverse (FFFF...)
    printf("Left shift by one place: %u\n", a << 1); // prints out AAAA0 (or 55550 in hex)
    printf("Right shift by one place: %u\n", b >> 1); // prints out 2730 (or AF0 in hex)
    
    return 0;
}
