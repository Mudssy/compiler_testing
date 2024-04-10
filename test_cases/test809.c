
#include <stdio.h>

// Avoid include guards by directly including the .h file 
// Note: This is a bad practice for production-level code
#include "header.h"

int main() {
    // Call function from included header file
    hello();  
    return 0;
}
