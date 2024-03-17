
#include <stdio.h>

int main() {
    int i;
    double result[4] = {0};
    double a[4] = {1, 2, 3, 4};
    double b[4] = {5, 6, 7, 8};

#pragma clang loop vectorize(enable) interleave_count(4)
    for (i = 0; i < 4; ++i) {
        result[i] = a[i] * b[i];
    }
    
    printf("Vectorized and loop transformed output: ");
    for (i = 0; i < 4; ++i) {
        printf("%f ", result[i]);
    }
    
    return 0;
}
