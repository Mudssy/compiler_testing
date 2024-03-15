
#include <stdio.h>

int main() {
    char c1 = 'a';
    char c2 = '\n';
    char c3 = '\\';
    char c4 = '\x61';
    
    printf("Character Constants Test:\n");
    printf("Char 1: %c\n", c1);
    printf("Char 2: %c\n", c2);
    printf("Char 3: %c\n", c3);
    printf("Char 4: %c\n", c4);
    
    return 0;
}
