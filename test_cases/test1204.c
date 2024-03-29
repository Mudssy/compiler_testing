
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];
    
    // Initialize the strings for testing purposes
    strcpy(str1, "Hello ");
    strcpy(str2, "World!");
    
    // Test strncat using some examples
    printf("Before concatenation: %s\n", str1);
    
    strncat(str1, str2, 3);
    
    printf("After concatenation of first 3 characters of str2 to str1: %s\n", str1);

    return 0; // Making sure the program does not run forever
}
