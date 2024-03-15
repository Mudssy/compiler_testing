
#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr __attribute__((malloc));
    ptr = malloc(10 * sizeof(int));

    if (ptr == NULL) {
        perror("Memory not allocated");
        return 1;
    } else {
        printf("Memory successfully allocated using clang's malloc attribute.\n");
        free(ptr);
        return 0;
    }
}
