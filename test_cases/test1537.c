
#include <stdio.h>

struct point { int x, y, z; };

int main(void)
{
    struct point pt = { .y = 2, .z = 3 };

    printf("Point (%d, %d, %d)\n", pt.x, pt.y, pt.z);

    return 0;
}
