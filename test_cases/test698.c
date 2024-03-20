
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int)); // Allocate memory
    
    if (ptr == NULL) { 
        printf("Memory not allocated\n");
        return 0; // Exit program
    }
    else {
       printf("Memory successfully allocated\n");
    }

    *ptr = 10; // Assign value to memory
    printf("Value of ptr: %d\n", *ptr); // Print the value of pointer
    
    free(ptr); // Deallocate memory
    printf("Memory successfully deallocated\n");

    return 0;
}
