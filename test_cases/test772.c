
#include <stdio.h>

// This function prints a simple message indicating success
void test_success() {
    printf("Successfully declared variable\n");
}

int main() {
    // Declare and initialize an integer
    int myVar = 10;
    
    // Test if the declaration was successful
    if (myVar == 10) {
        test_success();
    } else {
        printf("Error in variable declaration\n");
    }

    return 0; // Make sure it returns to avoid infinite loop
}
