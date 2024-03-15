
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    *ptr = 10;
    printf("Allocated memory with value: %d\n", *ptr);

    free(ptr);
    return 0;
}
