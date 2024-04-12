
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an integer
    int *p = (int*) malloc(sizeof(int));
    
    if(p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    // Assign a value to the allocated memory
    *p = 42;

    // Print the initial value
    printf("Initial value: %d\n", *p);

    // Reallocate memory for an integer
    p = (int*) realloc(p, sizeof(int) * 2);
    
    if(p == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    
    // Assign a value to the newly allocated memory
    *(p + 1) = 24;
    
    // Print the updated values
    printf("Updated values: %d, %d\n", *p, *(p + 1));

    // Free allocated memory
    free(p);

    return 0;
}
