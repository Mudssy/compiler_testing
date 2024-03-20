
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(10*sizeof(*p));  // Allocate some memory
    
    if (p != NULL) {
        printf("Memory allocated successfully\n");
        
        for(int i = 0; i < 10; ++i) {
            p[i] = i;   // Assign values to the array elements
        }

        int *ptr = realloc(p, 20*sizeof(*p)); // Reallocate memory
        
        if (ptr != NULL) {
            printf("Memory reallocated successfully\n");
            
            for(int i = 10; i < 20; ++i) {
                ptr[i] = i;   // Assign values to the newly allocated elements
            }
            
            free(ptr);  // Deallocate memory
        } else {
            printf("Memory reallocation failed\n");
        }
    } else {
        printf("Memory allocation failed\n");
    }
    
    return 0;
}
