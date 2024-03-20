
#include <stdio.h>

// Assume that 'm' is defined in another module
import m;  // Module import

int main(void) {
    // Use a function from the imported module
    int result = m$foo();  
    
    if (result == 42) {
        printf("Module Import and Export are working with clanginclude.\n");
    } else {
        printf("Module Import and Export do not seem to be working with clanginclude.\n");
    }
    
    return 0; // Make sure the program returns, don't run forever.
}
