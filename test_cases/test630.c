
#include <stdio.h>

struct {
    unsigned int a: 1;
    unsigned int b: 3;
    unsigned int c: 4;
} bit_fields = {0x5, 0x7};

int main() {
    printf("Bit Field Values: a=%u, b=%u, c=%u\n", bit_fields.a, bit_fields.b, bit_fields.c);
    return 0;
}
