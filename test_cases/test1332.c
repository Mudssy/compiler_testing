
#include <string.h>
#include <stdio.h>

int main() {
    char src[40];
    char dest[128];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "This is source"); // Copying string 
    printf("Source String: %s\n", src);
    
    strcpy(dest, src); // Copied to destination string
    printf("Destination String (After copying): %s\n", dest);

    strcat(dest, " - This is extra"); // Concatenating strings
    printf("Concatenated String: %s\n", dest);
    
    int length = strlen(dest); // Determining the string length
    printf("Length of final concatenated string: %d\n", length);

    return 0;
}
