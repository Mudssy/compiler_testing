
#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = array;

    for(int i=0; i<5; i++) {
        printf("Value of array[%d]: %d\n", i, array[i]);
        printf("Value of ptr: %d\n", *ptr);
        ptr++;
    }

    return 0;
}
