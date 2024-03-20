
#include <stdio.h>

int main() {
    FILE *file = fopen("sample_file.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int line = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line++;
        }
    }
    
    printf("Total lines in the file: %d\n", line);
    
    fclose(file);

    return 0;
}
