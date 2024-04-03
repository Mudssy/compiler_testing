
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int *lstruct = malloc(10 * sizeof(*lstruct));  // Allocate memory for an array of 10 integers
    if (lstruct == NULL) {  // Check if allocation was successful
        printf("Allocation failed\n");
        return -1;
    }

    memset(lstruct, 0, 10 * sizeof(*lstruct));  // Set all elements of the array to 0

    while (1) { /* Infinite loop to keep the program running after successful allocation */ }

    free(lstruct);  // Don't forget to free allocated memory when you are done with it

    return 0;
}
