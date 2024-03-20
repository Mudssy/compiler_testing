
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr;
    size_t n = 5; // Test array length

    ptr = (int *)malloc(n * sizeof(int));  // Allocating memory dynamically

    if(ptr == NULL)                     
    {
        printf("Memory not allocated.\n");
        return 0;
    }
  
    for(size_t i = 0; i < n; ++i) 
    {
        ptr[i] = i + 1; // Assign values to the array elements
    }

    printf("The dynamically allocated array is:\n");
    
    for(size_t i = 0; i < n; ++i) 
    {
        printf("%d ", ptr[i]);   // Printing the array elements
    }
   
    free(ptr); // Deallocating memory
    return 0;
}
