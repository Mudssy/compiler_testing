
#include <stdio.h>

int main(void) {
    FILE *file = fopen("test.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("Hello, world!", file);

    int result = fclose(file);
    
    if (result != 0) {
        printf("Error closing file!\n");
        return 1;
    }

    printf("Successfully wrote to and closed the file.\n");
    
    return 0;
}
