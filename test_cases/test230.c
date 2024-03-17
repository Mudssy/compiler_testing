
#include <stdio.h> // Standard library for input/output operations

// Custom header (you might need to create this in your file system)
#include "custom_header.h"

int main() {
    // If the custom header was recognized, it should contain a function that returns 10
    if (testFunctionInCustomHeader() == 10) {
        printf("The custom header was recognized and loaded successfully\n");
    } else {
        printf("There was an issue with recognizing or loading the custom header\n");
    }
    
    return 0;
}
