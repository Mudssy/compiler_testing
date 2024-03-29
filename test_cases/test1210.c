
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a simple string";
    char *p;
    
    // Test memchr function
    p = memchr(str, 's', sizeof(str));
    if (p != NULL)
        printf("Supported\n");
    else
        printf("Not Supported\n");
    
    return 0;
}
