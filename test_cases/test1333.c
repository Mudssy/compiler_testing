
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (isalpha(c)) 
        printf("%c is an alphabet.\n", c);
    else
        printf("%c is not an alphabet.\n", c);
        
    if (isdigit(c))
        printf("%c is a digit.\n", c);
    else
        printf("%c is not a digit.\n", c);
    
    if (ispunct(c)) 
        printf("%c is punctuation.\n", c);
    else
        printf("%c is not punctuation.\n", c);
        
    return 0;
}
