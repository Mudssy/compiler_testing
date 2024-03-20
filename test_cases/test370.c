
#include <stdio.h>

enum color { red, green = 10, blue };

int main() {
    enum color c = red;
    printf("red: %d\n", c);
    
    c = green;
    printf("green: %d\n", c);

    c = blue;
    printf("blue: %d\n", c);

    return 0;
}
