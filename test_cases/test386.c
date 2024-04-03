
#include <stdio.h>

int main() {
    const int x = 5;
    printf("Value of x: %d\n", x);
    
    // The line below will result in a compiler error because 'x' is declared as constant (const).
    // x = 10; 

    return 0;
}
