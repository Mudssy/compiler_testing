
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char combined[strlen(str1) + strlen(str2) + 1];
    
    strcpy(combined, str1);
    strcat(combined, str2);
    
    printf("%s\n", combined);
    
    return 0;
}
