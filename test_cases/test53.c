
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    // Declare and initialize a struct variable
    struct Point p = { 10, 20 };
    
    printf("Point (%d, %d)\n", p.x, p.y);
    
    return 0;
}
