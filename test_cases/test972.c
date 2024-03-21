
#include <stdio.h>

int main() {
    const int size = 1024;
    static int a[size], b[size];
    
    // Initialize arrays with some values
    for (int i=0; i<size; ++i)
        a[i] = b[i] = i;
    
    long sum = 0;
    
    #pragma omp simd safelen(16)
    for (int i=0; i<size; ++i) {
        sum += a[i];
        sum += b[i];
    }

    printf("Sum: %ld\n", sum);
    
    return 0;
}
