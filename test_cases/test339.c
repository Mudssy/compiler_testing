
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse_order_shuffle(int *arr, int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int arr[] = {0, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);

    reverse_order_shuffle(arr, n);

    printf("Array after reverse order shuffle: ");
    print_array(arr, n);

    return 0;
}
