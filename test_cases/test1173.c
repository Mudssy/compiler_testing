
#include <stdio.h>

int main() {
    FILE* fp = fopen("test.txt", "w+");
    
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    
    fputs("Hello, World!\n", fp);
    rewind(fp); // Rewind the file to the beginning
    
    char c = fgetc(fp); // Read a character from the file
    if (c == EOF) {
        printf("Rewind failed\n");
    } else if (c != 'H') {
        printf("Rewind position is not correct\n");
    } else {
        printf("Test passed: %c\n", c); // Should print Test passed: H
    }
    
    fclose(fp);
    remove("test.txt");
    
    return 0;
}
