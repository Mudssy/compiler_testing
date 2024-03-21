
#include <stdio.h>

int main() {
    const int MAX = 100;
    int sum = 0;
    
    // Loop unrolling by the compiler - summing integers from 1 to MAX
    for (int i=0; i<MAX/4*4; i+=4) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
        sum += i + 3;
    }

    // The remainder of the loop is executed in the original form by the compiler
    for (int i = MAX / 4 * 4; i < MAX; ++i) {
        sum += i;
    }
    
    printf("The sum from 1 to %d is: %d\n", MAX, sum);
    
    return 0;
}
