
#include <stdio.h>

// Define a function prototype for an external function
int external_function(void);

int main() {
    int result = external_function(); // Call the external function
    printf("The result of the external function is: %d\n", result); // Print the result
    return 0;
}
