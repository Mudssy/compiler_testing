
#include <stdio.h>

int main() {
    const int x = 5;
    printf("Value of x: %d\n", x);
    
    // Attempt to change the value of 'x' which will result in a compiler error
    x = 10; 

    return 0;
}
