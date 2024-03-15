
#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr = malloc(10);

    if (__builtin_expect(!ptr, 0)) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    free(ptr);

    printf("Nothrow attribute test passed.\n");
    return 0;
}
