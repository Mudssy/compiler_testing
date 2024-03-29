
#include <ctype.h>
#include <stdio.h>

int main() {
    char c = 'a'; // change this to any character you want to test
    if(islower(c)) printf("%c is a lowercase letter\n", c);
    else printf("%c is not a lowercase letter\n", c);
    return 0;
}
