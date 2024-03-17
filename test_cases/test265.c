
#include <stdio.h>

int main() {
    FILE *file;
    char buffer[256];
    
    file = fopen("test_input.txt", "r");
    if (file == NULL) {
        printf("Could not open the file\n");
        return 1;
    }
    
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    
    fclose(file);
    return 0;
}
