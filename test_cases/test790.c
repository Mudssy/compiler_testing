
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
    printf("Before assignment: a = %d, b = %d\n", a, b);
    
    a += b; // Using the += operator
    b -= a; // Using the -= operator
    a *= 2; // Using the *= operator
    b /= 2; // Using the /= operator
    a %= 3; // Using the %= operator
    
    printf("After assignment: a = %d, b = %d\n", a, b);
    
    return 0;
}
