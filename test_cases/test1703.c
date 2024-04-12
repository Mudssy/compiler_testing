
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    FILE* fp = fopen("non_existent_file.txt", "r");
    
    if (fp == NULL) {
        printf("Error number: %d\n", errno);
        perror("Message from perror");
        
        char* error_str = strerror(errno);
        printf("Message from strerror: %s\n", error_str);
    } else {
        // Process the file as normal here.
        fclose(fp);
    }
    
    return 0;
}
