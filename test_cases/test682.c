
#include <stdio.h>

int main(void) {
    #if 0
        printf("This code section intentionally has an error for testing purposes.\n");
    #else
        //#error "This code section intentionally has an error for testing purposes."
        /* This line is commented out because it's intended to cause a compile-time error, but uncomment it if you want to test. */
    #endif
    
    printf("No Error\n");

    #if 1
         //#warning "This code section intentionally has a warning for testing purposes."
        /* This line is commented out because it's intended to cause a compile-time warning, but uncomment it if you want to test. */
        printf("No Warning\n");
    #else
        printf("Warning Not Present\n");
    #endif
    
    return 0;
}
