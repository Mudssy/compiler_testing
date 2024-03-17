
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = { .x = 5, .y = 6 };
    
    printf("Point p1 coordinates are (%d, %d)\n", p1.x, p1.y);
    
    return 0;
}
