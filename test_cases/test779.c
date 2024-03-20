
#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Store elements into the array
    for (i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    printf("Array elements: ");
    
    // Print elements of the array
    for (i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
