
#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(array) / sizeof(array[0]); // find length of the array
    
    for (size_t i = 0; i < len; ++i) {
        printf("Element %zu: %d\n", i, array[i]);
    }
    
    printf("\nRange-based for loop:\n");
    
    // range-based for loop to print elements of the array
    for (int num : array) {
        printf("%d ", num);
    }

    return 0;
}
