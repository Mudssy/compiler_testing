
#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 4;
    int i, j;
    
    // Allocate memory for 2D array
    int **arr = (int**) calloc(rows, sizeof(int*));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    for(i = 0; i < rows; i++){
        arr[i] = (int*) calloc(cols, sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed\n");
            return -1;
        }
    }
    
    // Fill 2D array with unique values
    int value = 1;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            arr[i][j] = value++;
        }
    }
    
    // Print 2D array
    printf("The 2D array:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Free memory
    for(i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
