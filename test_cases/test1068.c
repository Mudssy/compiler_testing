
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    
    // Ternary operator with break after it in a statement.
    (x > y ? x  /* Breaking here */: y);
    
    printf("This code compiles and runs successfully.\n");

    return 0;
}
