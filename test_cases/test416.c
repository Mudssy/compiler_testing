
#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
     }

    if(fgets(buffer, sizeof(buffer), file) != NULL){
        printf("First line of the file: %s\n", buffer);
     } else {
         printf("File is empty or an error occurred while reading.\n");
     }

    fclose(file);
    return 0;
}
