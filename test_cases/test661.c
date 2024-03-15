
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p = { .y = 10, .x = 20 };
    
    printf("Point: (%d, %d)\n", p.x, p.y);

    return 0;
}
