
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {1, 2};
    struct Point *ptr_p = &p;
    
    printf("x: %d\n", ptr_p->x); // Accessing member using pointer
    printf("y: %d\n", (*ptr_p).y); // Another way to access member using pointer

    return 0;
}
