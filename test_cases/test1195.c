
#include <stdio.h>

int main() {
    int chars[] = {32, 9, 10}; // ASCII for space, tab, newline
    int i;
    
    printf("Testing isspace function.\n");
    for(i = 0; i < 3; ++i) {
        if (isspace(chars[i])) {
            printf("%d: %c is a whitespace character\n", chars[i], chars[i]);
        } else {
            printf("%d: %c is not a whitespace character\n", chars[i], chars[i]);
        }
    }
    
    return 0;
}
