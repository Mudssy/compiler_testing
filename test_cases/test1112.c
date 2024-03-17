
#include <stdio.h>

int main() {
    int arr[10];
    printf("Size of integer: %zu\n", sizeof(int));
    printf("Size of array: %zu\n", sizeof(arr));
    printf("Size of pointer to integer: %zu\n", sizeof(int*));
    return 0;
}
