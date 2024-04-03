
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(void) {
    struct Point p = { .x = 3, .y = 4 };
    printf("Point (%d, %d)\n", p.x, p.y);
    return 0; // Indicates successful execution
}
