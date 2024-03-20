
#include <stdio.h>

int main() {
    // Print UTF-8 (default) character
    printf("UTF-8: å\n");
    
    // Print UTF-16 character
    printf("UTF-16: ");
    fwrite("\xC3\xA5", 2, 1, stdout);   // Character 'å' in UTF-8
    printf("\n");

    // Print UTF-32 character
    printf("UTF-32: ");
    fwrite("\x00\x00\x00\xE5", 4, 1, stdout);   // Character 'å' in UTF-32
    printf("\n");
    
    return 0;
}
