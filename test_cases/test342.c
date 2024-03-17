
#include <stdio.h>
#include <inttypes.h>

int main() {
    uint32_t x = 1; // Your input number here
    int shift = 1;  // The number of positions to rotate
    
    printf("Before rotating: %" PRIu32 "\n", x);
    
    // Rotate the bits by performing a bitwise OR operation with the shifted bits from the left side
    uint32_t rotated = (x >> shift) | (x << (32 - shift)); 
    
    printf("After rotating: %" PRIu32 "\n", rotated);
    
    return 0;
}
