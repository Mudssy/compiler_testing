
#include <stdio.h>
#include <errno.h> 

int main(void) {
    FILE *file;
    
    file = fopen("does_not_exist.txt", "r");
    if (file == NULL) {
        perror("Error when opening the file");
        return 1;
    }
  
    // Rest of your program...
  
    fclose(file);
    
    return 0;
}
