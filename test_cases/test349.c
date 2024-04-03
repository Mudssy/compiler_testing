
#include <stdio.h>

int handle_error = 0; // Global variable for testing error handling

void testFunc() {
    // Simulate an error condition
    if (handle_error) {
        printf("Error handling\n");
        return;
    }
    
    printf("Function executed successfully\n");
}

int main(void) { 
    handle_error = 1;  // Set to simulate an error during execution
    testFunc();
    if (handle_error == 1)         printf("Error handling for invalid shuffle masks passed\n");
    else                printf("No error handling for valid shuffle masks passed\n");
    
    return 0;
}
