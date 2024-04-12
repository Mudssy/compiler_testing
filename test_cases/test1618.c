
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024*1024 // 1MB allocation
int main() {
    char *ptr;
    int i, j;
    
    for(j=0; j<5; j++) { // Try to allocate and deallocate repeatedly
        ptr = (char*)malloc(SIZE); // Allocate memory
        
        if(ptr == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        
        for(i=0; i<SIZE; i++) { // Fill the allocated memory with some data
            ptr[i] = 'A' + (i % 26);
        }
        
        free(ptr); // Deallocate memory
    }
    
    return 0;
}
