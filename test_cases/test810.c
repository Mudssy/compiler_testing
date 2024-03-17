
#include <stdio.h>

#define llvmunittests 1

int main() {
    #if defined(llvmunittests) && (llvmunittests == 1)
        printf("Conditional Compilation feature is supported.\n");
    #else
        printf("Conditional Compilation feature is not supported.\n");
    #endif

    return 0;
}
