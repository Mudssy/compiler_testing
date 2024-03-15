
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    for (unsigned i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("Element at index %u: %d\n", i, arr[i]);
    }
    
    return 0;
}
