
#include <stdio.h>

int main() {
    int i;

#pragma clang loop vectorize(enable)
    for (i = 0; i < 10; i++) {
        printf("Vectorized iteration: %d\n", i);
    }

#pragma clang loop vectorize(disable)
    for (i = 0; i < 10; i++) {
        printf("Non-vectorized iteration: %d\n", i);
    }

    return 0;
}
