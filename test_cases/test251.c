
#include <stdio.h>

int main() {
    unsigned int decimal = 0b1101; // Binary literal with '0b' prefix (Clang only feature)
    printf("Decimal value of binary 1101: %u\n", decimal);
    return 0;
}
