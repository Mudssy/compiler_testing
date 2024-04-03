
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int a1 = 0, a2 = 0; // Variable declarations
    
    void *p1 = malloc(sizeof(a1));  // Allocate memory for first variable
    if (p1 == NULL) { 
        printf("Memory allocation failed\n");
        return -1; // Exit program if memory allocation fails
    }
    
    void *p2 = malloc(sizeof(a2));  // Allocate memory for second variable
    if (p2 == NULL) { 
        printf("Memory allocation failed\n");
        free(p1);
        return -1; // Exit program if memory allocation fails
    }
    
    *(int*) p1 = a1; // Assign value to first variable
    *(int*) p2 = a2; // Assign value to second variable
    
    printf("a1: %d\n", *(int*) p1);  // Print the first variable
    printf("a2: %d\n", *(int*) p2);  // Print the second variable
    
    free(p1); // Free memory allocated for first variable
    free(p2); // Free memory allocated for second variable
    
    return 0; 
}
