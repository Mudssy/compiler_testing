
#include <stdio.h>

int main() {
    int x = 10;
    typeof(x) y = x + 5; // __typeof operator usage
    
    printf("The value of 'y' is: %d\n", y);
    
    return 0; // make sure the program ends with a return statement
}
