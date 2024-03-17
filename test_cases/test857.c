
#include <stdio.h>

int main() {
    #pragma optimization_level(0) // Disable optimizations
    int result = 1;
    for (int i = 0; i < 1000; ++i) {
        result *= i + 2;
    }
    printf("Result: %d\n", result);
    
    #pragma optimization_level(3) // Re-enable optimizations
    int optimized_result = 1;
    for (int i = 0; i < 1000; ++i) {
        optimized_result *= i + 2;
    }
    printf("Optimized Result: %d\n", optimized_result);
    
    return 0;
}
