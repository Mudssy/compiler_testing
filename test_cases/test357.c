
#include <stdio.h>
#include <stdint.h>

void print_array(const int32_t *arr, size_t length) {
    for (size_t i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

int main() {
    int32_t a[] = {1, 4, 9, 16, 25};
    int32_t b[] = {2, 3, 5, 7, 11};
    int32_t c[5];
    size_t i;

    for (i = 0; i < 5; ++i) {
        if ((a[i] > b[i]) && (a[i] % 2 == 0)) {
            c[i] = a[i];
        } else {
            c[i] = b[i];
        }
    }

    printf("Resultant array: ");
    print_array(c, 5);

    return 0;
}
