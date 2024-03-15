
#include <stdio.h>

typedef struct {
    int arr[5];
} MyArray;

int main() {
    MyArray array = {{1, 2, 3, 4, 5}};
    for (int i = 0; i < 5; ++i) {
        printf("Element at index %d: %d\n", i, array.arr[i]);
    }
    return 0;
}
