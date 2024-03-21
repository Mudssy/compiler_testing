
#include <stdio.h>

int main(void) {
    int result = ({
        printf("Hello, world!\n");
        10; // Expression to return
    });
    
    if (result == 10) {
        printf("Successfully executed statement expression with expected return value.\n");
    } else {
        printf("Unexpected result from statement expression.\n");
    }
    
    return 0; // Ensure this function returns.
}
