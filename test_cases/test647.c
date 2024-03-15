
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[40] = "This is a test string.";
    
    printf("The length of the string \"%s\" is %lu.\n", str1, strlen(str1));
    printf("The concatenated string is \"%s\".\n", strcat(str2, " Appended!"));
    
    return 0;
}
