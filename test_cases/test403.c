
#include <stdio.h>

enum Colors {RED, GREEN, BLUE};

int main() {
    enum Colors myColor = RED;
    
    switch (myColor) {
        case RED:
            printf("Your chosen color is Red\n");
            break;
        case GREEN:
            printf("Your chosen color is Green\n");
            break;
        case BLUE:
            printf("Your chosen color is Blue\n");
            break;
        default:
            printf("Invalid color choice\n");
    }
    
    return 0;
}
