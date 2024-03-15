
#include <stdio.h>

typedef enum {
    RED = 0xFF0000,
    GREEN = 0x008000,
    BLUE = 0x0000FF,
} Color;

int main() {
    Color color = GREEN;

    switch (color) {
        case RED:
            printf("The chosen color is Red.\n");
            break;
        case GREEN:
            printf("The chosen color is Green.\n");
            break;
        case BLUE:
            printf("The chosen color is Blue.\n");
            break;
    }

    return 0;
}
