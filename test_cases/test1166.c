
#include <stdio.h>

int main() {
    FILE *file;
    int num1, num2;
    char str[50];
    
    file = fopen("test.txt", "r"); // open the file for reading

    if (file == NULL) { // check that the file opened correctly
        printf("Error opening file\n");
        return 1; // return an error code in case of failure
    }

    while(fscanf(file, "%d %s", &num1, str) == 2){ // read integers and strings from the file
        printf("%d %s\n", num1, str); // print out the results
    }

    fclose(file); // close the file when finished
    
    return 0; // indicate success
}
