
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World!";
    
    for(int i = 0; str[i]; i++) {
        str[i] = toupper((unsigned char) str[i]);
    }

    printf("%s\n", str);  // Expected output: HELLO, WORLD!
    
    return 0;
}
