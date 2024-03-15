
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World!";

    for (int i = 0; str[i] != '\0'; ++i) {
        if (islower(str[i])) {
            printf("%c is a lowercase letter.\n", str[i]);
        } else if (isupper(str[i])) {
            printf("%c is an uppercase letter.\n", str[i]);
        } else if (isdigit(str[i])) {
            printf("%c is a digit.\n", str[i]);
        } else if (isspace(str[i])) {
            printf("%c is a space character.\n", str[i]);
        } else if (ispunct(str[i])) {
            printf("%c is a punctuation mark.\n", str[i]);
        } else {
            printf("Unexpected character: %c\n", str[i]);
        }
    }

    return 0;
}
