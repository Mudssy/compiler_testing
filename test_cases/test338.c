
#include <stdio.h>
#include <assert.h>

void perfectShuffle(int *arr, int n) {
    for (int i = 0; i < 52; i += 2) {
        int temp = arr[i];
        arr[i] = arr[(i + 1 + (i % 2)) % n];
        arr[(i + 1 + (i % 2)) % n] = temp;
    }
}

int isShuffleValid(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] != i) {
            return 0;
        }
    }
    return 1;
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    const int SIZE = 52;
    int deck[SIZE];
    
    for (int i = 0; i < SIZE; ++i) {
        deck[i] = i;
    }
    
    // Print the initial array.
    printf("Initial deck: ");
    printArray(deck, SIZE);
    
    perfectShuffle(deck, SIZE);
    
    // Print the shuffled array.
    printf("Shuffled deck: ");
    printArray(deck, SIZE);
    
    return 0;
}

/* Define the 'perfectShuffle' function here */
!+
Separate answer:
