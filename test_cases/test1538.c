
#include <stdio.h>

struct Point { int x; int y; };

int main() {
    struct Point p = (struct Point){ .x = 1, .y = 2 };
    
    printf("Point is at (%d, %d)\n", p.x, p.y);
    
    return 0; // Return statement to ensure termination of the program
}
