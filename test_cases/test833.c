
#include <stdio.h>
#include <string.h>
#include <errno.h>
 
int main() {
    FILE *file;
    
    file = fopen("this_file_does_not_exist", "r");
    if (file == NULL) {
        printf("Error opening the file: %s\n", strerror(errno));
        
        // This is only for testing, avoid using it in real programs.
        return 0;
    }
    
    fclose(file);
    
    return 0;
}
