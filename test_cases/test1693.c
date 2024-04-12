
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    double *ptr;

    printf("Enter total number of elements: ");
    scanf("%d", &n);
    
    // Memory allocation
    ptr = (double *)calloc(n, sizeof(double));
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        printf("Memory successfully allocated using calloc.\n");
        
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%f, ", ptr[i]);
        }
    }

    free(ptr);

    return 0;
}
