
#include <stdio.h>

void printArrayElement(int arr[], int size, int index) {
    if (index >= 0 && index < size){
        printf("%d\n",arr[index]);
    } else {
        printf("Out of Bounds\n");
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    printArrayElement(arr, 5, 2); // prints 3
    printArrayElement(arr, 5, 8); // prints "Out of Bounds"
    return 0;
}
