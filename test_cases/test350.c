
#include <stdio.h>
#include <stdlib.h>

void shuffle(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        int j = rand() % (n - i);
        int temp = array[i + j];
        array[i + j] = array[i];
        array[i] = temp;
    }
}

int main() {
    const int SIZE = 10;
    int array[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    shuffle(array, SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
