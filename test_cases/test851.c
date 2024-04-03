
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    // Set the locale to UTF-8 encoding
    setlocale(LC_ALL, "en_US.UTF-8");
    
    // Declare and initialize a wide character string
    wchar_t str[] = L"Hello, World!";
    
    // Print each character in the wide character string to stdout
    for (wchar_t *p = str; *p != L'\0'; ++p) {
        putwchar(*p);
        fputws(L" ", stdout);
    }
    
    return 0;
}
