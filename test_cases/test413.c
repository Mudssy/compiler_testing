
#include <stdlib.h>
#include <stdio.h>

int main() {
    // Allocate memory dynamically
    int* ptr = (int*)malloc(sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory not allocated\n"); 
        return -1;
    } else {
        *ptr = 10; // Assign a value to the memory
        
        // Print initial assigned value
        printf("Initial assigned value: %d\n", *ptr);
        
        // Free the allocated memory right away
        free(ptr); 
        
        // Trying to access memory after it was freed. This should result in undefined behavior, so we won't print ptr but check if it still has the same value.
        printf("Value after free(): %d\n", *ptr); 
    }
    
    return 0;
}
