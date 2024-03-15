
#include <stdio.h>

int main() {
    int n = 5;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
    
    return 0;
}
