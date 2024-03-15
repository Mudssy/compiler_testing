
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int *ptr_to_array = &arr[0];

    for (int i = 0; i < len; i++) {
        printf("Element %d: %d\n", i, *(ptr_to_array + i));
    }

    return 0;
}
