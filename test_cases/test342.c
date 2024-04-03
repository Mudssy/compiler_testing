
#include <stdio.h>

int main() {
    unsigned char originalNumber = 0xF0; // Binary: 11110000
    
    unsigned char result = (originalNumber >> 4) | (originalNumber << 4);
    
    printf("Original number: %x\n", originalNumber);
    printf("After right shift by one bit: %x\n", result);
    
    return 0;
}
