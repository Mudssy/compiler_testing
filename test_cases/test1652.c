
#include <stdio.h>

typedef union {
    unsigned char bytes[4];
    unsigned int value;
} Data;

int main() {
    Data d;
    d.value = 0xAABBCCDD;  // This is machine-dependent as it depends on the byte order

    printf("Bytes: ");
    for (int i = 0; i < 4; ++i) {
        printf("%X ", d.bytes[i]);
    }
    printf("\nValue: %X\n", d.value);

    return 0;
}
