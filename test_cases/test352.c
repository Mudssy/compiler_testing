
#include <stdio.h>
#include <assert.h>

void shuffle(int *arr1, int len1, int *arr2, int len2, int *result) {
    assert(len1 + len2 <= 50);  // adjust the size according to your needs
    for (int i = 0; i < len1 + len2; ++i) {
        if (i % 2 == 0 && i / 2 < len1) {
            result[i] = arr1[i/2];
        } else {
            int j = (i - 1) / 2;
            if (j >= len2) --j;
            result[i] = arr2[j];
        }
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    int result[50];  // adjust the size according to your needs
    
    shuffle(arr1, len1, arr2, len2, result);
    
    for (int i = 0; i < len1 + len2; ++i) {
        printf("%d ", result[i]);
    }
    
    return 0;
}
