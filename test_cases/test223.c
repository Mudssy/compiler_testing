
#include <stdio.h>

int main() {
    // Integer suffixes
    int octal = 012;   // Octal literal
    int hexadecimal = 0xA; // Hexadecimal literal
    
    printf("Octal: %o\n", octal);  // Prints 'Octal: 12'
    printf("Hexadecimal: %x\n\n", hexadecimal);  // Prints 'Hexadecimal: a'

    // Floating-point suffixes
    float f = 1.23f;   // Float literal
    double d = 4.56;   // Double literal
    long double ld = 7.89L;  // Long Double literal
    
    printf("Float: %f\n", f);  // Prints 'Float: 1.230000'
    printf("Double: %lf\n", d); // Prints 'Double: 4.560000'
    printf("Long Double: %Lf\n\n", ld); // Prints 'Long Double: 7.890000'

    
    char str1[] = "Hello";   // String literal
    const char *str2 = "World!";  // Pointer to a string literal
    
    printf("String 1: %s\n", str1);  // Prints 'String 1: Hello'
    printf("String 2: %s\n\n", str2);  // Prints 'String 2: World!'
    
    char c = 'A';   // Character literal
    
    printf("Character: %c\n", c);  // Prints 'Character: A'
    
    return 0;
}
