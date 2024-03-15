
#include <stdio.h>
#include "llvmutils/PerfectShuffle.h"

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int result[8];

    PerfectShuffle(arr1, arr2, 4, 4, result);

    for (int i = 0; i < 8; ++i) {
        printf("%d ", result[i]);
    }

    return 0;
}
