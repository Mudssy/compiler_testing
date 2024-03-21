
#include <stdio.h>

int main() {
    int x = 10; // Define some variables
    int y = 20;
    printf("Before: %d, %d\n", x, y);
    
    // Some unnecessary computations to fool the optimizer into eliminating x and y
    for (int i=0; i<1000000; ++i) {
        if (i % 2 == 0) x = y * i;
        else y = x / i;
    }
    
    printf("After: %d, %d\n", x, y); // These variables should have the same value before and after
}
