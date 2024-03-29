
#include <stdio.h>
#include <string.h>

int main() {
    char haystack[100] = "Hello, World!";
    char needle[100] = "World";
    char *result = strstr(haystack, needle);
    
    if (result) {
        printf("Found '%s' in '%s'\n", needle, haystack);
    } else {
        printf("Could not find '%s' in '%s'\n", needle, haystack);
    }
    
    return 0;
}
