
#include <stdio.h>

int main(void) {
    FILE *file;
    
    if((file = fopen("test.txt", "w")) == NULL){
        printf("Unable to open file\n");
        return 1; // exit the program with an error status code
    }
    
    char test_string[] = "Hello World!";
    int retval = fputs(test_string, file);
    
    if (retval == EOF){
        printf("Error writing to file\n");
        return 1; // exit the program with an error status code
    }
    
    if(fclose(file) != 0){
        printf("Unable to close file\n");
        return 1; // exit the program with an error status code
    }

    return 0;
}
