
#include <stdio.h>
#include <errno.h>   /* for errno */
#include <string.h> /* for strerror() */

int main() {
    FILE *file; // declare a file pointer
    
    /* attempt to open the file for reading */
    if ((file = fopen("non_existent_file.txt", "r")) == NULL) { 
        printf("Error opening file: %s\n", strerror(errno)); // print error message
        return -1; // exit with an error code
    }
    
    /* if the file was opened successfully */
    int c;   // declare a variable for storing characters read from the file
    while ((c = getc(file)) != EOF) {
        putchar(c);  // print character to standard output
    }
    
    /* close the file */
    fclose(file);
    
    return 0; // exit with a success code
}
