
#include <stdio.h>

int main() {
    auto int x = 10; // 'auto' keyword is used for automatic detection of variable type in C99 or later
    static int y = -5; // 'static' keyword is used to keep the variable alive for the entire duration of the program
    
    if (x > y) {
        printf("The value of x is greater than y.\n");
    } else {
        printf("The value of y is greater than x or both are equal.\n");
    }

    return 0; // Returning zero indicates successful termination of the program.
}
