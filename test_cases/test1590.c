
#include <stdio.h>

int main() {
    struct point { int x; int y; } p = { .y = 4, .x = 3 };

    printf("Point: %d, %d\n", p.x, p.y);

    return 0;
}
