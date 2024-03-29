
#include <stdio.h>

int main(void) {
    FILE *file = fopen("test.txt", "w");
    
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    int retVal = fprintf(file, "This is a test output.\n");

    if (retVal < 0) {
        printf("fprintf failed\n");
        fclose(file);
        return 1;
    }
    
    fclose(file);
    return 0;
}
