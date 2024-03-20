
#include <stdio.h>

int main() {
    int x = 10; // initialize variable x with value 10
    int y = ++x * 5 / 2 % 3; // use an expression statement to evaluate the expression and assign it to y
    
    printf("The result is: %d\n", y); // print out the result of the expression statement

    return 0; // make sure program returns
}
