
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *) malloc(sizeof(int));
    if (!ptr) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    printf("Address of ptr: %p\n", ptr);

    // Initialize memory with known values
    for (size_t i = 0; i < sizeof(int) / sizeof(char); i++) {
        ((char *)ptr)[i] = (char)(i + 1);
    }

    // Access memory to trigger the Memory Sanitizer
    printf("Value of *ptr: %d\n", *ptr);

    free(ptr);
    return 0;
}
