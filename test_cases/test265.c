
#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "This is a test.\n");

    fclose(file);
    
    printf("File successfully written.\n");
    return 0;
}
