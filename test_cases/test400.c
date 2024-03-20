
#include <stdio.h>

int main(void) {
    // Define and initialize an integer array
    int arr[5] = {1, 2, 3, 4, 5};

    // Get the size of the array using sizeof() operator
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Print the elements of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
