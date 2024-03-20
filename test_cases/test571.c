
#include <stdio.h>

int main() {
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    if ((a & b) == 1) {
        printf("AND operation failed\n");
        return 1;
    }
    
    if ((a | b) != 7) {
        printf("OR operation failed\n");
        return 1;
    }
    
    if ((a ^ b) != 6) {
        printf("XOR operation failed\n");
        return 1;
    }
    
    if ((~a & 0xF) != (0xF^5)) { // assuming int is 4 bytes
        printf("NOT operation failed\n");
        return 1;
    }
    
    if ((b << 2) != 12) {
        printf("Left Shift operation failed\n");
        return 1;
    }
    
    if ((a >> 1) != 2) {
        printf("Right Shift operation failed\n");
        return 1;
    }
    
    printf("All tests passed\n");
    return 0;
}
