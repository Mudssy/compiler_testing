
#include <stdio.h>

int main() {
    struct point { int x, y; };
    
    // Compound literal initialization
    struct point p = (struct point){ .x = 10, .y = 20 };
    
    printf("X: %d, Y: %d\n", p.x, p.y);
    
    return 0;
}
