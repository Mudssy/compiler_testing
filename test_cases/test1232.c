
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;  // integer pointer
    int limit = 5;  // number of elements to allocate

    ptr = (int*)malloc(limit * sizeof(*ptr));  // dynamic memory allocation
    
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);  // exit program, no memory allocated
    } else {
        for (int i = 0; i < limit; ++i) {
            ptr[i] = i + 1;  // assign value to each element of the array
        }
        printf("Using malloc:\n");
        for(int i = 0; i < limit; ++i) {
            printf("%d ", ptr[i]);  // print elements of allocated memory
        }
        free(ptr);  // deallocate memory
    }
    
    return 0;
}
