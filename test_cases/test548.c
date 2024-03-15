
#include <math.h>
#include <stdio.h>

int main() {
    double x = 0.1;

    printf("FP classification for %f:\n", x);

    if (fpclassify(x) == FP_NAN) {
        printf("Value is NaN\n");
    } else if (fpclassify(x) == FP_INFINITE) {
        printf("Value is Infinite\n");
    } else if (fpclassify(x) == FP_ZERO) {
        printf("Value is Zero\n");
    } else if (fpclassify(x) == FP_SUBNORMAL) {
        printf("Value is Subnormal\n");
    } else if (fpclassify(x) == FP_NORMAL) {
        printf("Value is Normal\n");
    }

    return 0;
}
