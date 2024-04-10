
#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");  // Open the file in read mode

    if (file == NULL) {  // Check if file opening was successful
        printf("Could not open the file\n");
        return -1;  // Return error code
    }
    
    fpos_t position;
    int result = fgetpos(file, &position);

    if (result != 0) {  // Check if getting file position was successful
        printf("Could not get the file position\n");
        return -1;  // Return error code
    }
    
    printf("Position: %ld\n", position);  // Print out the file position
    
    fclose(file);  // Close the file
    return 0;  // Return success code
}