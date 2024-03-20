
#include <stdio.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Could not open input file\n");
        return 1;
    }
    
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Could not open output file\n");
        fclose(inputFile);
        return 1;
    }
    
    char c;
    while ((c = fgetc(inputFile)) != EOF) {
        fputc(c, outputFile);
    }
    
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
