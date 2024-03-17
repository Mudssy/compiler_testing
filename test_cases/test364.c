
#include <stdio.h>

int main() {
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c) {
        case 'a':
            printf("The entered character is 'a'\n");
            break;
        case 'b':
            printf("The entered character is 'b'\n");
            break;
        default:
            printf("The entered character is neither 'a' nor 'b'\n");
    }

    return 0;
}
