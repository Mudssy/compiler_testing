
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    char *s1 = "résumé"; // string containing a non-ASCII character
    char *s2 = "resume";  // standard ASCII string
    
    setlocale(LC_ALL, "");  // Set locale according to environment settings
    
    printf("Setting locale: %s\n", setlocale(LC_CTYPE, NULL));  // Print current locale setting
    
    int result = strcoll(s1, s2);  // Compare strings using the current locale
    
    if (result == 0) {
        printf("The strings are identical.\n");
    } else if (result < 0) {
        printf("%s is less than %s\n", s1, s2);
    } else {  // result > 0
        printf("%s is greater than %s\n", s1, s2);
    }
    
    return 0;
}
