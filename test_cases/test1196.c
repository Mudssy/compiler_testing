
#include <ctype.h>
#include <stdio.h>

int main() {
    char test_char = 'A'; // Change this character for different tests

    if(isupper(test_char)) {
        printf("The character '%c' is uppercase.\n", test_char);
    } else {
        printf("The character '%c' is not uppercase.\n", test_char);
    }
    
    return 0; // Ensure the program returns
}
