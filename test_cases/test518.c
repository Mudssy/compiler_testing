
#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    printf("Original array: %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);

    __builtin_sanitize_cfi_attributes(array);

    printf("Modified array after CFI Attributes sanitization: %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);

    return 0;
}
