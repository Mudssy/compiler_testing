
#include <stdio.h>

int main() {
    char s[2];
    int x = 0;

    // Use scanf function to read input from the user.
    printf("Enter a character: ");
    scanf("%s", s);

    if (s[1] == 'a') {
        x = 1;
    }

    // If the entered character is 'a', then print "True". Otherwise, print "False".
    if (x) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
