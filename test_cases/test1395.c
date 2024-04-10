
#include <stdio.h>

int main() {
    FILE *file; 
    int c; 
  
    // Open profile data file
    file = fopen("profile_data.txt", "r"); 
    if (file == NULL) {
        printf("Could not open file\n");
        return -1;
    }
    
    // Process the profile data...
    while ((c = getc(file)) != EOF) {   // Read the content of the profile data file until end of file is reached. 
        putchar(c);                       // Printing each character as it is read from file.
    }
    
    fclose(file);  // Closing the file after reading.
    return 0;   // Exit program
}
