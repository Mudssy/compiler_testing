
#include <stdio.h>

int main() {
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *str3 = u8"unicode!";

    printf("%s%s\n", str1, str2);
    printf("%s\n", str3);

    return 0;
}
