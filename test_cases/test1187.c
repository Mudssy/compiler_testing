
#include <ctype.h>
#include <stdio.h>

int main() {
    char test_chars[] = {'a', 'Z', '5', '\0'};  // Test characters, includes lowercase and uppercase alphabets, a non-alphabet character and null terminator.
    
    for (int i = 0; test_chars[i] != '\0'; ++i) {
        printf("Character: %c\n", test_chars[i]);   // Print the tested character.
        
        if (isalpha(test_chars[i])) {  // Check if the character is alphabetic.
            printf("%c is an alphabet.\n", test_chars[i]);   
        } else {
            printf("%c is not an alphabet.\n", test_chars[i]);  
        }
        
        printf("------\n");  // Just to separate the results for easier reading.
    }
    
    return 0;
}
