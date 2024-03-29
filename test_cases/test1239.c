
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int key = 3;

    qsort(array, size, sizeof(int), compare);
    
    printf("Array: ");
    print_array(array, size);

    void* result = bsearch(&key, array, size, sizeof(int), compare);

    if (result != NULL) {
        printf("Found %d\n", *(int*)result);
    } else {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
