
#include <stdio.h>

int main() {
    int x = 5;  // Constant propagation (x is now known at compile-time)
    int y = x * 2;  // Constant folding (y can be determined at compile-time)
    
    printf("Value of y: %d\n", y);

    return 0;  // Ensures the function returns a value
}
