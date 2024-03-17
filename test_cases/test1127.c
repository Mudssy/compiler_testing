
#include <stdio.h>

int main(void) {
    int n = 5; // Change this value to test with different lengths
    int arr[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}
