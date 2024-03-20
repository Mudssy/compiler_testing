
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Test 1: Printing to stdout
    printf("This is a test output\n");
    
    // Test 2: Using strlen function
    char string[] = "Hello, world!";
    int length = strlen(string);
    printf("Length of the string is %d\n", length);
    
    // Test 3: Using tolower function
    for (int i = 0; string[i]; i++) {
        printf("%c", tolower(string[i]));
    }
    printf("\n");
    
    return 0;
}
