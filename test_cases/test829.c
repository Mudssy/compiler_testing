
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*) calloc(10, sizeof(int));
    
    if (arr == NULL) {
        printf("calloc failed\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        arr[i] = i * 2;
    }

    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    
    return 0;
}
