
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3,};
    printf("Size of array: %lu\n", sizeof(arr) / sizeof(arr[0]));
    return 0;
}
