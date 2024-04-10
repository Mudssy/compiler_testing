
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("test_file", "r"); // Open a file in read mode
    
    if (fp == NULL) { 
        printf("Error opening the file.\n");
        return -1;
    }
    
    fseek(fp, 0, SEEK_END); // Move to the end of the file
    
    long fileSize = ftell(fp); // Get the position (which is the size)
    
    printf("The size of the file is %ld bytes.\n", fileSize);
    
    fclose(fp); 
    
    return 0;
}
