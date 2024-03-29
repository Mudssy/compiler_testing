
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello World";
    char str2[20];
    
    // Test memcpy
    memcpy(str2, str1, sizeof(str1));
    printf("After memcpy: %s\n", str2);
    
    // Test memset
    memset(str1, 'A', 5);
    printf("After memset: %s\n", str1);
    
    // Test memmove
    char* new_location = &str1[5];
    memmove(new_location, str1, 6);
    printf("After memmove: %s\n", new_location);

    return 0;
}
