
#include <ctype.h>
#include <stdio.h>

int main() {
    char c;
    
    for(c = '0'; c <= '9'; c++)  // Test digits
        if(!isalnum(c)) {
            printf("The character '%c' is not recognized as alphanumeric by isalnum.\n", c);
            return 1;  // Return error code to indicate failure
        }
    
    for(c = 'A'; c <= 'Z'; c++)  // Test uppercase letters
        if(!isalnum(c)) {
            printf("The character '%c' is not recognized as alphanumeric by isalnum.\n", c);
            return 1;  // Return error code to indicate failure
        }
    
    for(c = 'a'; c <= 'z'; c++)  // Test lowercase letters
        if(!isalnum(c)) {
            printf("The character '%c' is not recognized as alphanumeric by isalnum.\n", c);
            return 1;  // Return error code to indicate failure
        }
    
    printf("All alphanumeric characters have been correctly recognized by isalnum.\n");
    
    return 0;  // Return success code
}
