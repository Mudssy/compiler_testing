
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    FILE *file;

    errno = 0;
    file = fopen("non_existent_file.txt", "r");
    
    if (file == NULL) {
        printf("File open failed with error: %d\n", errno);
        perror("File Open Error");
        
        printf("Corresponding error message is : ");
        fputs(strerror(errno), stderr);
        puts("\n");
    } else {
        // File open successful, close the file.
        fclose(file);
    }
    
    return 0;
}
