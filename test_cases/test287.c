
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i <= 10; i++) {
        ptr[i] = i;
        printf("ptr[%d]: %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}
