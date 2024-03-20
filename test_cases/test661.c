
#include <stdio.h>

typedef struct {
    int x;
    double y;
} Point;

int main() {
    Point p = { .x = 1, .y = 2.5 };
    
    printf("p.x: %d\n", p.x);
    printf("p.y: %f\n", p.y);

    return 0;
}
