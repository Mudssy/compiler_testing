
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;  // Size of the array

    // Allocating memory using malloc
    int *m = (int*) malloc(n * sizeof(int));
    if (m == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    for (int i = 0; i < n; ++i) {
        m[i] = i * 2;
    }

    // Printing the values in the array using malloc'd memory
    printf("Values stored using malloc:\n");
    for(int i=0; i<n; i++){
        printf("%d ", m[i]);
    }
    printf("\n");
    
    // Allocating memory using calloc
    int *c = (int*) calloc(n, sizeof(int));
    if (c == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < n; ++i) {
        c[i] = i * 2;
    }
    
    // Printing the values in the array using calloc'd memory
    printf("Values stored using calloc:\n");
    for(int i=0; i<n; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    
    // Deallocating memory
    free(m); 
    free(c);
}
