
#include <stdio.h>

void compress(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("Compressing index %d\n", i);
    }
}

int main() {
    const int SIZE1 = 1000000; // Large enough to cause a stack overflow on some systems
    const int SIZE2 = 5000000; // Even larger, deliberately causing a failure
    
    printf("Starting first test case with size %d\n", SIZE1);
    int arr1[SIZE1];
    compress(arr1, sizeof(arr1) / sizeof(int));

    printf("Starting second test case with size %d\n", SIZE2);
    int arr2[SIZE2];
    compress(arr2, sizeof(arr2) / sizeof(int));

    return 0;
}
