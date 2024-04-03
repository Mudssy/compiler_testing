
#include <stdio.h>

int main() {
    FILE *file = fopen("sample_file.txt", "r");
    
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    
    int count = 0;
    while (!feof(file)) {
        int ch = fgetc(file);
        if(ch == '\n'){
            count++;
        }
    }

    fclose(file);

    printf("Line Count : %d\n", count);
    
    return 0;
}
