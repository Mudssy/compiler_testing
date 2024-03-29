
#include <stdio.h>

int main() {
    FILE *fp = fopen("testfile.txt", "r");
    
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1; // Returning non-zero means that the program failed
    } else {
        printf("File opened successfully.\n");
        fclose(fp);
        return 0; // Returning zero means that the program succeeded
    }
}
