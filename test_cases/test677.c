
#include <stdio.h>

int main() {
    int result = 0;
    int iterations = 10;

    for (int i = 0; i < iterations; ++i) {
        result += i * 2;
    }

    printf("Result after loop transformation and unrolling: %d\n", result);
    
    return 0;
}
