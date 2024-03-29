
#include <stdio.h>
#define SIZE 100

int main() {
    FILE *file = fopen("testfile", "r");
    
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    char buffer[SIZE];
    size_t readSize;
    
    while((readSize = fread(buffer, sizeof(char), SIZE - 1, file)) > 0) {
        buffer[readSize] = 0; // Null terminate the string
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}
