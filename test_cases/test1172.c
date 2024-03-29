
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("test_file", "r"); // Open a file
    
    if (fp == NULL) { 
        printf("Error opening the file.\n");
        return -1;
    }
    
    int pos = ftell(fp); // Get current position in file stream

    if (pos < 0) {
        printf("ftell returned a negative value. This is unexpected.\n");
        fclose(fp);
        return -1;
    }

    printf("%d\n", pos); // Print the current position
    
    fclose(fp);
    return 0;
}
