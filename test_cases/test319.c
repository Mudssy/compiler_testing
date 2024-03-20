
#include <stdio.h>
#include <errno.h>

// Attribute used to handle errors
__attribute__((returns_nonnull))
char * errorCheckFunction(void) {
    errno = EIO; // Set the error number (EIO is a general input/output error)
    return NULL;
}

int main() {
    char* result = errorCheckFunction(); // Call the function
    
    if(!result) {
        perror("Error in errorCheckFunction"); // Prints "Error in errorCheckFunction: Input/Output error" (If errno is EIO)
    } else {
        printf("%s\n", result);
    }
    return 0;
}
