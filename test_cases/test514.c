
#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    unsigned long size = sizeof(array); // Size in bytes of array.
    printf("Size of the array: %lu\n", size);
    return 0;
}
