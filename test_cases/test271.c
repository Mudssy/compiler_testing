
#include <stdio.h>

int main() {
    FILE *file = fopen("/absolute/path/to/valid/existing/file", "r");
    
    if (file == NULL) {
        printf("Error opening file\n");
        return 1; // Return with an error code
    }
    else {
        printf("File successfully opened\n");
        fclose(file);
        return 0; // Successful execution, return without any errors
    }
}
