
#include <stdio.h>

int main() {
    int arr[0] = {};
    
    printf("The size of the array is: %zu\n", sizeof(arr)/sizeof(arr[0]));

    return 0;
}
