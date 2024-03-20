
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    
    // Testing if else statement
    if (x > y)
        printf("x is greater than y\n");
    else
        printf("y is greater than or equal to x\n");
        
    // Testing conditional operator (? :)
    int max = (x > y) ? x : y;
    printf("Maximum of x and y is: %d\n", max);
    
    return 0;
}
