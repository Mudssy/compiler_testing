
#include <stdio.h>
#include <stdlib.h>

// Define the size of the vector
#define SIZE 4

int main() {
    // Initialize two vectors with some values
    int vector1[SIZE] = {0, 2, 3, 5};
    int vector2[SIZE] = {7, 9, 8, 6};

    // Create a new vector by picking elements from the first and second vectors in a specific order
    __attribute__((vector_size(SIZE * sizeof(int)))) int result;
    for (int i = 0; i < SIZE; ++i) {
        result[i] = __builtin_shufflevector(vector1, vector2, i);
    }

    // Check if the output is as expected
    int expected[SIZE] = {0, 7, 8, 6};
    for (int i = 0; i < SIZE; ++i) {
        if (result[i] != expected[i]) {
            printf("Test failed\n");
            exit(1);
        }
    }

    printf("Test passed\n");
    return 0;
}
