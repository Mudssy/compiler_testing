
#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Hello";
    char string2[] = "World";

    int result = strcmp(string1, string2);

    if (result < 0) {
        printf("'%s' is less than '%s'\n", string1, string2);
    } else if (result == 0) {
        printf("'%s' is equal to '%s'\n", string1, string2);
    } else {
        printf("'%s' is greater than '%s'\n", string1, string2);
    }

    return 0;
}
