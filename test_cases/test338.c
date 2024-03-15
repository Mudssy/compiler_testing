
#include <stdio.h>

int main() {
    int array[4] = {10, 20, 30, 40};
    int perm[4] = {0, 0, 0, 0};
    
    for (int i = 0; i < 4; ++i) {
        perm[i] = i % 2 * 2 + i / 2;
    }

    int result[4];
    for (int i = 0; i < 4; ++i) {
        result[i] = array[perm[i]];
    }

    printf("Result: %d, %d, %d, %d\n", result[0], result[1], result[2], result[3]);

    return 0;
}
