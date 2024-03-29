
#include <stdio.h>
#include <string.h>

int main() {
    char *str = "Hello, World!";
    char c = 'W';
    char *ptr;
    
    ptr = strchr(str, c);
    
    if (ptr != NULL) {
        printf("Character '%c' found at position %ld\n", c, ptr - str + 1);
    } else {
        printf("Character '%c' not found in the string\n", c);
    }
    
    return 0;
}
