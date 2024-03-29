
#include <stdio.h>

int main() {
    FILE *fp;
    char c[] = "This is some text";
    
    fp = fopen("testfile.txt", "w+");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // Write to the file
    fwrite(c, sizeof(char), sizeof(c), fp);
    
    // Move back to the beginning of the file
    fseek(fp, 0, SEEK_SET);
    
    printf("The text in the file is: ");
    while (!feof(fp)) {
        char ch = fgetc(fp);
        if (ch != EOF) {
            putchar(ch);
        }
    }

    // Close the file
    fclose(fp);
    return 0;
}
