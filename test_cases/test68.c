
#include <stdio.h>

int main() {
    unsigned int x = 1;
    unsigned int y = 3;
    
    printf("x is %d, y is %d\n", x, y);

    // Bitwise AND operation
    unsigned int andResult = x & y;
    printf("Bitwise AND result: %d\n", andResult);

    // Bitwise OR operation
    unsigned int orResult = x | y;
    printf("Bitwise OR result: %d\n", orResult);

    // Bitwise XOR operation
    unsigned int xorResult = x ^ y;
    printf("Bitwise XOR result: %d\n", xorResult);

    // Bitwise NOT operation for 'x'
    unsigned int notX = ~x;
    printf("Bitwise NOT for 'x': %u\n", notX);
    
    return 0;
}
