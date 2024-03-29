
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "Hello, ";
    char str2[] = "World!";

    // concatenate str1 and str2
    strcat(str1, str2);
    
    printf("%s\n", str1);
    
    return 0;
}
