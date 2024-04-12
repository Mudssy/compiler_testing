
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {5, 10};
    
    printf("Point: (%d, %d)\n", p.x, p.y);

    return 0;
}
