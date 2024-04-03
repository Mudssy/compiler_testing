
#include <stdio.h>

int main() {
    // GNU: __attribute__((malloc))
    int* ptr = malloc(sizeof(int));
    *ptr = 42;
    printf("Malloc test (GNU): %d\n", *ptr);
    free(ptr);

    return 0;
}
