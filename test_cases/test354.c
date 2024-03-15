
#include <stdio.h>
#include <stdint.h>

void print_shuffle(uint32_t shuffled) {
    printf("Shuffled value: %08X\n", shuffled);
}

int main() {
    uint32_t a = 0x12345678;
    uint32_t b = 0x9ABCDEF0;

    uint32_t c = (a & 0xFFFF0000) | (b & 0x0000FFFF);

    print_shuffle(c);

    return 0;
}
