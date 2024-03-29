
#include <stdio.h>

int main() {
    FILE *file;
    fpos_t position;
    
    // Open the file for writing
    file = fopen("test.txt", "w+");
    if (file == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    // Write a string to the file
    fputs("This is a test file for fsetpos", file);
    
    // Get the current position in the stream
    if (fgetpos(file, &position) == 0) {
        printf("Current position: %lld\n", position);
    } else {
        printf("Unable to get current position\n");
    }
    
    // Set the position to a specific point in the stream
    if (fsetpos(file, &position) == 0) {
        printf("Position set successfully\n");
    } else {
        printf("Unable to set position\n");
    }

    // Close the file
    fclose(file);
    
    return 0;
}
