
#include <stdio.h>

struct point { int x, y; };

int main(void)
{
    // Struct initialization with designated initializer
    struct point p = { .x = 10, .y = 5 };

    printf("Point: (%d, %d)\n", p.x, p.y);
    
    return 0;
}
