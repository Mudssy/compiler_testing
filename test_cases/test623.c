
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void print_point(struct Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point points[3] = {
        {10, 20},
        {30, 40},
        {50, 60}
    };
    
    for (int i = 0; i < 3; i++) {
        print_point(points[i]);
    }
    
    return 0;
}
