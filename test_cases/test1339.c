
#include <stdio.h>
#include <stdlib.h>  // for malloc and free functions

int main() {
    FILE *fileIn = fopen("input.txt", "r"); 
    if (fileIn == NULL) {
        printf("Unable to open file\n");
        return -1; 
    }
    
    char *buffer = malloc(sizeof(char) * 256); // assuming each line has at most 255 characters. 
                                            // Adjust this if needed.
    int count = 0, i;
    
    while (fgets(buffer, 256, fileIn)) {
        for (i = 0; buffer[i] != '\n'; ++i) 
            printf("%c", buffer[i]);
        ++count;
    }
    
    fclose(fileIn);
    free(buffer); // Don't forget to free the memory occupied by buffer.
    
    if (count == 0) {
        printf("File is empty\n");
        return -1; 
    }
    else {
        printf("\nOperation successful\n");
        return 0; 
    }
}
