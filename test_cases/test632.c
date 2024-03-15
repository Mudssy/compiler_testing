
#include <stdio.h>

typedef enum {
    RED = 0,
    GREEN = 1,
    BLUE = 2,
    YELLOW = 3,
} Color;

void print_color(Color color) {
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
        case YELLOW:
            printf("The color is Yellow.\n");
            break;
        default:
            printf("Invalid color.\n");
    }
}

int main() {
    Color colors[] = { RED, GREEN, BLUE, YELLOW };
    for (int i = 0; i < sizeof(colors) / sizeof(Color); ++i) {
        print_color(colors[i]);
    }
    return 0;
}
