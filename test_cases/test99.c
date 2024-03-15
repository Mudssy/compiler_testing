
#include <stdio.h>

enum COLOR { RED = 5, GREEN = 10, BLUE = 20 };

int main() {
    enum COLOR color;
    color = GREEN;
    
    printf("The value of the green color in the enumeration is: %d\n", color);
    
    return 0;
}
