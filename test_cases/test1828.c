
#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i <= 10; ++i) {  // This loop goes beyond the array bounds
        arr[i] = i * i;
    }
    
    printf("Array: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
