
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc == 2) {
        FILE* file = fopen(argv[1], "r");
        if (file == NULL) {
            printf("Error: Unable to open file\n");
            return 1;
        }
        
        char line[256];
        while (fgets(line, sizeof(line), file)) {
            // remove newline character from the end of string
            line[strcspn(line, "\n")] = 0;
            
            if (strncmp(line, "print", 5) == 0) {
                printf("%s\n", line + 5);
            } else {
                printf("Unknown command: %s\n", line);
            }
        }
        
        fclose(file);
    } else {
        printf("Error: No file specified\n");
        return 1;
    }
    
    return 0;
}
