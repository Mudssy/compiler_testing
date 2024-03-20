
#include <stdio.h>

int main() {
    // Test integer assignment
    int x = 5;
    printf("Value of x: %d\n", x);
    
    // Test array element assignment
    int arr[10];
    for (int i=0; i<10; ++i) {
        arr[i] = i+1;
    }
    printf("Array elements: ");
    for (int i=0; i<10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
