
#include <stdio.h>

int main() {
    int arr[10]; // Array to store the updated values
    
    for (int i = 0; i < 10; ++i) {
        arr[i] = i * 2; // Update the value
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]); // Print out the updated values
    }
    
    printf("\n");
    
    return 0;
}
