
#include <stdlib.h>
#include <string.h>

int main() {
    char *memory = malloc(100); // Allocate some memory
    
    if (memory == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    memset(memory, 0, 100); // Zero out the allocated memory
    
    free(memory); // Free the allocated memory

    printf("Allocation and deallocation successful\n");

    return 0;
}
