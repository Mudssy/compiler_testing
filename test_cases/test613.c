
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("First element of array is %d\n", arr[0]);
    printf("Last element of array is %d\n", arr[sizeof(arr)/sizeof(int)-1]);
    
    int sum = 0;
    for (int i=0; i<5; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements in array is %d\n", sum);
    
    return 0;
}
