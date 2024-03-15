
#include <stdio.h>

void update(int *restrict a, int *restrict b) {
    for (int i = 0; i < 10; ++i) {
        a[i] += b[i];
    }
}

int main() {
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    
    update(arr1, arr2);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
