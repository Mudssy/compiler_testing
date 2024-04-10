
#include <stdio.h>

int main() {
    int a = 5, b = 2; // Variables Initialization
    double z = pow(a, b);  
    
    printf("%d^%d is %f\n", a, b, z);  // Correctly formatted string using 'printf'

    if (z > 10) {   // Checking if power of a and b is greater than 10
        printf("Result is more than 10.\n");
    }
    
    int arr[] = {5, 6, 7, 8, 9};
    
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {   // Loop over the array
        if (arr[i] % 2 == 1) {  // Checking whether the number is odd or not
            printf("Odd number found: %d\n", arr[i]);
        } else {
            printf("%d is even.\n", arr[i]);
        }
    }
    
    return 0;
}
