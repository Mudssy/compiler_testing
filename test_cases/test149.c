
#include <stdio.h>

enum Colors { RED, GREEN, BLUE };

int main() {
    enum Colors myColor = GREEN;

    switch(myColor) {
        case RED:
            printf("Your color is red\n");
            break;
        case GREEN:
            printf("Your color is green\n");
            break;
        case BLUE:
            printf("Your color is blue\n");
            break;
    }

    return 0;
}
