
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    } else {
        *ptr = 42;
        printf("Malloc feature test: The value stored in allocated memory is %d\n", *ptr);
        free(ptr);
    }
    return 0;
}
