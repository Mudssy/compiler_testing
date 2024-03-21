
#include <stdio.h>

int main() {
    FILE *file;
    char c;
    
    // Open in read mode
    file = fopen("test_file.txt", "r");
    
    if (file == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    printf("Content of the file:\n");
    
    // Read character by character and print them out until the end of file
    while((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    // Close the file
    fclose(file);

    return 0;
}
