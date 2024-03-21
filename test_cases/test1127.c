
#include <stdio.h>

int main() {
    int n = 5;
    int array[n]; // variable length array
    
    for(int i=0; i<n; i++) {
        array[i] = i+1;
    }

    printf("Variable Length Array: ");
    for(int j=0; j<n; j++) {
        printf("%d ",array[j]);
    }
    
    return 0; // return a value to end the program properly
}
