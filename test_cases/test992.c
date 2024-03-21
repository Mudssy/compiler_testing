
#include <stdlib.h>
#include <stdio.h>

// Struct representing a large struct that should fail to allocate 
typedef struct {
    char data[1024*1024]; // Large amount of data, this will likely cause stack overflows
} LargeStruct;

int main() {
    int i;
    LargeStruct *arr = malloc(sizeof(LargeStruct) * 2); // Try to allocate 2^31 registers

    if (arr == NULL) { // Check if allocation failed
        printf("Failed to allocate memory\n");
        return 0; // Exit program without running into an infinite loop in case of failure
    }

    for (i = 0; i < 2; i++) { // Fill allocated array with data, this will likely cause stack overflows
        memset(arr + i, 'A', sizeof(LargeStruct));
    }

    printf("Success\n"); // Print success message in case of allocation succeeded
    
    while(1); // Infinite loop to keep the program running after successful allocation
}
