
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    char *str1 = malloc(50); // Assuming we won't exceed 50 characters
    char *str2 = malloc(50);
    
    strcpy(str1, "Hello"); // first string to compare. Change as needed
    strcpy(str2, "World"); // second string to compare. Change as needed
    
    if (strcoll(str1, str2) > 0) {
        printf("First string is greater than the second.\n");
    } else if (strcoll(str1, str2) < 0) {
        printf("First string is less than the second.\n");
    } else {
        printf("Both strings are equal.\n");
    }
    
    free(str1); // don't forget to free memory
    free(str2);

    return 0;
}
