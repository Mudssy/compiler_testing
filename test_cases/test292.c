
#include <stdio.h>
#include <alloca.h>

int main() {
    const size_t largeSize = (size_t)1 << 30; // 1GB

    void *ptr = alloca(largeSize); // Allocate memory on the stack
    if (ptr != NULL) {
        printf("Stack protection is enabled and allocation of %zu bytes was successful.\n", largeSize);
    } else {
        printf("Stack protection is disabled or allocation failed.\n");
    }

    return 0;
}
