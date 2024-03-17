
#include <stdio.h>

int main() {
    const int x = 5;
    // Trying to modify a const qualified variable
    x = 10;
    
    printf("The value of x after trying to modify it: %d\n", x);

    return 0;
}
