
#include <stdio.h>

void print_array(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print_array(&arr[0], 5);
    return 0;
}
