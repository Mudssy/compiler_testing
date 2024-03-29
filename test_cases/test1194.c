
#include <stdio.h>
#include <ctype.h>

int main() {
    char test_chars[] = "@_~`!@#$%^&*()-+={}[]|\\:;\"'<,>.?/"; // all punctuation characters according to ASCII table
    int i = 0;

    for (i = 0; test_chars[i]; ++i) {
        if(ispunct(test_chars[i])){
            printf("Character '%c' is a punctuation.\n", test_chars[i]);
        } else {
            printf("Character '%c' is not a punctuation.\n", test_chars[i]);
        }
    }
    
    return 0;
}
