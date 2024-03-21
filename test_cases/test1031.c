
#include <stdio.h>

typedef struct {
    int x;
} Point;

Point make_point(int x) {
    Point p = {x};
    return p;
}

void print_point(Point *p) {
    printf("Point: (%d)\n", p->x);
}

int main() {
    Point myPoint = make_point(10);
    print_point(&myPoint);
    
    return 0;
}
