
#include <stdio.h>
#include <stddef.h>

#define COMPILER_NAME "LLVMUnitTests"

static_assert(sizeof(size_t) >= sizeof(void*), "Size of size_t is not large enough.");

int main() {
    printf("The compiler '%s' supports static assertions.\n", COMPILER_NAME);
    return 0;
}
