
#include <stdio.h>

int main() {
    int a = 10;  // 1010 in binary
    int b = 7;   // 0111 in binary

    printf("a = %d, b = %d\n", a, b);
    
    int and_result = a & b;
    printf("Bitwise AND: %d\n", and_result);

    int or_result = a | b;
    printf("Bitwise OR: %d\n", or_result);

    int xor_result = a ^ b;
    printf("Bitwise XOR: %d\n", xor_result);

    return 0;
}
