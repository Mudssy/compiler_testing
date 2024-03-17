
#include <stdio.h>

struct Point { int x, y; };

void print_point(struct Point p) {
    printf("Point at (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point a = { .x = 10, .y = 20 };  // designated initializers
    print_point(a);
    
    return 0;
}
