
#include <stdio.h>

int main() {
    int n = 5; // Change this value to see different outputs

    if(n > 0) {
        int arr[n];  // VLA of size n
        
        for(int i=0; i<n; i++){
            arr[i] = i+1;
        }
        
        printf("Array elements: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid size of the array.");
    }
    
    return 0; // Make sure it returns
}
