
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));  // allocate memory for an integer
    if (p == NULL) {              // check if the allocation was successful
        printf("Memory could not be allocated.\n");
        return 1;                 // exit with error code
    }
    
    *p = 5;                       // store a value in the allocated memory
    printf("%d\n", *p);           // print the stored value (should be "5")
    free(p);                      // free the allocated memory
    
    return 0;                     // exit with success code
}
