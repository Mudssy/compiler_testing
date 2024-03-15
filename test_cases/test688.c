
#include <stdio.h>

enum Color {
    RED = 0xFF0000,
    GREEN = 0x00FF00,
    BLUE = 0x0000FF
};

int main() {
    enum Color color = BLUE;

    switch (color) {
        case RED:
            printf("The color is Red.\n");
            break;
        case GREEN:
            printf("The color is Green.\n");
            break;
        case BLUE:
            printf("The color is Blue.\n");
            break;
        default:
            printf("Invalid color code.\n");
    }

    return 0;
}
