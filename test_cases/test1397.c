
#include <stdio.h>
#include "llvm-c/kaleidoscope.h"

int main(void) {
    int result = __llvm_profile_merge_from_buffer("prof.profraw");
    if (!result) {
        printf("Merged profiling data successfully.\n");
    } else {
        printf("Failed to merge profiling data: %d\n", result);
    }
    return 0;
}
