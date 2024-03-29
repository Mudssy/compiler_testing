
#include <stdio.h>
#include <string.h>

int main() {
    char str1[30] = "Hello, world!"; // test string
    char key[5] = "wz";  // characters to search for
    
    char *p;
    p = strpbrk(str1, key);
    if (p) {
        printf("First occurrence of '%c' in the string: %s\n", *p, p);
    } else {
        printf("No match found.\n");
    }
    
    return 0;
}
