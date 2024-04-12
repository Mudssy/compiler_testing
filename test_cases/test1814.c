
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char path[100];
    
    strcpy(path, "example.txt");  // user controlled string to specify file
    file = fopen(path, "r");      // open the file in read mode

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return -1;
    } else {
        printf("File opened successfully.\n");
        fclose(file);  // close the file when done
    }
    
    return 0;
}
