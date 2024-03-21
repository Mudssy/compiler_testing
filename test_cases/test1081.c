
#include <stdio.h>

int main(void) {
    struct Point { int x; int y; } p = { .x = 10,  // Indentation
                                         .y = 20 };
    
    printf("Point (%d, %d)\n", p.x, p.y);
    return 0;
}
