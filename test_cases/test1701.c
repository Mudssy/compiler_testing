
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];
    int result;

    // Copy a string into another
    strcpy(str1, "hello"); 
    printf("Copy of the string: %s\n", str1);
    
    // Compare two strings
    strcpy(str2,"world");
    result = strcmp(str1,str2);
    if (result < 0) {
        printf("Str1 is less than Str2\n");
    } else if (result > 0) {
        printf("Str1 is greater than Str2\n");
    } else {
        printf("Str1 and Str2 are equal\n");
    }
    
    // Concatenate two strings
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1); 

    return 0;
}
