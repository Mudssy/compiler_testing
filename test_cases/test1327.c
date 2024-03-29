
#include <stdio.h>

typedef struct Point {
    int x;
    int y;
} Point;

void printPoint(Point p) {
    printf("The point is at (%d, %d)\n", p.x, p.y);
}

int main() {
    Point mypoint = { .x = 5, .y = 7 };
    printPoint(mypoint);
    return 0;
}
