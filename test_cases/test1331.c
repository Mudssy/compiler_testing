
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Memory allocation & deallocation with malloc/free
    int* array = (int*) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        array[i] = i + 1;
    }

    free(array);  // Deallocation

    // Basic variables and conditional check
    int a = 5, b = 10;
    
    if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is not less than b\n");
    }

    return 0;
}
