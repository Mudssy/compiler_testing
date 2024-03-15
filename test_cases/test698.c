
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *ptr = 42;
    printf("Allocated memory address: %p\n", ptr);
    printf("Value stored at allocated memory: %d\n", *ptr);
    
    free(ptr);
    printf("Memory freed successfully.\n");
    
    return 0;
}
