
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    
    // Testing namespaces and indentation
    #if 0
        void foo() {
            printf("\tIndented line in a namespace.\n");
         }
    #else
        #error "Unexpected level of indentation"
    #endif

    return 0;
}
