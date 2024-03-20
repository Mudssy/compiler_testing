
#include <stdio.h>

int main() {
    // Testing Single Dimension Arrays
    
    int arr[5];
    int i;

    for(i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }

    printf("Array elements: ");

    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
