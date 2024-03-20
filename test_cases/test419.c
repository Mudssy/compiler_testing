
#include <stdio.h>

int main() {
    const int array[10] = {0}; // create an array of size 10 and initialize all elements to zero
    
    for(int i = 0; i < 10; ++i) {
        printf("%d ", array[i]); // print the initial values
    }
    
    array[5] = 7; // attempt to change a value in the array, this should cause an error if const is supported

    for(int i = 0; i < 10; ++i) {
        printf("%d ", array[i]); // print the values again
    }
    
    return 0;
}
