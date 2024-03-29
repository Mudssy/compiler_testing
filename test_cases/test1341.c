
#include <stdio.h>
#include <errno.h>

int main() {
    FILE* fp = fopen("nonexistentfile", "r");
    
    if (fp == NULL) {
        printf("Error opening file: %d\n", errno);
        
        switch(errno) {
            case ENOENT: // No such file or directory
                printf("File not found\n");
                break;
            case EACCES: // Permission denied
                printf("Permission denied\n");
                break;
            default:
                printf("Unknown error\n");
        }
    } else {
        printf("Opened file successfully\n");
        fclose(fp);
    }
    
    return 0;
}
