
#include <stdio.h>

int main() {
    int n = 5; // You can change this value to test different cases

    if (n > 0) {
        int arr[n]; // Variable length array created using Sentinel Attributes feature

        for(int i=0; i<n; i++) {
            arr[i] = i+1;
        }

        printf("Array elements: ");
        for(int i = 0; i < n ; i++)
           printf("%d ", arr[i]);
    } else {
        printf("Array size is not positive, cannot create array.");
    }

    return 0; // Ensures program returns and doesn't run forever
}
