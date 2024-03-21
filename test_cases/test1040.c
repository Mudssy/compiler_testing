
#include <stdio.h>

struct point { int x; int y; };

int main() {
    struct point p = { .x = 10, .y = 5 };
    printf("Point: (%d, %d)\n", p.x, p.y);
    return 0;
}
