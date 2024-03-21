
#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    
    printf("The value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);
    printf("The value of z is: %d\n", z);
    
    printf("x + y + z = %d\n", x+y+z); // binary expression test
    printf("x * (y + z) = %d\n", x*(y+z)); // ternary expression test with parentheses
    
    return 0;
}
