
#include <stdio.h>
#ifdef __clang__
#pragma clang loop vectorize(enable)
#endif
int main() {
    int i;
    for (i = 0; i < 10; ++i) {
        printf("Vectorized Loop Output: %d\n", i);
    }
    return 0;
}
