
#include <stdio.h>

void perfectShuffle(int arr[], int length) {
    for (int i = 0; i < length / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, length);
    perfectShuffle(arr, length);
    printArray(arr, length);

    return 0;
}
