
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    
    // Testing namespaces and indentation
    namespace {
        void foo() {
            printf("\tIndented line in a namespace.\n");
        }
    }

    foo();  // Call the function to see if it's indented correctly.

    return 0;
}
