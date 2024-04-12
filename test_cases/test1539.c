
#include <stdio.h>

int main() {
    int x = 10;
    int y = ({
        int temp = x; // Statement expression to declare and initialize a variable
        temp *= 2; // Perform some operation on the variable
        temp; // Return value of the statement expression
    });
    
    printf("x: %d\ny: %d\n", x, y); // Output: "x: 10\ny: 20"
    return 0;
}
