
#include <stdio.h>

int main(void) {
    // Declare and initialize a wide character string
    wchar_t str[] = L"Hello, World!";
    
    // Print each character in the wide character string to stdout
    for (wchar_t *p = str; *p != '\0'; ++p) {
        putwchar(*p);
        putchar(' ');
    }
    
    return 0;
}
