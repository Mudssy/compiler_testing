
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int*)malloc(5 * sizeof(int)); // Allocate memory for 5 integers

    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Return a non-zero value to indicate an error occurred
    } else {
        printf("Memory allocated successfully\n");
    }
    
    // Free the memory when you're done using it
    free(array);

    return 0;
}
