
#include <stdio.h>

int main() {
    struct { int x; int y; } s = { .y = 4 };  // Compound Literal
    
    printf("x: %d, y: %d\n", s.x, s.y);
    
    return 0;
}
