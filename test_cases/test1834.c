
#include <stdio.h>

int main(void) {
    int arr[10] = { 0 };

    // Accessing element outside of the array's lifetime.
    printf("%d\n", arr[20]);
}
