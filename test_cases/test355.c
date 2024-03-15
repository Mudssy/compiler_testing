
#include <stdio.h>
#include <stdint.h>
#include "llvmutils/PerfectShuffle.h"

int main() {
    uint32_t input[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    uint32_t output[8];
    
    llvmutils_PerfectShuffle(input, output);

    for (int i = 0; i < 8; i++) {
        printf("%d ", output[i]);
    }

    return 0;
}
