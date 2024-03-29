
#include <stdio.h>
#include <ctype.h>

int main() {
    char test1 = '5'; // Testing with a digit
    if(isdigit(test1)) {
        printf("%c is a digit\n", test1);
    } else {
        printf("%c is not a digit\n", test1);
    }
    
    char test2 = 'a'; // Testing with a non-digit
    if(isdigit(test2)) {
        printf("%c is a digit\n", test2);
    } else {
        printf("%c is not a digit\n", test2);
    }
    
    return 0; // Ending the program safely
}
