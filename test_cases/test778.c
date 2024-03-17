
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    enum Color my_color = BLUE;

    if (my_color == RED) {
        printf("The color is red.\n");
    } else if (my_color == GREEN) {
        printf("The color is green.\n");
    } else if (my_color == BLUE) {
        printf("The color is blue.\n");
    }

    return 0;
}
