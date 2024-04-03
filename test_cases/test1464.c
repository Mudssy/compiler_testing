
#include <stdio.h>

int main() {
    int number = 123456;  // decimal literal
    printf("Decimal Literal: %d\n", number);  
    
    number = 0xabcdef;  // hexadecimal literal
    printf("Hexadecimal Literal: %#x\n", number);  
    
    number = 01234567;  // octal literal
    printf("Octal Literal: %#o\n", number);  
    
    return 0;  // Make sure the program returns to avoid running forever.
}
