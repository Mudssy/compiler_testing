
#include <stdio.h>

int main(void) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; ++i) {
        printf("Accessing index %d in the array: %d\n", i, arr[i]);
    }
    return 0;
}
