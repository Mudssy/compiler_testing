
#include <stdio.h>

int main() {
    FILE *fileIn = fopen("input.txt", "r"); // Open the input file for reading
    if (fileIn == NULL) {
        printf("Unable to open input file\n");
        return 1;
    }
    
    FILE *fileOut = fopen("output.txt", "w"); // Open the output file for writing
    if (fileOut == NULL) {
        printf("Unable to open output file\n");
        return 2;
    }

    char line[100];
    
    while(fgets(line, sizeof(line), fileIn)) { // Read the line from input file
        fputs(line, fileOut); // Write the line to output file
    }
    
    fclose(fileIn); 
    fclose(fileOut);

    printf("Operation successful\n");
    return 0;
}
