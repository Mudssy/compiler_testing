
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void setPoint(Point* p, int x, int y) {
    p->x = x;
    p->y = y;
}

int main() {
    Point myPoint;
    setPoint(&myPoint, 3, 4);
    printf("Point coords: (%d, %d)\n", myPoint.x, myPoint.y);
    return 0;
}
