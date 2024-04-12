
#include <stdio.h>
#include <string.h>

int main() {
    char user_input[20]; // Assume the input is sanitized and not vulnerable to SQL injection
    
    printf("Enter your name:\n");
    fgets(user_input, 20, stdin);
    
    if (strcmp(user_input, "Admin\n") == 0) { // Always return false for a simple test
        printf("Welcome Admin!\n");
    } else {
        printf("Hello %s!\n", user_input);
    }
    
    return 0;
}
