
#include <stdio.h>

// Declare a function as deprecated
void __attribute__((deprecated)) my_deprecated_function() {
    printf("This function is deprecated\n");
}

int main() {
    // Call the deprecated function and see if compiler gives any warning
    my_deprecated_function();
    return 0;
}
