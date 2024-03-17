
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("nonexistent_file", "r");
    if (file == NULL) {
        perror("Error: Unable to open file");
        return EXIT_FAILURE;
    }
    fclose(file);
    return 0;
}
