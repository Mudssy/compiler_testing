
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, world!";
    char str2[40] = "String manipulation functions in C programming language.";
    
    // Using strcpy function to copy str1 into str2
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // Finding the length of str2 using strlen function
    size_t len = strlen(str2);
    printf("Length of the string: %zu\n", len);
    
    return 0;
}
