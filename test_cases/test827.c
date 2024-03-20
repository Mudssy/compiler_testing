
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(*ptr));  // Dynamically allocated memory for an integer
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;  // Indicate failure
    }
    
    *ptr = 42;  // Store some value in the allocated memory
    printf("Value stored at dynamic memory: %d\n", *ptr);
    free(ptr);  // Free the dynamically allocated memory

    return 0;  // Indicate success
}
