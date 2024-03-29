
#include <stdio.h>

int main() {
    FILE *file;
    int status;

    // Open the file
    file = fopen("test_file.txt", "w");
    
    if (file == NULL) {
        printf("Failed to open file.\n");
        return 1; // Exit program with failure status
    } else {
        printf("Successfully opened file.\n");
    }
    
    // Close the file
    status = fclose(file);

    if (status == 0) {
        printf("Successfully closed the file.\n");
        return 0; // Exit program with success status
    } else {
        printf("Failed to close the file.\n");
        return 1; // Exit program with failure status
    }
}
