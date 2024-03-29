
#include <stdio.h>

// Define a macro that concatenates two tokens using ## and converts it to a string literal using #
#define STRINGIFY(x) #x
#define TOKEN_CONCAT(x, y) x ## y

int main() {
    int ab = 10;
    printf("%s\n", STRINGIFY(TOKEN_CONCAT(a, b)));  // Print "ab"
    
    int num = TOKEN_CONCAT(5, 6);  // Concatenate the tokens to create a number
    printf("%d\n", num);  // Prints 56

    return 0;
}
