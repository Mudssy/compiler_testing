
#include <stdio.h>

void print_array(int arr[5]) {
    printf("Printing array elements:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print_array(arr);
    return 0;
}
