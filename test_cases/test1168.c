
#include <stdio.h>

int main() {
    FILE *filePointer;
    char ch = 'A'; // ASCII character A
    
    // Open the file for writing
    filePointer = fopen("test_file.txt", "w"); 
    
    if (filePointer != NULL) {
        fputc(ch, filePointer); // Write to the file
        fclose(filePointer); // Close the file
    } else {
      printf("Failed to open the file\n");
      return -1;
    }
    
    // Open the file for reading
    filePointer = fopen("test_file.txt", "r"); 
    
    if (filePointer != NULL) {
        char readChar;
        
        // Read from the file
        while ((readChar = getc(filePointer)) != EOF) {
            printf("%c ", readChar);
        }
        
        fclose(filePointer); // Close the file
    } else {
      printf("Failed to open the file\n");
      return -1;
    }
    
    return 0;
}
