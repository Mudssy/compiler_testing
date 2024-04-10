
#include <stdio.h>

int main() {
    FILE *file = fopen("relative/path/to/valid/existing/file", "r"); // use relative path for testing
    
    if (file == NULL) {
        printf("Error opening file\n");
        return 1; // Return with an error code
    } else {
        int c = getc(file);
        
        while (c != EOF) {
            putchar(c);
            c = getc(file);
        }
        
        fclose(file);
    }
    
    return 0; // Return with success code
}
