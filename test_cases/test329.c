
#include <stdio.h>

// Define the old API name as deprecated
#define oldAPI __attribute__((deprecated("This API is deprecated. Use newAPI instead.")))

// Declare the old API function
oldAPI void oldAPI() {
    printf("Old API called\n");
}

// Define a new API function
void newAPI() {
    printf("New API called\n");
}

int main() {
    // Call the deprecated old API function and see if compiler warns
    oldAPI();
    
    // Call the new API function to test renaming
    newAPI();
    
    return 0;
}
