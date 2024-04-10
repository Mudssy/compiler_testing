
#include <stdio.h>

#define SIZE 100

int main() {
    FILE *file = fopen("testfile", "r");
    
    if (file == NULL) {
        printf("Unable to open file\n");
        return -1; // exit program
    }

    char buffer[SIZE];
    size_t readSize = 0;
    while ((readSize = fread(buffer, sizeof(char), SIZE - 1, file)) > 0) {
        buffer[readSize] = 0; // null-terminate the string
        printf("%s", buffer);
    }
    
    if (!feof(file)) {
        printf("An error occurred while reading from the file\n");
        return -1; // exit program
    }

    fclose(file);

    return 0;
}
