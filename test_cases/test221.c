
#include <stdio.h>

int main() {
    // Testing decimal integer
    int decimal = 10;
    printf("Decimal: %d\n", decimal);
    
    // Testing octal integer (starts with '0')
    int octal_decimal = 012;
    printf("Octal Decimal: %o\n", octal_decimal);

    // Testing hexadecimal integer (starts with '0x' or '0X')
    int hex_decimal = 0xA;
    printf("Hexadecimal Decimal: %x\n", hex_decimal);
    
    return 0;
}
