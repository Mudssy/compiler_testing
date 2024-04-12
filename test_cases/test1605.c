
#include <stdio.h>

int main() {
    int sum = 0;

    // This loop will be optimized by the compiler
    for(int i=1; i<=100; ++i) {
        sum += i;
    }
    
    printf("Sum from 1 to 100: %d\n", sum);
    return 0;
}
