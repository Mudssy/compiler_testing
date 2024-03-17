
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p = &arr[-1]; // This should trigger an out-of-bounds access error
    printf("%d\n", *p);
    return 0;
}
