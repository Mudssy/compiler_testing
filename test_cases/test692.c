
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing\n");
        exit(1);
    }
    
    // Write some content into the file
    const char *text = "Hello, World!";
    fprintf(file, "%s\n", text);
    
    fclose(file);

    // Deserialize the code from the file
    FILE *inputFile = fopen("test.txt", "r");
    if (inputFile == NULL) {
        printf("Could not open file for reading\n");
        exit(1);
    }
    
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), inputFile)) {
        printf("%s", buffer);
    }
    
    fclose(inputFile);
    
    return 0;
}
