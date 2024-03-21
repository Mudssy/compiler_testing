
#include <stdio.h>

int main() {
    FILE *file = fopen("path/to/your/file", "r");
    
    if (file == NULL) {
        printf("Error opening file\n");
        return 1; // Return with an error code
    }
    else {
        printf("File successfully included\n");
        fclose(file);
        return 0; // Successful execution
    }
}
