
#include <stdio.h>

enum Color {
    RED = 10,
    GREEN = 25,
    BLUE = 42
};

int main() {
    enum Color color;
    
    color = RED;
    printf("The value of RED is: %d\n", color);

    color = GREEN;
    printf("The value of GREEN is: %d\n", color);

    color = BLUE;
    printf("The value of BLUE is: %d\n", color);

    return 0;
}
