
#include <stdio.h>
#include <locale.h>

int main() {
    // Set locale to German (de_DE) for internationalization testing
    setlocale(LC_ALL, "de_DE");

    // Print out a string that should be translated based on the current locale
    printf("Translated String: %s\n", gettext("Hello, World!"));
    
    return 0;
}
