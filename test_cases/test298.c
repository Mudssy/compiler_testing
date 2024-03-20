
#include <stdio.h>
#include <unistd.h>

int main(void) {
    char *command = "clang @response_file";
    FILE* rspFile = fopen("response_file", "w");
    
    if (rspFile == NULL) {
        printf("Error creating response file\n");
        return 1;
    }

    // write command to the response file
    fprintf(rspFile, "%s.c -o %s\n", __FILE__, __FILE__);
    
    if (ferror(rspFile)) {
        printf("Error writing to response file\n");
        return 1;
    }

    // close the response file
    fclose(rspFile);
  
    // run the command
    int result = system(command);
    
    if (result == -1) {
        printf("Error executing command\n");
        return 1;
    }
  
    // delete the response file
    remove("response_file");
  
    return 0;
}
