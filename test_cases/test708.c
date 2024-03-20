
#include <stdio.h>
#include <locale.h>
#include <libintl.h> // for gettext functions

#define _(string) gettext(string)

int main() {
    setlocale (LC_ALL, "");
    bindtextdomain ("hello", "/usr/share/locale");
    textdomain ("hello");
    
    printf(_("Hello, World!\n"));
    
    return 0;
}
