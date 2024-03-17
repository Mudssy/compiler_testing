
#include <stdio.h>

int main() {
    int n = 10;
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        arr[i] = i * 2;
    }
    
    for (int i = 0; i < n; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}
