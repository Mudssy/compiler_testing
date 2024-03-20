
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "Hello ";
    char str2[] = "World!";
    
    // concatenate str1 and str2 and print the result
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // calculate length of a string
    int len = strlen(str1);
    printf("Length of concatenated string: %d\n", len);
    
    // compare two strings
    char str3[20] = "Hello World!";
    if (strcmp(str1, str3) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
