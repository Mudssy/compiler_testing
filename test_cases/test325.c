
#include <stdio.h>

struct point { int x, y; };

int main()
{
    struct point p = { .y = 25, .x = 10 }; /* designated initializers */
    printf("p.x = %d\n", p.x);
    printf("p.y = %d\n", p.y);

    return 0;
}
