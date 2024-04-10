
#include <stdio.h>

int main() {
    FILE *file = fopen("sample_file.txt", "rb"); // opens file in binary mode
    
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }
    
    int c, prev = 0;
    while ((c = fgetc(file)) != EOF) { // reads each character until the end of file
        if (prev == '\r' && c == '\n') {
            printf("Windows newline.\n");
        } else if (c == '\n') {
            printf("Unix/Linux/MacOS newline.\n");
        }
        
        prev = c; // saves the current character for future comparison
    }
    
    fclose(file);  // close file
    return 0;
}
