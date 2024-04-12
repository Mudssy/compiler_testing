
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

Point create_point(int x, int y) {
    return (Point){x: x, y: y};
}

void print_point(const char *name, Point p) {
    printf("%s = (%d, %d)\n", name, p.x, p.y);
}

int main() {
    Point a = create_point(1, 2), b = create_point(3, 4);
    
    print_point("a", a); // should print "a = (1, 2)"
    print_point("b", b); // should print "b = (3, 4)"
    
    return 0;
}
