
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *fp = fopen("nonexistentfile", "r"); // Open a non-existent file
    
    if(fp == NULL) {
        int errnum = errno;
        fprintf(stderr, "Failed to open the file. Error: %s\n", strerror(errnum));
        
        return 1; // Return an error code
    }
    fclose(fp);
    
    return 0; // Return successful exit code
}
