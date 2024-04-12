
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    // Testing if identifiers can contain non-ASCII characters
    int á = 10;
    printf("Value of variable 'á': %d\n", á);

    // Testing wide character literals
    setlocale(LC_ALL, "");
    wchar_t wideChar = L'ä';
    wprintf(L"Wide character literal: %lc\n", wideChar);
    
    return 0;
}
