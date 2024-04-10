
#include <stdlib.h>
#define NUM_ELEMENTS 100

int main() {
    int *arr = (int*) malloc(NUM_ELEMENTS * sizeof(int)); // memory allocation and typecasting
    
    if (arr == NULL) { // check for successful memory allocation
        printf("Memory not allocated.\n");
        exit(0); 
    } else { 
        for (size_t i = 0; i < NUM_ELEMENTS; ++i){ // setting elements to zero
            arr[i] = 0;
        }

        // free memory
        free(arr);
    }
    
    return 0;
}
