
#include <stdio.h>

int main(void) {
    // Integer Literal
    int decimalInt = 10; 
    printf("Decimal Int: %d\n", decimalInt);
    
    int octalInt = 012;  
    printf("Octal Int: %o\n", octalInt);
    
    int hexadecimalInt = 0xA;
    printf("Hexadecimal Int: %x\n", hexadecimalInt);
    
    // Floating-point Literal
    float floatingPointNum = 3.14f;  
    printf("Floating Point Num: %f\n", floatingPointNum);
    
    double doubleNum = 2.7e3;
    printf("Double Num: %lf\n", doubleNum);
    
    // Character Literal
    char character = 'A'; 
    printf("Character: %c\n", character);
    
    // String Literal
    char string[] = "Hello, World!";  
    printf("String: %s\n", string);
    
    return 0;
}
