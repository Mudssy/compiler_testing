
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr;
    ptr = arr;

    printf("Element at ptr: %d\n", *ptr);
    ptr++; // Pointer Arithmetic
    printf("Element after incrementing ptr: %d\n", *ptr);

    return 0;
}
