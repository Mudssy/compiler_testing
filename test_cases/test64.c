
#include <stdio.h>

int main(void) {
    // Test case 1: Printing a single word string literal
    printf("%s\n", "Hello");

    // Test case 2: Printing a multi-word string literal
    printf("\"%s\"\n", "Multi Word String Literal!");
    
    // Test case 3: Converting a single character to string
    char c = 'A';
    printf("%c\n", c);

    // Test case 4: Checking if the function handles null strings correctly
    char* str = NULL;
    printf("\"%s\"\n", str);
    
    return 0;
}
