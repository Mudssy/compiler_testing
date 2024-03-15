
#include <stdio.h>

enum Color { RED, GREEN, BLUE };

int main() {
    enum Color my_color = GREEN;
    
    switch (my_color) {
        case RED:
            printf("The color is Red.\n");
            break;
        case GREEN:
            printf("The color is Green.\n");
            break;
        case BLUE:
            printf("The color is Blue.\n");
            break;
    }
    
    return 0;
}
