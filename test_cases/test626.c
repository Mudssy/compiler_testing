
#include <stdio.h>

// Define a struct
typedef struct {
    int x;
    double y;
} point;

int main() {
    // Initialize and print a struct
    point p = {1, 2.0};
    printf("Point: (%d, %f)\n", p.x, p.y);

    return 0;
}
