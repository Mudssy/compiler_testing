
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    strcpy(buffer, "Hello World");  // This will trigger an overflow error if memory sanitizer is enabled.
    
    printf("%s\n", buffer);

    return 0;
}
