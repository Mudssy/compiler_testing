
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = malloc(sizeof(int));
    
    *ptr = 5;  // assign some value to the allocated memory
    printf("Value before free: %d\n", *ptr);
    
    free(ptr);  // deallocate the memory
    printf("After first free, Value is: %d\n", *ptr);
    
    free(ptr);  // try to free the same memory again
    printf("After second free, Value is: %d\n", *ptr);
    
    return 0;
}
