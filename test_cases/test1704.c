
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    FILE *file = fopen("non_existent_file", "r");
    
    if (file == NULL) {
        // Print the error message using perror function
        printf("Error opening file: ");
        perror(NULL);
        
        // Get and print the error string using strerror function
        char *errorStr = strerror(errno);
        printf("Strerror information: %s\n", errorStr);
    } else {
        fclose(file);
    }
    
    return 0;
}
