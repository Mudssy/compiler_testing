
#include <stdio.h>
#include <errno.h>

int main() {
    FILE *file = fopen("nonexistent_file", "r");
    if (file == NULL) {
        perror("Error opening file");
    } else {
        printf("File opened successfully.\n");
        fclose(file);
    }
    return 0;
}
