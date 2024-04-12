
#include <stdio.h>

int main() {
    int sum = 0;
    
    // Testing unrolling loop optimizations
    for (int i = 0; i < 1000000; ++i) {
        sum += i;
    }
    
    printf("Sum = %d\n", sum);  // The output should be 499999500000, if it's 0 then loop was not optimized.
    return 0;
}
