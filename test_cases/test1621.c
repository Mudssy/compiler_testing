
#include <stdio.h>

#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)

__attribute__((always_inline)) inline int functionToOptimize(int a, int b) {
    return a + b;
}

void doWorkWithHighProbability() {
    printf("This path is likely to be taken\n");
}

void doWorkWithLowProbability() {
    printf("This path is unlikely to be taken\n");
}

int main() {
    int a = 5;  // Change these values based on your profiling information
    int b = 10;
    
    if (likely(a + b > 2)) {
        doWorkWithHighProbability();
    } else {
        doWorkWithLowProbability();
    }

    return 0;
}
