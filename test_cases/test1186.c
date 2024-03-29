
#include <stdio.h>
#include <ctype.h>  // The ctype.h library is included in the usrinclude section of compilers

int main() {
    char c = '5';  // Choose a character to test
    
    if (isdigit(c)) printf("The character '%c' is a digit\n", c);
    else printf("The character '%c' is not a digit\n", c);
    
    if (isalpha(c)) printf("The character '%c' is an alphabet letter\n", c);
    else printf("The character '%c' is not an alphabet letter\n", c);
    
    if (isalnum(c)) printf("The character '%c' is either a digit or an alphabet letter\n", c);
    else printf("The character '%c' is neither a digit nor an alphabet letter\n", c);
    
    char lower = tolower(c);  // convert the character to lowercase using toupper() function.
    char upper = toupper(c);  // convert the character to uppercase using tolower() function.
    
    printf("The lowercase of '%c' is '%c'\n", c, lower);
    printf("The uppercase of '%c' is '%c'\n", c, upper);
    
    return 0;
}
