
#include <stdio.h>
#define SIZE 5

void readFile(FILE *file){
    char buffer[SIZE];
    fread(buffer, sizeof(char), SIZE-1, file);
    printf("%s\n", buffer);
}

void writeToFile(FILE *file){
    char message[] = "Hello";
    fwrite(message , 1 , sizeof(message) , file);
}

int main() {
    FILE *in_file  = fopen("input.txt", "r");
    if (in_file == NULL){
        printf("Could not open file\n" );
        return -1; // terminate with error
    }

    FILE *out_file = fopen("output.txt", "w");
    if (out_file == NULL){
        printf("Could not open file\n" );
        return -1; // terminate with error
    }

    readFile(in_file);
    writeToFile(out_file);

    fclose(in_file);
    fclose(out_file);
} 
