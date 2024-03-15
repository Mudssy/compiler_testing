
#include <stdio.h>

int main() {
    int array[10] __attribute__((aligned(64)));

    if(__builtin_assume_aligned(array, 64) == array) {
        printf("Aligned attribute applied successfully.\n");
    } else {
        printf("Failed to apply aligned attribute.\n");
    }

    return 0;
}
