
#include <stdio.h>

enum Colors {RED, GREEN, BLUE};

int main() {
    enum Colors myColor = RED;

    switch(myColor) {
        case RED:
            printf("The color is red.\n");
            break;
        case GREEN:
            printf("The color is green.\n");
            break;
        case BLUE:
            printf("The color is blue.\n");
            break;
        default:
            printf("Invalid color.\n");
    }

    return 0;
}
