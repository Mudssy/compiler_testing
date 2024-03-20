
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr;

    for(ptr = &arr[0]; ptr <= &arr[4]; ptr++) {
        printf("%d ", *ptr);
    }

    return 0;
}
