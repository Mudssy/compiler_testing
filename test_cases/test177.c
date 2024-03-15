
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    
    ptr = &arr[0];

    for (int i = 0; i < 5; i++) {
        printf("Value at arr[%d]: %d\n", i, *(ptr+i));
    }

    return 0;
}
