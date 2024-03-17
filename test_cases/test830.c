
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*) malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }
    
    int *new_arr = (int*) realloc(arr, 10 * sizeof(int));
    if (new_arr == NULL) {
        free(arr);
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 5; i < 10; ++i) {
        new_arr[i] = i + 1;
    }
    
    for (int i = 0; i < 10; ++i) {
        printf("Element %d: %d\n", i, new_arr[i]);
    }
    
    free(new_arr);
    return 0;
}
