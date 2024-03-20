
#include <stdio.h>

// Define a function from an external library.
void hello_from_library();

int main() {
    printf("Inside main, calling hello_from_library:\n");
    
    // Call the function from the library.
    hello_from_library();

    return 0;
}
