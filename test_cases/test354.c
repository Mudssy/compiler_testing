
#include <stdio.h>
#include "intrinsics.h"

int main(void) {
    // Define vectors
    __ispc_vector4i v = {1, 2, 3, 4};
    
    // Perform a perfect shuffle operation
    __ispc_vector4i result = __ispc_shuffle((__ispc_vector4i){0, 1, 2, 3}, v);

    printf("Shuffled vector: (%d, %d, %d, %d)\n", result.x, result.y, result.z, result.w);
    
    return 0;
}
