
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()
#include <stdio.h>  // for printf()

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shuffle(int arr[], int n) {
    srand(time(NULL)); // Seed the random number generator
 
    for (int i = n-1; i > 0; --i) {
        int j = rand() % (i+1);
        
        swap(&arr[i], &arr[j]);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr, n);
    shuffle(arr, n);
    printArray(arr, n);
    return 0;
}
