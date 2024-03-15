
#include <stdio.h>

enum Colors { RED, GREEN, BLUE };

int main() {
    enum Colors favorite_color;
    
    favorite_color = BLUE;
    
    if (favorite_color == RED)
        printf("Your favorite color is red.\n");
    else if (favorite_color == GREEN)
        printf("Your favorite color is green.\n");
    else if (favorite_color == BLUE)
        printf("Your favorite color is blue.\n");
    
    return 0;
}
