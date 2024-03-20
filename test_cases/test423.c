
#include <stdio.h>

struct point { int x, y; };

int main(void) {
    struct point pt = { .y = 10, .x = 5 };

    printf("pt.x = %d, pt.y = %d\n", pt.x, pt.y);
    
    return 0;
}
