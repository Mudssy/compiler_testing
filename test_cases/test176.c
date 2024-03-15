
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<n; ++i) {
        printf("Element at index %d is %d\n", i, arr[i]);
    }

    return 0;
}
