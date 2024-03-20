
#include <stdio.h>

int main() {
    int arr[5] = {0, 1, 2, 3, 4}; // Define an integer array
    
    if (arr[2] == 2) {
        printf("Success\n"); // If indexing works, this will be printed
    } else {
        printf("Failure\n"); // If it doesn't work, this will be printed
    }
    
    return 0; // Exit the program successfully.
}
