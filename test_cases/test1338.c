
#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w+");
    
    int num = 10;
    if (file != NULL) {
        fprintf(file, "%d\n", num);
        fclose(file);
    } else {
        printf("Unable to open file for writing\n");
        return 1; // Return an error code
    }
    
    file = fopen("test.txt", "r");
    if (file != NULL) {
        int readNum;
        fscanf(file, "%d", &readNum);
        
        if(num == readNum)  {
            printf("Success: The written number %d matches the read number %d\n", num, readNum);
        } else {
            printf("Failure: The written number %d does not match the read number %d\n", num, readNum);
        }
        
        fclose(file);
    } else {
        printf("Unable to open file for reading\n");
        return 1; // Return an error code
    }
    
    return 0;
}
