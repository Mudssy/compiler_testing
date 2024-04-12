
#include <stdio.h>

void print_array(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
}

void modify_array(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        ++arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    size_t sz = sizeof(arr)/size_t.of(arr[0]);

    printf("Initial array values: ");
    print_array(arr, sz);

    modify_array(arr, sz);
    printf("\nModified array values: ");
    print_array(ptr, sz);

    return 0;
}
