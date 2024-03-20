
#include <stdlib.h>
#include <stdio.h>

int main() {
    int* ptr = (int*)malloc(10 * sizeof(int)); // Allocate memory using malloc
    
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1; // Return error code
    } else {
        printf("Using malloc attribute\n");
        for (int i = 0; i < 10; ++i) { // Fill the memory with some data
            ptr[i] = i;
        }
        
        for (int i = 0; i < 10; ++i) { // Print the data to see if it was stored correctly
            printf("%d ", ptr[i]);
        }
    }
    
    free(ptr); // Free the allocated memory
  
    return 0; // Return success code
}
