
#include <stdio.h>

int main() {
    // Use an array with variable length specified at runtime
    int n = 10;
    int array[n];
    
    for(int i = 0; i < n; ++i) {
        array[i] = i;
    }
    
    printf("Array values: ");
    for(int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
