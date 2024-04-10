
#include <stdio.h>

int main() {
    // Declare a pointer to a FILE object and open a file in read mode
    FILE *file = fopen("test.txt", "r");
    
    if (file == NULL) { 
        printf("Error opening the file.\n"); 
        return -1; // Return error code to signify failure
    }
  
    int pos = 5; // Position from which to read in the file
    
    // Move the file pointer to the given position
    if(fseek(file, pos, SEEK_SET) != 0) { 
        printf("Error while moving the file pointer.\n");  
        fclose(file); // Close the file and return an error code
        return -1;
    }
    
    int c = getc(file); // Read a character from the file
    
    if (c == EOF) {
        printf("Error reading the file.\n"); 
        fclose(file); // Close the file and return an error code
        return -1;
    } else {
        putchar(c); // Print the read character to the console
    }
  
    fclose(file); // Close the file
    
    return 0; // Return success code
}
