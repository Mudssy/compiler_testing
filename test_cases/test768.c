
#include <stdio.h>

int main() {
    // Testing integer constants
    int decimalConst = 10;  // Decimal constant
    printf("Decimal constant: %d\n", decimalConst);
    
    int octalConst = 012;   // Octal constant
    printf("Octal constant: %o\n", octalConst);
    
    int hexadecimalConst = 0xA;  // Hexadecimal constant
    printf("Hexadecimal constant: %x\n", hexadecimalConst);
    
    // Testing floating point constants
    float floatConst = 3.14;   // Float constant
    printf("Float constant: %f\n", floatConst);
    
    double doubleConst = 2.71828;  // Double constant
    printf("Double constant: %lf\n", doubleConst);
    
    return 0;
}
