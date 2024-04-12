
#include <stdio.h>

int main() {
    // Assignment statement
    int x = 5;
    
    // Arithmetic expression
    printf("Sum of 3 and 4 = %d\n", 3 + 4);

    // Relational expression
    if(x > 0) {
        printf("x is positive");
    } else {
        printf("x is not positive");
    }
    
    // Logical expression
    int y = 1;
    if(x == 5 && y == 1) {
        printf("\nBoth expressions are true");
    }

    return 0;
}
