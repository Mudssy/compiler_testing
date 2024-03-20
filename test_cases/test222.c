
#include <stdio.h>

int main() {
    float x = 123.456; // Decimal
    printf("%f\n", x); // Prints in decimal format
    
    #ifdef CLANG_COMPILER
        float y = (float)0x7b.edcp; // Hexadecimal 
        printf("%a\n", y); // Prints in hexadecimal scientific format
    #elif GCC_COMPILER
        float z = 123.456f; // Decimal with explicit suffix 'f' for float type
        printf("%.3f\n", z); // Prints 3 decimal places only 
    #else
        puts("No suitable compiler defined");
    #endif
    
    return 0;
}
