
#include <stdio.h>
#include <stdbool.h>

void rotate(int array[], int n) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    }
}

int main() {
    int arr[] = {5, 8, 3, 4, 2};
    const int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before rotation: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    rotate(arr, n);
    
    printf("After rotation: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}Here's a simple C program that sorts an array in ascending order using the bubble sort algorithm. This program also prints the array elements before and after sorting. 

