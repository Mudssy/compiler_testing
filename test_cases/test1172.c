
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("test_file", "r"); // Open a file in read mode
    
    if (fp == NULL) { 
        printf("Error opening the file.\n");
        return -1;
    }
    
    fseek(fp, 0, SEEK_END); // Move to the end of the file
    
    long size = ftell(fp); // Get the current file position
    
    if (size == -1L) {
        printf("Error getting the file size.\n");
        return -1;
    }
    
    printf("Size: %ld\n", size);
    
    fclose(fp); // Close the file
    
    return 0;
}
