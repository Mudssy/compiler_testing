
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
