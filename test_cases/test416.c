
#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    fgets(buffer, sizeof(buffer), file);
    printf("First line of the file: %s\n", buffer);

    fclose(file);
    return 0;
}
