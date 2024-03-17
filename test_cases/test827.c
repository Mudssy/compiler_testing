
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    *ptr = 42;
    printf("Allocated memory. Stored value: %d\n", *ptr);
    
    free(ptr);
    ptr = NULL;
    printf("Freed the allocated memory.\n");
    
    return 0;
}
