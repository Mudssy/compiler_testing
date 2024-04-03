
#include <stdio.h>

int main() {
    FILE *file;
    char c;
    int result;
    
    // Open the file in read mode
    file = fopen("my_file.txt", "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    // Move to position 5
    result = fseek(file, 5, SEEK_SET);

    if (result != 0) {
        printf("Failed to move to position 5 in the file.\n");
        return 1;
    }
    
    // Get character at that position
    c = getc(file);
    
    if (c == EOF) {
        printf("Error reading from file.\n");
        return 1;
    }
    
    // Print the character
    printf("Character at position 5: %c\n", c);
    
    // Close the file
    fclose(file);
    
    return 0;
}
