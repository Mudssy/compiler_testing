
#include <stdio.h>

// Define a struct here
struct Point {
    int x;
    int y;
};

int main() {
    // Create an instance of the struct and initialize its values
    struct Point p = {1, 2};

    // Print out some specific output based on that feature
    printf("Point: (%d, %d)\n", p.x, p.y);

    return 0;
}
