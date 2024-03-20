
#include <stdio.h>

int main() {
    char buffer[10];  // Declare a buffer of size 10
    printf("Enter some text:\n");
    
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {  
        // Attempt to read input into the buffer
        
        puts(buffer);  
        // Print out what was read
    } else { 
        printf("Failed to read input");
    }
    
    return 0;
}
