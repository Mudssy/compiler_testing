
#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
    // Set the locale to German (Germany)
    if(setlocale(LC_ALL, "de_DE.UTF-8") == NULL) {
        printf("Unable to set locale\n");
        return 1;
    }
    
    // Get numeric formatting information for the current locale
    struct lconv *lc = localeconv();
    if(lc == NULL) {
        printf("Unable to get locale information\n");
        return 1;
    }

    char buffer[256];
    
    // Format a number according to the current locale
    sprintf(buffer, "%.2f", 1234.56);
    printf("Formatted number: %s\n", buffer);
    printf("Monetary decimal point: '%c'\n", *lc->mon_decimal_point);
    printf("Monetary thousands separator: '%c'\n", *lc->mon_thousands_sep);
    
    return 0;
}
