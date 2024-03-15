
#include <stdio.h>

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (file != NULL) {
            char buffer[256];
            while (fgets(buffer, sizeof(buffer), file)) {
                printf("%s", buffer);
            }
            fclose(file);
        } else {
            fprintf(stderr, "Unable to open the specified response file.\n");
            return 1;
        }
    } else {
        fprintf(stderr, "Usage: %s <response-file>\n", argv[0]);
        return 1;
    }
    return 0;
}
