
#include <stdio.h>

#define ARRAY_SIZE 1024

int main() {
    int array[ARRAY_SIZE];
    
    // Initialize the array using a loop that contains multiple iterations
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = i * 2;
    }

    return 0;
}
