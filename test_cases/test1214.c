
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "This is a sample string";
    char * pch;
    
    // find the last occurrence of 'str' in pch
    pch = strrchr(str, 's');
    
    if (pch != NULL) {
        printf("Last occurrence of 's' was found at position: %ld\n", pch - str + 1); 
    } else {
        printf("Character not found in string\n");
    }

    return 0; // Make sure the program ends correctly.
}
