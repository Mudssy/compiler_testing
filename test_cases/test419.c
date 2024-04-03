
#include <stdio.h>

void modifyArray(int* array) {
    for (int i = 0; i < 10; ++i) {
        array[i] = i+1; // assign value from 1 to 10 to the elements of array
    }
}

int main() {
    int array[10] = {0}; // create an array of size 10 and initialize all elements to zero
    
    modifyArray(array);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", array[i]); // print the values of array after modification
    }

    return 0;
}
