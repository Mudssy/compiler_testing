
#include <stdio.h>

int main() {
    int sum = 0;
    
    // Test case 1: Basic loop with no transformations
    for(int i=0; i<5; i++) {
        sum += i;
    }
    printf("Sum from basic loop: %d\n", sum);

    // Reset sum to test other cases
    sum = 0;

    // Test case 2: Loop with transformations
    for(int i=5; i<10; i++) {
        if (i%2 == 0) continue;   // This line should be removed during optimization
        sum += i;
    }
    printf("Sum from loop with transformations: %d\n", sum);

    return 0;
}
