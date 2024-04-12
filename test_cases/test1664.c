
#include <stdio.h>

int main() {
    int x = 4; // 0100 in binary
    int y = 3; // 0011 in binary

    int and_result = x & y;  // 0000 (AND)
    printf("And operation: %d\n", and_result);
    
    int or_result = x | y;   // 0111 (OR)
    printf("Or operation: %d\n", or_result);
    
    int xor_result = x ^ y;  // 0111 (XOR)
    printf("Xor operation: %d\n", xor_result);
    
    int not_x = ~x;         // 1011 (NOT)
    printf("Not of x: %d\n", not_x);
    
    int shift_right = x >> 1; // 0010 (Right Shift by 1)
    printf("Shift right: %d\n", shift_right);
    
    int shift_left = y << 1;  // 0110 (Left Shift by 1)
    printf("Shift left: %d\n", shift_left);
    
    return 0;
}
