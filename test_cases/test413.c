
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));
    if (!ptr) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    *ptr = 42;
    free(ptr);

    ptr = NULL;
    printf("Value: %d\n", *ptr);
    return 0;
}
