
#include <stdio.h>

int main() {
    int result = printf("Hello world!\n");
    if (result < 0) {
        perror("Error printing to stdout");
        return 1; // Return with an error code
    }
    
    fprintf(stderr, "This message is written on stderr\n");
    
    return 0; // Return without any errors
}
