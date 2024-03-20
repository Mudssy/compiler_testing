
#include <stdio.h>

int main() {
    int size = 10;  // Size of array
    int array[size];  // Declare an array of the given size
    
    for (int i=0; i<size; i++) {
        printf("Address of element %d is: %p\n", i, &array[i]);
    }
  
    return 0;
}
