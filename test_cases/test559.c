
#include <stdio.h>

int main() {
    int i = 0;
    /* Declare and initialize a vector of integers */
    int vec[4] = {1, 2, 3, 4};

    /* Use SIMD pragma to enable vectorization for the loop */
#pragma clang loop vectorize(enable)
    for (i = 0; i < 4; ++i) {
        vec[i] *= 2;
    }

    /* Print out the modified values */
    for (i = 0; i < 4; ++i) {
        printf("vec[%d] = %d\n", i, vec[i]);
    }

    return 0;
}
