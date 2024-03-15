
#include <stdio.h>

struct test_bitfield {
    unsigned int a: 1;
    unsigned int b: 2;
    unsigned int c: 3;
};

int main() {
    struct test_bitfield bitfields;
    bitfields.a = 1;
    bitfields.b = 2;
    bitfields.c = 5;
    
    printf("Bitfields values: a=%u b=%u c=%u\n", bitfields.a, bitfields.b, bitfields.c);
    return 0;
}
