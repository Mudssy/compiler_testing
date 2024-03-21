
#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "hello";
    
    if (strcasecmp(str1, str2) == 0) 
        printf("Both strings are equal\n");
    else 
        printf("Strings are not equal\n");
        
    return 0;
}
