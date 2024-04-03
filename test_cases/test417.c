
#include <stdio.h>

int main() {
    FILE *file; // declare a file pointer
    
    /* attempt to open the file for reading */
    if ((file = fopen("non_existent_file.txt", "r")) == NULL) { 
        printf("Error opening file.\n"); // output error message
        return -1; // return an error code
    }
    
    /* continue with other program logic here */
    printf("File opened successfully.\n");
    
    fclose(file); // close the file
    
    return 0; // return success code
}
