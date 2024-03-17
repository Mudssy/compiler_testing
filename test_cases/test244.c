
#include <stdio.h>

void print_array(int n, int arr[n]) {
    printf("Array of size %d: ", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 5;  // This is a variable length array.
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = i * i;
    }

    print_array(n, arr);

    return 0;
}
