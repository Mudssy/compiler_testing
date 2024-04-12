
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file;
    
    file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        printf("Error: %s\n", strerror(errno));
        return 1; // exit with an error code
    }
    
    /* perform other operations on the file */

    fclose(file);
    
    return 0; // exit with a success code
}
