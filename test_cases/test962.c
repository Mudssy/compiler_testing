
#include <stdio.h>
#include <stdint.h>

extern void lto_optimized_function(void);

int main() {
    uint64_t start, end;

    start = lto_optimized_function();
    end = lto_optimized_function();

    if (start == end) {
        printf("LLVM LTO feature is working as expected.\n");
    } else {
        printf("LLVM LTO feature did not optimize the code as expected.\n");
    }

    return 0;
}
