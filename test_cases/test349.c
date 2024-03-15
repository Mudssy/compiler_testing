
#include <stdio.h>
#include <stdint.h>

void print_shuffled(uint32_t x, uint32_t y) {
    uint32_t result = (x & 0xFFFF) | ((y << 16) & 0xFFFF0000);
    printf("Shuffled value: %u\n", result);
}

int main() {
    uint32_t x = 0xAABBCCDD;
    uint32_t y = 0x11223344;

    print_shuffled(x, y);
    return 0;
}
