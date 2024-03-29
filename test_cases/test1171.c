
#include <stdio.h>

int main() {
    FILE *file;
    char c;
    
    // Attempt to open file
    file = fopen("test_file.txt", "r");

    if (file == NULL) {
        printf("Unable to open file\n");
        return 1;
    }
    
    // Seek to specific position in the file
    if (fseek(file, 5L, SEEK_SET) != 0) {
        printf("Failed to seek in file\n");
        fclose(file);
        return 1;
    }
    
    // Read a character from the current position in the file
    if (fread(&c, sizeof(char), 1, file) != 1) {
        printf("Failed to read from file\n");
        fclose(file);
        return 1;
    }
    
    printf("Character at position 5: %c\n", c);
    
    // Close the file
    fclose(file);
    
    return 0;
}
