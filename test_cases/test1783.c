
#include <stdlib.h>
#include <string.h>

int main() {
    char* buffer = (char*) malloc(100 * sizeof(char)); // Allocate some memory
    
    strncpy(buffer, "Hello, World!", 14); // Copy a string into the buffer
    
    free(buffer); // Free the memory
    
    printf("%s\n", buffer); // Use the freed memory - Undefined Behavior
    
    return 0;
}
